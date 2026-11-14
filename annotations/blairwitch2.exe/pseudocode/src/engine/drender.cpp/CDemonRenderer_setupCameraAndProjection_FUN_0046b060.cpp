// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
// Address: 0046b060
// Address Range: [[0046b060, 0046b27e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  float afStackY_1010 [1017];
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  core_dirmat_cpp_FUN_004496e0(transform_matrix);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fVar7 = (float10)_DAT_005d156b;
  fVar8 = (float10)transform_matrix->m[0].x * (float10)_DAT_005d157b;
  fVar9 = (float10)transform_matrix->m[0].y * (float10)_DAT_005d157b;
  fVar10 = (float10)transform_matrix->m[0].z * (float10)_DAT_005d157b;
  fVar11 = (float10)transform_matrix->m[1].x * (float10)_DAT_005d157b;
  fVar12 = (float10)local_1c * fVar7 * (float10)_DAT_005d1573;
  fVar13 = (float10)local_14 * fVar7 * (float10)_DAT_005d1573;
  fVar14 = (float10)local_18 * fVar7 * (float10)_DAT_005d1573;
  round();
  _DAT_01c38b9c = (uint)ROUND(fVar8);
  fVar7 = (float10)transform_matrix->m[1].y * (float10)_DAT_005d157b;
  round();
  _DAT_01c38ba0 = (uint)ROUND(fVar9);
  fVar8 = (float10)transform_matrix->m[1].z * (float10)_DAT_005d157b;
  round();
  _DAT_01c38ba4 = (int)ROUND(fVar10);
  fVar9 = (float10)transform_matrix->m[2].x * (float10)_DAT_005d157b;
  round();
  _DAT_01c38ba8 = (uint)ROUND(fVar11);
  fVar10 = (float10)transform_matrix->m[2].y * (float10)_DAT_005d157b;
  round();
  iVar2 = DAT_006141e4;
  _DAT_01c38bac = (uint)ROUND(fVar7);
  fVar7 = (float10)transform_matrix->m[2].z * (float10)_DAT_005d157b;
  round();
  round();
  round();
  round();
  _DAT_01c38bb0 = (int)ROUND(fVar8);
  _DAT_01c38bb4 = (uint)ROUND(fVar9);
  _DAT_01c38bb8 = (uint)ROUND(fVar10);
  _DAT_01c38bbc = (int)ROUND(fVar7);
  round();
  round();
  uVar15 = round();
  iVar3 = _DAT_01c35e54;
  iVar4 = _DAT_01c35e4c;
  _DAT_01c38b84 = (int)ROUND(fVar12);
  _DAT_01c38b88 = (int)ROUND(fVar13);
  _DAT_01c38b8c = (int)ROUND(fVar14);
  iVar5 = _DAT_01c35e50 - _DAT_01c35e48;
  this_ptr->projection_reciprocal =
       (int)(((longlong)(int)uVar15 * (longlong)(int)((ulonglong)uVar15 >> 0x20)) / (longlong)iVar2)
  ;
  iVar2 = DAT_006141e4;
  iVar4 = ((iVar5 + 1) * 0x10000) / ((iVar3 - iVar4) + 1);
  this_ptr->aspect_ratio_fixed = iVar4;
  this_ptr->aspect_ratio_fixed =
       (int)((longlong)
             ((((longlong)iVar4 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar4 * 0x10000 & 0xffffffffU) / (longlong)iVar2);
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c38b9c;
  _DAT_01c38b9c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c38ba8;
  _DAT_01c38ba8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c38bb4;
  _DAT_01c38bb4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c38ba0;
  _DAT_01c38ba0 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c38bac;
  _DAT_01c38bac = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c38bb8;
  _DAT_01c38bb8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_004e8730();
  return;
}
