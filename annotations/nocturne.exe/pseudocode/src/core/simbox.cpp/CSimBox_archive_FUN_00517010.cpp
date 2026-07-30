// Name: core_simbox.cpp_CSimBox_archive_FUN_00517010
// Address: 00517010
// Address Range: [[00517010, 005170b8]]
// Convention: unknown
// Signature: void core_simbox_cpp_CSimBox_archive_FUN_00517010(CDemonActor *param_1)

#include "nocturne.h"

void core_simbox_cpp_CSimBox_archive_FUN_00517010(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].orient,"weight");
  if (g_INT_005be964 < 2) {
    if (g_INT_005be964 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveVector_FUN_0040c450
              ((CVector3f *)(param_1[2].create_event + 0x20),"initialVelocity");
    core_actor_cpp_archiveVector_FUN_0040c450
              ((CVector3f *)(param_1[2].create_event + 0x2c),"initRotVel");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)((int)&param_1[2].orient + 4),"triggerEvent");
    if (g_INT_005be964 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].location.area_id,"type");
  return;
}
