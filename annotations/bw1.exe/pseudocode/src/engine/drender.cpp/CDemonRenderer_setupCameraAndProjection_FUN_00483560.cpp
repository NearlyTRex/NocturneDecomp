// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
// Address: 00483560
// Address Range: [[00483560, 0048377e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float afStackY_1010 [1017];
  CVector3f local_28;
  float local_1c;
  float local_18 [2];
  
  bVar20 = 0;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045f840(transform_matrix,&local_28);
  local_1c = local_28.x;
  local_18[(uint)bVar20 * -2] = *(float *)((int)&local_28 + (uint)bVar20 * -8 + 4);
  local_18[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
  fVar6 = local_1c * _DAT_005db364;
  fVar7 = local_18[1] * _DAT_005db364;
  fVar8 = local_18[0] * _DAT_005db364;
  fVar1 = transform_matrix->m[0].y;
  fVar12 = (float)_DAT_005db374;
  fVar2 = transform_matrix->m[0].z;
  fVar13 = (float)_DAT_005db374;
  fVar3 = transform_matrix->m[1].x;
  fVar14 = (float)_DAT_005db374;
  fVar11 = (float)_DAT_005db36c;
  fVar10 = (float)_DAT_005db36c;
  fVar9 = (float)_DAT_005db36c;
  dVar21 = round((double)(transform_matrix->m[0].x * (float)_DAT_005db374));
  _DAT_01c51d5c = (uint)ROUND(dVar21);
  fVar4 = transform_matrix->m[1].y;
  fVar15 = (float)_DAT_005db374;
  dVar21 = round((double)(fVar1 * fVar12));
  _DAT_01c51d60 = (uint)ROUND(dVar21);
  fVar1 = transform_matrix->m[1].z;
  fVar12 = (float)_DAT_005db374;
  dVar21 = round((double)(fVar2 * fVar13));
  _DAT_01c51d64 = (int)ROUND(dVar21);
  fVar2 = transform_matrix->m[2].x;
  fVar13 = (float)_DAT_005db374;
  dVar21 = round((double)(fVar3 * fVar14));
  _DAT_01c51d68 = (uint)ROUND(dVar21);
  fVar3 = transform_matrix->m[2].y;
  fVar14 = (float)_DAT_005db374;
  dVar21 = round((double)(fVar4 * fVar15));
  iVar16 = DAT_0061b4c4;
  _DAT_01c51d6c = (uint)ROUND(dVar21);
  fVar4 = transform_matrix->m[2].z;
  fVar15 = (float)_DAT_005db374;
  dVar21 = round((double)(fVar1 * fVar12));
  dVar22 = round((double)(fVar2 * fVar13));
  dVar23 = round((double)(fVar3 * fVar14));
  dVar24 = round((double)(fVar4 * fVar15));
  _DAT_01c51d70 = (int)ROUND(dVar21);
  _DAT_01c51d74 = (uint)ROUND(dVar22);
  _DAT_01c51d78 = (uint)ROUND(dVar23);
  _DAT_01c51d7c = (int)ROUND(dVar24);
  dVar21 = round((double)(fVar6 * fVar11));
  dVar22 = round((double)(fVar7 * fVar10));
  dVar23 = round((double)(fVar8 * fVar9));
  iVar17 = _DAT_01c4f014;
  iVar18 = _DAT_01c4f00c;
  _DAT_01c51d44 = (int)ROUND(dVar21);
  _DAT_01c51d48 = (int)ROUND(dVar22);
  _DAT_01c51d4c = (int)ROUND(dVar23);
  iVar19 = _DAT_01c4f010 - _DAT_01c4f008;
  this_ptr->projection_reciprocal = (int)(0x100000000 / (longlong)iVar16);
  iVar16 = DAT_0061b4c4;
  iVar18 = ((iVar19 + 1) * 0x10000) / ((iVar17 - iVar18) + 1);
  this_ptr->aspect_ratio_fixed = iVar18;
  this_ptr->aspect_ratio_fixed =
       (int)((longlong)
             ((((longlong)iVar18 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar18 * 0x10000 & 0xffffffffU) / (longlong)iVar16);
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c51d5c;
  _DAT_01c51d5c = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c51d68;
  _DAT_01c51d68 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)(int)_DAT_01c51d74;
  _DAT_01c51d74 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c51d60;
  _DAT_01c51d60 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c51d6c;
  _DAT_01c51d6c = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)(int)_DAT_01c51d78;
  _DAT_01c51d78 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_005073d0();
  return;
}
