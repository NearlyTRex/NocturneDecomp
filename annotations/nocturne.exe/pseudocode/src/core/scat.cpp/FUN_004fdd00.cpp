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
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  byte local_160 [48];
  byte local_130 [48];
  float local_100 [12];
  uint local_d0 [12];
  CMatrix3x4f local_a0;
  uint local_70 [12];
  uint local_40;
  uint local_3c;
  uint local_38;
  CVector3f local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  CVector3f local_1c;
  
  bVar9 = 0;
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
    puVar5 = local_d0;
    puVar7 = local_70;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_160,param_1 + 0x20,param_1 + 0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_70,local_160);
    pfVar6 = local_100;
    pCVar8 = &local_a0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      pCVar8->m[0].w = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
    }
    iVar4 = *(int *)(param_1 + 0x1fa50);
    iVar1 = *(int *)(iVar4 + 0x14c);
    pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_a0,&local_34);
    pCVar3 = core_xform_cpp_getTranslation_FUN_0055bc00(&local_a0,&local_1c);
    (**(code **)(iVar1 + 0x60))(iVar4,pCVar3,pCVar2);
    return;
  }
  return;
}
