// Name: core_vehicle.cpp_CVehicle_archive_FUN_0054f370
// Address: 0054f370
// Address Range: [[0054f370, 0054f4f0]]
// Convention: unknown
// Signature: void core_vehicle_cpp_CVehicle_archive_FUN_0054f370(CDemonActor *param_1)

#include "nocturne.h"

void core_vehicle_cpp_CVehicle_archive_FUN_0054f370(CDemonActor *param_1)

{
  int iVar1;
  char *float_ptr;
  char *float_ptr_00;
  CKeyFramedModelInstance *model_ptr;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 7),"tireCount");
  iVar1 = 0;
  if (0 < *(int *)param_1[7].actor_name) {
    float_ptr_00 = param_1[7].actor_name + 0x14;
    float_ptr = param_1[7].actor_name + 0x10;
    model_ptr = (CKeyFramedModelInstance *)(param_1[7].actor_name + 0x18);
    do {
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(model_ptr,(char *)0x0);
      core_actor_cpp_archiveVector_FUN_0040c450
                ((CVector3f *)((int)param_1 + iVar1 * 0x1b4 + 0x934),"static_bpos");
      core_actor_cpp_archiveFloat_FUN_0040c880((float *)float_ptr,"radius");
      core_actor_cpp_archiveFloat_FUN_0040c880((float *)float_ptr_00,"width");
      model_ptr = (CKeyFramedModelInstance *)(model_ptr[1].part_visibility_flags + 0xe);
      iVar1 = iVar1 + 1;
      float_ptr = float_ptr + 0x1b4;
      float_ptr_00 = float_ptr_00 + 0x1b4;
    } while (iVar1 < *(int *)param_1[7].actor_name);
  }
  if (INT_005c11a0 < 2) {
    if (INT_005c11a0 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[0xc].health,"curTime");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[0xc].validation_magic,"totalTime");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[0xc].direction_hint,"courseName");
    if (INT_005c11a0 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[0xc].create_event + 0x30),"lastMobsterLeft");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[0xc].create_event + 0x30),"lastMobsterRight");
  return;
}
