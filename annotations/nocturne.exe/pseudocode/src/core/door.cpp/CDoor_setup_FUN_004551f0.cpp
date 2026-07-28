// Name: core_door.cpp_CDoor_setup_FUN_004551f0
// Address: 004551f0
// Address Range: [[004551f0, 00455261]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_setup_FUN_004551f0(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_CDoor_setup_FUN_004551f0(CDemonActor *param_1)

{
  float *str1;
  int iVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  str1 = &param_1[2].orient_matrix.m[0].y;
  iVar1 = _strcmp((char *)str1,"defaultDoorOpen");
  if (iVar1 == 0) {
    _sprintf(str1,"%sOpen",param_1);
  }
  iVar1 = _strcmp
                    (param_1[2].create_event + 0x2c,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  _sprintf(param_1[2].create_event + 0x2c,"%sClose",param_1);
  return;
}
