// Name: core_mimic.cpp_FUN_004d4ba0
// Address: 004d4ba0
// Address Range: [[004d4ba0, 004d4f28]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004d4ba0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_FUN_004d4ba0(int param_1)

{
  CSkeleton *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  CMatrix3x4f *pCVar13;
  byte bVar14;
  byte *puVar15;
  uint local_2d0 [12];
  uint local_2a0 [12];
  uint local_270 [12];
  uint local_240 [12];
  uint local_210 [12];
  uint local_1e0 [12];
  float local_1b0 [12];
  uint local_180 [12];
  float local_150 [12];
  CMatrix3x4f local_120;
  byte local_f0 [48];
  byte local_c0 [48];
  uint local_90 [12];
  CMatrix3x4f local_60;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  bVar14 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                     ((CDeformableModelInstance *)(param_1 + 0x150));
  local_18 = pCVar1->bone_count;
  puVar8 = (uint *)(param_1 + 0x1a8);
  local_14 = param_1;
  iVar5 = param_1;
  for (iVar2 = 0; iVar9 = _DAT_01cae0e8 * 4, iVar2 < local_18; iVar2 = iVar2 + 1) {
    puVar7 = (uint *)(*(int *)(iVar9 + 0x1cae0d8) + 0x800 + iVar2 * 0x10);
    puVar11 = (uint *)(iVar5 + 0x804 + (uint)bVar14 * -8);
    puVar12 = puVar7 + (uint)bVar14 * -2 + 1;
    *(uint *)(iVar5 + 0x800) = *puVar7;
    puVar7 = puVar11 + (uint)bVar14 * -2 + 1;
    *puVar11 = *puVar12;
    *puVar7 = puVar12[(uint)bVar14 * -2 + 1];
    puVar7[(uint)bVar14 * -2 + 1] = (puVar12 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
    puVar7 = (uint *)(iVar2 * 0x30 + *(int *)(iVar9 + 0x1cae0d8) + 0xfd0);
    puVar12 = (uint *)(local_14 + 0xfd0);
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar7;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
    }
    puVar7 = (uint *)(*(int *)(iVar9 + 0x1cae0d8) + 0x1a8 + iVar2 * 0xc);
    if (puVar8 != puVar7) {
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
    }
    iVar5 = iVar5 + 0x10;
    local_14 = local_14 + 0x30;
    puVar8 = puVar8 + 3;
  }
  iVar5 = *(int *)(iVar9 + 0x1cae0d8);
  if ((uint *)(param_1 + 0x7f4) != (uint *)(iVar5 + 0x7f4)) {
    *(uint *)(param_1 + 0x7f4) = *(uint *)(iVar5 + 0x7f4);
    *(uint *)(param_1 + 0x7f8) = *(uint *)(iVar5 + 0x7f8);
    *(uint *)(param_1 + 0x7fc) = *(uint *)(iVar5 + 0x7fc);
  }
  *(uint *)(param_1 + 0x2380) = 0xffffffff;
  iVar5 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c20);
  puVar8 = *(uint **)(iVar5 + 0x10c);
  puVar7 = *(uint **)(param_1 + 0xbef8);
  for (uVar4 = (uint)(*(int *)(iVar5 + 0x104) * 0xc) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(byte *)puVar7 = *(byte *)puVar8;
    puVar8 = (uint *)((int)puVar8 + (uint)bVar14 * -2 + 1);
    puVar7 = (uint *)((int)puVar7 + (uint)bVar14 * -2 + 1);
  }
  iVar5 = *(int *)(param_1 + 0x46920);
  if (iVar5 != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (&local_120,(CVector3f *)(iVar5 + 0x20),(CVector3f *)(iVar5 + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_c0,*(int *)(param_1 + 0x46920) + 0x20,*(int *)(param_1 + 0x46920) + 0x30);
    iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_f0,iVar5 + 0x20,iVar5 + 0x30);
    puVar15 = local_c0;
    core_xform_cpp_buildZFlipMatrix_FUN_0055ca90(0,local_90);
    puVar8 = local_90;
    puVar7 = local_2a0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_f0,&local_120,local_2a0,puVar15);
    puVar8 = local_210;
    puVar7 = local_2d0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_2d0);
    puVar8 = local_1e0;
    puVar7 = local_270;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_270);
    pfVar10 = local_1b0;
    pCVar13 = &local_60;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar13->m[0].w = *pfVar10;
      pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar14 * -2 + 1) * 4);
    }
    core_xform_cpp_buildXFlipMatrix_FUN_0055c9d0(0,&local_60);
    puVar8 = local_180;
    puVar7 = local_240;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar8;
      puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar14 * -2 + 1;
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_240);
    pfVar10 = local_150;
    pCVar13 = &local_60;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      pCVar13->m[0].w = *pfVar10;
      pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
      pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar14 * -2 + 1) * 4);
    }
    local_30 = local_60.m[0].z;
    local_2c = local_60.m[1].z;
    local_28 = local_60.m[2].z;
    *(float *)(param_1 + 0x20) = local_60.m[0].z;
    *(float *)(param_1 + 0x24) = local_60.m[1].z;
    *(float *)(param_1 + 0x28) = local_60.m[2].z;
    pCVar3 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_60,&local_24);
    if ((CVector3f *)(param_1 + 0x30) != pCVar3) {
      ((CVector3f *)(param_1 + 0x30))->x = pCVar3->x;
      *(float *)(param_1 + 0x34) = pCVar3->y;
      *(float *)(param_1 + 0x38) = pCVar3->z;
      return;
    }
  }
  return;
}
