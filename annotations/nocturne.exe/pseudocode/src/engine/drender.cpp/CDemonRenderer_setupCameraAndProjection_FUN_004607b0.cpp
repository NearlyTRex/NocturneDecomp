// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
// Address: 004607b0
// Address Range: [[004607b0, 004609cd]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  CVector3f local_20;
  
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(transform_matrix,&local_20);
  fVar1 = transform_matrix->m[0].y;
  fVar6 = (float)65536;
  fVar2 = transform_matrix->m[0].z;
  fVar7 = (float)65536;
  fVar3 = transform_matrix->m[1].x;
  fVar8 = (float)65536;
  fVar10 = (float)0.31830988619288902;
  fVar12 = (float)0.31830988619288902;
  fVar14 = (float)0.31830988619288902;
  fVar9 = (float)32768;
  fVar11 = (float)32768;
  fVar13 = (float)32768;
  dVar20 = round
                     ((double)(transform_matrix->m[0].x * (float)65536));
  g_TransformMatrix.m[0].x = (int)ROUND(dVar20);
  fVar4 = transform_matrix->m[1].y;
  fVar15 = (float)65536;
  dVar20 = round((double)(fVar1 * fVar6));
  g_TransformMatrix.m[0].y = (int)ROUND(dVar20);
  fVar1 = transform_matrix->m[1].z;
  fVar6 = (float)65536;
  dVar20 = round((double)(fVar2 * fVar7));
  g_TransformMatrix.m[0].z = (int)ROUND(dVar20);
  fVar2 = transform_matrix->m[2].x;
  fVar7 = (float)65536;
  dVar20 = round((double)(fVar3 * fVar8));
  g_TransformMatrix.m[1].x = (int)ROUND(dVar20);
  fVar3 = transform_matrix->m[2].y;
  fVar8 = (float)65536;
  dVar20 = round((double)(fVar4 * fVar15));
  iVar16 = DAT_005b7648;
  g_TransformMatrix.m[1].y = (int)ROUND(dVar20);
  fVar4 = transform_matrix->m[2].z;
  fVar15 = (float)65536;
  dVar20 = round((double)(fVar1 * fVar6));
  dVar21 = round((double)(fVar2 * fVar7));
  dVar22 = round((double)(fVar3 * fVar8));
  dVar23 = round((double)(fVar4 * fVar15));
  g_TransformMatrix.m[1].z = (int)ROUND(dVar20);
  g_TransformMatrix.m[2].x = (int)ROUND(dVar21);
  g_TransformMatrix.m[2].y = (int)ROUND(dVar22);
  g_TransformMatrix.m[2].z = (int)ROUND(dVar23);
  dVar20 = round((double)(local_20.x * fVar10 * fVar9));
  dVar21 = round((double)(local_20.z * fVar12 * fVar11));
  dVar22 = round((double)(local_20.y * fVar14 * fVar13));
  iVar17 = g_ClipBottom;
  iVar18 = g_ClipTop;
  _DAT_01c039d0 = (int)ROUND(dVar20);
  _DAT_01c039d4 = (int)ROUND(dVar21);
  _DAT_01c039d8 = (int)ROUND(dVar22);
  iVar19 = g_ClipRight - g_ClipLeft;
  this_ptr->projection_reciprocal = (int)(0x100000000 / (longlong)iVar16);
  iVar16 = DAT_005b7648;
  iVar18 = ((iVar19 + 1) * 0x10000) / ((iVar17 - iVar18) + 1);
  this_ptr->aspect_ratio_fixed = iVar18;
  this_ptr->aspect_ratio_fixed =
       (int)((longlong)
             ((((longlong)iVar18 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar18 * 0x10000 & 0xffffffffU) / (longlong)iVar16);
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)g_TransformMatrix.m[0].x;
  g_TransformMatrix.m[0].x = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)g_TransformMatrix.m[1].x;
  g_TransformMatrix.m[1].x = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)g_TransformMatrix.m[2].x;
  g_TransformMatrix.m[2].x = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)g_TransformMatrix.m[0].y;
  g_TransformMatrix.m[0].y = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)g_TransformMatrix.m[1].y;
  g_TransformMatrix.m[1].y = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)g_TransformMatrix.m[2].y;
  g_TransformMatrix.m[2].y = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_004ccae0();
  return;
}
