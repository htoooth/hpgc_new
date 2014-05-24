#ifndef MessageTag_h__
#define MessageTag_h__

#include "VectorBarrel.h"

namespace hpgc{
	class MessageTag
	{
	public:
		static const int MSG_TAG_TASK = 1;
		static const int MSG_TAG_TASK_OK = 1;
		static const int MSG_TAG_TASK_WRONG = 0;
		static const int MSG_TAG_DATA = 2;
		static const int MSG_TAG_DATA_OK = 1;
		static const int MSG_TAG_DATA_WRONG = 0;
	};

	struct TaskInfo {
		int IsOk;
		int DataIndex;
		double StartTime;
		double EndTime;

	};

	struct DataInfo{
		int IsOk;
		int DataIndex;
		VectorBarral * Barrel;
	};

	void MPI_SendTaskInfo(TaskInfo & info, int process,int tag);
	TaskInfo * MPI_ReceiveTaskInfo(int process,int tag);

	void MPI_SendDataInfo(DataInfo & info, int process, int tag);
	DataInfo * MPI_ReceiveDataInfo(int process, int tag);
}

#endif // MessageTag_h__
