// Name: core_stranger.cpp_getCarriedObjectVerticalOffset_FUN_00534fc0
// Address: 00534fc0
// Address Range: [[00534fc0, 00535088]]
// Convention: unknown
// Signature: float core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(undefined4 param_1)

#include "nocturne.h"

float core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  
  iVar5 = 0;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (param_1,g_CBoxActorActorType_00764800.name_hash);
  if (iVar1 != 0) {
    iVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(iVar1 + 0x150);
  }
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (param_1,g_CCryptVesselActorType_02dd11cc.name_hash);
  if (iVar1 != 0) {
    iVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(iVar1 + 0x150);
  }
  if (iVar5 != 0) {
    iVar6 = 0;
    iVar1 = 0;
    iVar4 = 0;
    local_14 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(iVar5 + 0x104); iVar3 = iVar3 + 1) {
      piVar2 = (int *)(*(int *)(iVar5 + 0x10c) + iVar4);
      if (iVar6 < *piVar2) {
        local_14 = piVar2[1];
        iVar6 = *piVar2;
      }
      if (iVar1 < piVar2[1]) {
        iVar1 = piVar2[1];
      }
      iVar4 = iVar4 + 0xc;
    }
    return (float)(iVar1 - local_14) * (float)0.00390625;
  }
  return 0.0;
}
