// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
// Address: 004607b0
// Address Range: [[004607b0, 004609cd]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float10 fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float local_20 [2];
  float local_18;
  
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(param_2,local_20);
  fVar13 = (float10)_DAT_0057dc0d;
  fVar14 = (float10)_DAT_0057dc0d;
  fVar15 = (float10)_DAT_0057dc15;
  fVar4 = (float10)_DAT_0057dc15;
  fVar9 = (float10)round();
  _DAT_01c039e8 = (uint)ROUND(fVar9);
  fVar9 = (float10)round();
  _DAT_01c039ec = (uint)ROUND(fVar9);
  fVar9 = (float10)round();
  _DAT_01c039f0 = (int)ROUND(fVar9);
  fVar9 = (float10)round();
  _DAT_01c039f4 = (uint)ROUND(fVar9);
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar9 = (float10)_DAT_0057dc1d;
  fVar10 = (float10)round();
  iVar5 = DAT_005b7648;
  _DAT_01c039f8 = (uint)ROUND(fVar10);
  fVar2 = *(float *)(param_2 + 0x20);
  fVar10 = (float10)_DAT_0057dc1d;
  fVar11 = (float10)round();
  fVar12 = (float10)round();
  fVar9 = (float10)round((float10)fVar1 * fVar9);
  uVar19 = 0x4608bd;
  fVar10 = (float10)round((float10)fVar2 * fVar10);
  _DAT_01c039fc = (int)ROUND(fVar11);
  _DAT_01c03a00 = (uint)ROUND(fVar12);
  _DAT_01c03a04 = (uint)ROUND(fVar9);
  _DAT_01c03a08 = (int)ROUND(fVar10);
  uVar18 = 0x4608e2;
  fVar13 = (float10)round((float10)local_20[0] * fVar13 * fVar15);
  uVar17 = 0x4608e9;
  fVar14 = (float10)round((float10)local_18 * fVar14 * fVar4);
  uVar16 = 0x4608f0;
  fVar15 = (float10)round();
  iVar6 = _DAT_01c00c64;
  iVar7 = _DAT_01c00c5c;
  _DAT_01c039d0 = (int)ROUND(fVar13);
  _DAT_01c039d4 = (int)ROUND(fVar14);
  _DAT_01c039d8 = (int)ROUND(fVar15);
  iVar8 = _DAT_01c00c60 - _DAT_01c00c58;
  *(int *)(param_1 + 0x24) = (int)(0x100000000 / (longlong)iVar5);
  iVar5 = DAT_005b7648;
  iVar7 = ((iVar8 + 1) * 0x10000) / ((iVar6 - iVar7) + 1);
  *(int *)(param_1 + 0x28) = iVar7;
  *(int *)(param_1 + 0x28) =
       (int)((longlong)
             ((((longlong)iVar7 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar7 * 0x10000 & 0xffffffffU) / (longlong)iVar5);
  lVar3 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c039e8;
  _DAT_01c039e8 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c039f4;
  _DAT_01c039f4 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x24) * (longlong)(int)_DAT_01c03a00;
  _DAT_01c03a00 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c039ec;
  _DAT_01c039ec = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c039f8;
  _DAT_01c039f8 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)_DAT_01c03a04;
  _DAT_01c03a04 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_004ccae0(uVar16,uVar17,uVar18,uVar19);
  return;
}
