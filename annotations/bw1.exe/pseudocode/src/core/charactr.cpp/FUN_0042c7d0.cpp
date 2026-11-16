// Name: core_charactr.cpp_FUN_0042c7d0
// Address: 0042c7d0
// Address Range: [[0042c7d0, 0042c7ef]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042c7d0(CDemonActor *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042c7d0(CDemonActor *param_1)

{
  core_motion_cpp_CMotionController_detachMotionList_FUN_005249b0
            ((CMotionController *)(param_1 + 1));
  core_actor_cpp_CDemonActor_markResourcesInUse_FUN_00408890(param_1);
  return;
}
