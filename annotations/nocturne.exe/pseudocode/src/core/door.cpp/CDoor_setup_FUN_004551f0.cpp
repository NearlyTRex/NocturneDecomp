// Name: core_door.cpp_CDoor_setup_FUN_004551f0
// Address: 004551f0
// Address Range: [[004551f0, 00455261]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_setup_FUN_004551f0(int param_1)

#include "nocturne.h"

void core_door_cpp_CDoor_setup_FUN_004551f0(int param_1)

{
  int iVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar1 = _strcmp(param_1 + 0x2e0,"defaultDoorOpen");
  if (iVar1 == 0) {
    _sprintf(param_1 + 0x2e0,"%sOpen",param_1);
  }
  iVar1 = _strcmp(param_1 + 0x344,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  _sprintf(param_1 + 0x344,"%sClose",param_1);
  return;
}
