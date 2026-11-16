// Name: core_charactr.cpp_FUN_00422c10
// Address: 00422c10
// Address Range: [[00422c10, 00422c2f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00422c10(CDemonActor *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00422c10(CDemonActor *param_1)

{
  core_motion_cpp_CMotionController_detachMotionList_FUN_00503810
            ((CMotionController *)(param_1 + 1));
  core_actor_cpp_CDemonActor_markResourcesInUse_FUN_00408ac0(param_1);
  return;
}
