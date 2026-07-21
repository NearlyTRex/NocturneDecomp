// Name: core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0053a660
// Address: 0053a660
// Address Range: [[0053a660, 0053a75c]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint local_114 [12];
  uint local_e4 [12];
  uint local_b4 [12];
  byte local_84 [48];
  uint local_54 [12];
  byte local_24 [12];
  byte local_18 [12];
  
  bVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x1fa94);
  if (((iVar3 != 0) && (iVar3 != *(int *)(param_1 + 0x24ac))) &&
     (iVar3 != *(int *)(param_1 + 0x24f0))) {
    core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
              (param_1,*(uint *)(param_1 + 0x1fa94),param_2 == 0);
    puVar4 = local_114;
    puVar5 = local_b4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_84,param_1 + 0x20,param_1 + 0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_b4,local_84);
    puVar4 = local_54;
    puVar5 = local_e4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar3 = *(int *)(param_1 + 0x1fa94);
    iVar1 = *(int *)(iVar3 + 0x14c);
    uVar2 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_e4,local_24);
    uVar2 = core_xform_cpp_getTranslation_FUN_0055bc00(local_e4,local_18,uVar2);
    (**(code **)(iVar1 + 0x60))(iVar3,uVar2);
  }
  return;
}
