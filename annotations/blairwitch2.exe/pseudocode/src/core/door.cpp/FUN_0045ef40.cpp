// Name: core_door.cpp_FUN_0045ef40
// Address: 0045ef40
// Address Range: [[0045ef40, 0045efb1]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_0045ef40(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_FUN_0045ef40(CDemonActor *param_1)

{
  int iVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408a80(param_1);
  iVar1 = _strcmp(&param_1[1].field_0x190,"defaultDoorOpen");
  if (iVar1 == 0) {
    FUN_005b7790(&param_1[1].field_0x190,"%sOpen",param_1);
  }
  iVar1 = _strcmp(&param_1[1].field_0x1f4,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  FUN_005b7790(&param_1[1].field_0x1f4,"%sClose",param_1);
  return;
}
