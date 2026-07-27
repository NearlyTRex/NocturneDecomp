// Name: core_scat.cpp_FUN_004fdd00
// Address: 004fdd00
// Address Range: [[004fdd00, 004fde21]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_004fdd00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_004fdd00(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  byte local_160 [48];
  byte local_130 [48];
  uint local_100 [12];
  uint local_d0 [12];
  uint local_a0 [12];
  uint local_70 [12];
  uint local_40;
  uint local_3c;
  uint local_38;
  byte local_34 [12];
  uint local_28;
  uint local_24;
  uint local_20;
  byte local_1c [12];
  
  bVar6 = 0;
  if ((*(int *)(param_1 + 0x1fa50) != 0) && (*(int *)(*(int *)(param_1 + 0x1fa50) + 0x2d8) != 8)) {
    local_40 = 0;
    local_38 = 0x3fc90fdb;
    local_3c = 0x3fc90fdb;
    local_28 = 0x3ec817db;
    local_24 = 0xbdd340d5;
    local_20 = 0x3ddfa765;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(local_130,&local_28,&local_40)
    ;
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_130,param_1 + 0xfd0 + _DAT_01e533c0 * 0x30);
    puVar4 = local_d0;
    puVar5 = local_70;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_160,param_1 + 0x20,param_1 + 0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_70,local_160);
    puVar4 = local_100;
    puVar5 = local_a0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar3 = *(int *)(param_1 + 0x1fa50);
    iVar1 = *(int *)(iVar3 + 0x14c);
    uVar2 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_a0,local_34);
    uVar2 = core_xform_cpp_getTranslation_FUN_0055bc00(local_a0,local_1c,uVar2);
    (**(code **)(iVar1 + 0x60))(iVar3,uVar2);
    return;
  }
  return;
}
