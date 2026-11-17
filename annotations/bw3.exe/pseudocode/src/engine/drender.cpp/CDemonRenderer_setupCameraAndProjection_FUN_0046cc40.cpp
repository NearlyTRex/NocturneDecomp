// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
// Address: 0046cc40
// Address Range: [[0046cc40, 0046ce5e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

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
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045b9b0(transform_matrix,&local_28);
  local_1c = local_28.x;
  local_18[(uint)bVar20 * -2] = *(float *)((int)&local_28 + (uint)bVar20 * -8 + 4);
  local_18[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
  fVar6 = local_1c * 0.3183099f;
  fVar7 = local_18[1] * 0.3183099f;
  fVar8 = local_18[0] * 0.3183099f;
  fVar1 = transform_matrix->m[0].y;
  fVar12 = (float)65536;
  fVar2 = transform_matrix->m[0].z;
  fVar13 = (float)65536;
  fVar3 = transform_matrix->m[1].x;
  fVar14 = (float)65536;
  fVar11 = (float)32768;
  fVar10 = (float)32768;
  fVar9 = (float)32768;
  dVar21 = round
                     ((double)(transform_matrix->m[0].x * (float)65536));
  g_INT_01c6e2fc = (int)ROUND(dVar21);
  fVar4 = transform_matrix->m[1].y;
  fVar15 = (float)65536;
  dVar21 = round((double)(fVar1 * fVar12));
  g_INT_01c6e300 = (int)ROUND(dVar21);
  fVar1 = transform_matrix->m[1].z;
  fVar12 = (float)65536;
  dVar21 = round((double)(fVar2 * fVar13));
  g_INT_01c6e304 = (int)ROUND(dVar21);
  fVar2 = transform_matrix->m[2].x;
  fVar13 = (float)65536;
  dVar21 = round((double)(fVar3 * fVar14));
  g_INT_01c6e308 = (int)ROUND(dVar21);
  fVar3 = transform_matrix->m[2].y;
  fVar14 = (float)65536;
  dVar21 = round((double)(fVar4 * fVar15));
  iVar16 = g_ProjectionScale;
  g_INT_01c6e30c = (int)ROUND(dVar21);
  fVar4 = transform_matrix->m[2].z;
  fVar15 = (float)65536;
  dVar21 = round((double)(fVar1 * fVar12));
  dVar22 = round((double)(fVar2 * fVar13));
  dVar23 = round((double)(fVar3 * fVar14));
  dVar24 = round((double)(fVar4 * fVar15));
  g_INT_01c6e310 = (int)ROUND(dVar21);
  g_INT_01c6e314 = (int)ROUND(dVar22);
  g_INT_01c6e318 = (int)ROUND(dVar23);
  g_INT_01c6e31c = (int)ROUND(dVar24);
  dVar21 = round((double)(fVar6 * fVar11));
  dVar22 = round((double)(fVar7 * fVar10));
  dVar23 = round((double)(fVar8 * fVar9));
  iVar17 = g_INT_01c6b5b4;
  iVar18 = g_INT_01c6b5ac;
  g_CameraRotationPitch = (int)ROUND(dVar21);
  g_CameraRotationYaw = (int)ROUND(dVar22);
  g_CameraRotationRoll = (int)ROUND(dVar23);
  iVar19 = g_INT_01c6b5b0 - g_INT_01c6b5a8;
  this_ptr->projection_reciprocal = (int)(0x100000000 / (longlong)iVar16);
  iVar16 = g_ProjectionScale;
  iVar18 = ((iVar19 + 1) * 0x10000) / ((iVar17 - iVar18) + 1);
  this_ptr->aspect_ratio_fixed = iVar18;
  this_ptr->aspect_ratio_fixed =
       (int)((longlong)
             ((((longlong)iVar18 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar18 * 0x10000 & 0xffffffffU) / (longlong)iVar16);
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)g_INT_01c6e2fc;
  g_INT_01c6e2fc = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)g_INT_01c6e308;
  g_INT_01c6e308 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->projection_reciprocal * (longlong)g_INT_01c6e314;
  g_INT_01c6e314 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)g_INT_01c6e300;
  g_INT_01c6e300 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)g_INT_01c6e30c;
  g_INT_01c6e30c = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  lVar5 = (longlong)this_ptr->aspect_ratio_fixed * (longlong)g_INT_01c6e318;
  g_INT_01c6e318 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_004e4e10();
  return;
}
