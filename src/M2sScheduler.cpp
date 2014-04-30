#include "M2sScheduler.h"
#include <mpiobject.h>

#include "MasterRole.h"
#include "SlaveRole.h"

void hpgc::M2sScheduler::Work(IV2VAlgorithm * task,
                              HpgcVectorAlgorithm * hpgcAlg) {
    MPIObject mo;
    IRole * node = NULL;
    if (mo.IsMaster()) {
        auto src = hpgcAlg->GetMetaData()->GetSrcMetaData();
        auto partition = hpgcAlg->GetPartition();
        VectorCellar * srcCellar = partition->Partition(src);
        node = new MasterRole(srcCellar);
    }
    else {
        auto dst = hpgcAlg->GetMetaData()->GetDstMetaData();
        node = new SlaveRole(task, dst);
    }
    node->Action();
}



