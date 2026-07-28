// Name: core_grave.cpp_CGrave_archive_FUN_004b0e20
// Address: 004b0e20
// Address Range: [[004b0e20, 004b0f19]]
// Convention: unknown
// Signature: void core_grave_cpp_CGrave_archive_FUN_004b0e20(CDemonActor *param_1)

#include "nocturne.h"

void core_grave_cpp_CGrave_archive_FUN_004b0e20(CDemonActor *param_1)

{
  int local_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"model name");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].orient,"fps");
  if (INT_005ba8c8 < 2) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&local_c,"active");
    param_1[2].orient.vec.z = 0.0;
    if (local_c != 0) {
      param_1[2].orient.vec.z = 1.4013e-45;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[2].orient.vec.z,"graveState");
  }
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)&param_1[2].location.area_id,"curFrame");
  if (2 < INT_005ba8c8) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[2].orient_matrix,"hideOnFirstFrame");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[2].orient_matrix.m[0].y,"startCondition");
  }
  if (INT_005ba8c8 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 0x2c,"startSound");
  return;
}
