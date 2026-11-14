// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
// Address: 00483560
// Address Range: [[00483560, 0048377e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

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
  core_dirmat_cpp_FUN_0045f840(transform_matrix);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fVar7 = (float10)_DAT_005db364;
  fVar8 = (float10)transform_matrix->m[0].x * (float10)_DAT_005db374;
  fVar9 = (float10)transform_matrix->m[0].y * (float10)_DAT_005db374;
  fVar10 = (float10)transform_matrix->m[0].z * (float10)_DAT_005db374;
  fVar11 = (float10)transform_matrix->m[1].x * (float10)_DAT_005db374;
  fVar12 = (float10)local_1c * fVar7 * (float10)_DAT_005db36c;
  fVar13 = (float10)local_14 * fVar7 * (float10)_DAT_005db36c;
  fVar14 = (float10)local_18 * fVar7 * (float10)_DAT_005db36c;
  round();
  _DAT_01c51d5c = (uint)ROUND(fVar8);
  fVar7 = (float10)transform_matrix->m[1].y * (float10)_DAT_005db374;
  round();
  _DAT_01c51d60 = (uint)ROUND(fVar9);
  fVar8 = (float10)transform_matrix->m[1].z * (float10)_DAT_005db374;
  round();
  _DAT_01c51d64 = (int)ROUND(fVar10);
  fVar9 = (float10)transform_matrix->m[2].x * (float10)_DAT_005db374;
  round();
  _DAT_01c51d68 = (uint)ROUND(fVar11);
  fVar10 = (float10)transform_matrix->m[2].y * (float10)_DAT_005db374;
  round();
  iVar2 = DAT_0061b4c4;
  _DAT_01c51d6c = (uint)ROUND(fVar7);
  fVar7 = (float10)transform_matrix->m[2].z * (float10)_DAT_005db374;
  round();
  round();
  round();
  round();
  _DAT_01c51d70 = (int)ROUND(fVar8);
  _DAT_01c51d74 = (uint)ROUND(fVar9);
  _DAT_01c51d78 = (uint)ROUND(fVar10);
  _DAT_01c51d7c = (int)ROUND(fVar7);
  round();
  round();
  uVar15 = round();
  iVar3 = _DAT_01c4f014;
  iVar4 = _DAT_01c4f00c;
  _DAT_01c51d44 = (int)ROUND(fVar12);
  _DAT_01c51d48 = (int)ROUND(fVar13);
  _DAT_01c51d4c = (int)ROUND(fVar14);
  iVar5 = _DAT_01c4f010 - _DAT_01c4f008;
  this_ptr->projection_reciprocal =
       (int)(((longlong)(int)uVar15 * (longlong)(int)((ulonglong)uVar15 >> 0x20)) / (longlong)iVar2)
  ;
  iVar2 = DAT_0061b4c4;
  iVar4 = ((iVar5 + 1) * 0x10000) / ((iVar3 - iVar4) + 1);
  this_ptr->aspect_ratio_fixed = iVar4;
  this_ptr->aspect_ratio_fixed =
       (int)((longlong)
             ((((longlong)iVar4 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar4 * 0x10000 & 0xffffffffU) / (longlong)iVar2);
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c51d5c;
  _DAT_01c51d5c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c51d68;
  _DAT_01c51d68 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c51d74;
  _DAT_01c51d74 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c51d60;
  _DAT_01c51d60 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c51d6c;
  _DAT_01c51d6c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c51d78;
  _DAT_01c51d78 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_005073d0();
  return;
}
