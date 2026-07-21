// Name: FUN_004d4ba0
// Address: 004d4ba0
// Address Range: [[004d4ba0, 004d4f28]]
// Convention: unknown
// Signature: void FUN_004d4ba0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4ba0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  byte *puVar11;
  uint local_2d0 [12];
  uint local_2a0 [12];
  uint local_270 [12];
  uint local_240 [12];
  uint local_210 [12];
  uint local_1e0 [12];
  uint local_1b0 [12];
  uint local_180 [12];
  uint local_150 [12];
  byte local_120 [48];
  byte local_f0 [48];
  byte local_c0 [48];
  uint local_90 [12];
  uint local_60 [3];
  uint local_54;
  uint local_44;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  byte local_24 [12];
  int local_18;
  int local_14;
  
  bVar10 = 0;
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1 + 0x150);
  local_18 = *(int *)(iVar1 + 0x28558);
  puVar6 = (uint *)(param_1 + 0x1a8);
  local_14 = param_1;
  iVar1 = param_1;
  for (iVar2 = 0; iVar7 = _DAT_01cae0e8 * 4, iVar2 < local_18; iVar2 = iVar2 + 1) {
    puVar5 = (uint *)(*(int *)(iVar7 + 0x1cae0d8) + 0x800 + iVar2 * 0x10);
    puVar8 = (uint *)(iVar1 + 0x804 + (uint)bVar10 * -8);
    puVar9 = puVar5 + (uint)bVar10 * -2 + 1;
    *(uint *)(iVar1 + 0x800) = *puVar5;
    puVar5 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar8 = *puVar9;
    *puVar5 = puVar9[(uint)bVar10 * -2 + 1];
    puVar5[(uint)bVar10 * -2 + 1] = (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    puVar5 = (uint *)(iVar2 * 0x30 + *(int *)(iVar7 + 0x1cae0d8) + 0xfd0);
    puVar9 = (uint *)(local_14 + 0xfd0);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    puVar5 = (uint *)(*(int *)(iVar7 + 0x1cae0d8) + 0x1a8 + iVar2 * 0xc);
    if (puVar6 != puVar5) {
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
    }
    iVar1 = iVar1 + 0x10;
    local_14 = local_14 + 0x30;
    puVar6 = puVar6 + 3;
  }
  iVar1 = *(int *)(iVar7 + 0x1cae0d8);
  if ((uint *)(param_1 + 0x7f4) != (uint *)(iVar1 + 0x7f4)) {
    *(uint *)(param_1 + 0x7f4) = *(uint *)(iVar1 + 0x7f4);
    *(uint *)(param_1 + 0x7f8) = *(uint *)(iVar1 + 0x7f8);
    *(uint *)(param_1 + 0x7fc) = *(uint *)(iVar1 + 0x7fc);
  }
  *(uint *)(param_1 + 0x2380) = 0xffffffff;
  iVar1 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c20);
  puVar6 = *(uint **)(iVar1 + 0x10c);
  puVar5 = *(uint **)(param_1 + 0xbef8);
  for (uVar3 = (uint)(*(int *)(iVar1 + 0x104) * 0xc) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)puVar5 = *(byte *)puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
    puVar5 = (uint *)((int)puVar5 + (uint)bVar10 * -2 + 1);
  }
  iVar1 = *(int *)(param_1 + 0x46920);
  if (iVar1 != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(local_120,iVar1 + 0x20,iVar1 + 0x30)
    ;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_c0,*(int *)(param_1 + 0x46920) + 0x20,*(int *)(param_1 + 0x46920) + 0x30);
    iVar1 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_f0,iVar1 + 0x20,iVar1 + 0x30);
    puVar11 = local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0,local_90);
    puVar6 = local_90;
    puVar5 = local_2a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_f0,local_120,local_2a0,puVar11);
    puVar6 = local_210;
    puVar5 = local_2d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_2d0);
    puVar6 = local_1e0;
    puVar5 = local_270;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_270);
    puVar6 = local_1b0;
    puVar5 = local_60;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(0,local_60);
    puVar6 = local_180;
    puVar5 = local_240;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_240);
    puVar6 = local_150;
    puVar5 = local_60;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    local_30 = local_54;
    local_2c = local_44;
    local_28 = local_34;
    *(uint *)(param_1 + 0x20) = local_54;
    *(uint *)(param_1 + 0x24) = local_44;
    *(uint *)(param_1 + 0x28) = local_34;
    puVar6 = (uint *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_60,local_24);
    if ((uint *)(param_1 + 0x30) != puVar6) {
      *(uint *)(param_1 + 0x30) = *puVar6;
      *(uint *)(param_1 + 0x34) = puVar6[1];
      *(uint *)(param_1 + 0x38) = puVar6[2];
      return;
    }
  }
  return;
}
