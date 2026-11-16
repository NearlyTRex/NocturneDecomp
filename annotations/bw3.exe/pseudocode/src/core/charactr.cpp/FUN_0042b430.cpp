// Name: core_charactr.cpp_FUN_0042b430
// Address: 0042b430
// Address Range: [[0042b430, 0042b44f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b430(CDemonActor *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042b430(CDemonActor *param_1)

{
  core_motion_cpp_CMotionController_detachMotionList_FUN_004fc2c0
            ((CMotionController *)(param_1 + 1));
  core_actor_cpp_CDemonActor_markResourcesInUse_FUN_004088d0(param_1);
  return;
}
