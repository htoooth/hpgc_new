/// @brief 所有并行地理算法统一调用前端
///
/// -np 进程个数，-hostfile 计算节点信息，-alg 算法名称，
/// -par 划分策略，-sch 调度策略，[options...]其他算法参数。
///
/// @ref AlgFactoryMan处理-alg参数，@ref ParFactory处理-par参数，
/// @ref SchFactory处理-sch参数，@ref AlgFactory整合这些参数，
/// 算法的其余参数由算法本身解析处理
/// 
/// hpgc framework按照上述指定参数执行相应并行算法，
/// 如相应信息没有指定则使用默认值，参数有误则退出执行。

#include "HpgcVectorAlgorithm.h"
#include "cvct2gdal.h"
#include "CvctPartition.h"
#include "P2pScheduler.h"

using namespace hpgc;

int main(int argc, char ** argv)
{
	auto partition = new CvctPartition();
	auto scheduler = new P2pScheduler();
	auto vct = new Cvct2Gdal();
	auto alg = new HpgcVectorAlgorithm(vct,scheduler,partition);

	alg->Run();

	return 1;
}