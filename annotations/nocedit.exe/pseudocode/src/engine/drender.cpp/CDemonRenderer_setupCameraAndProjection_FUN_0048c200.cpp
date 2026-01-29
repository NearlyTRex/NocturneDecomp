// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
// Address: 0048c200
// Address Range: [[0048c200, 0048c41d]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 (CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix,CVector3f *rotation_angles)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
          (CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix,CVector3f *rotation_angles)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  CVector3f local_20;
  
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(transform_matrix,&local_20);
  fVar8 = (float10)transform_matrix->m[0].y * (float10)65536;
  fVar9 = (float10)transform_matrix->m[0].z * (float10)65536;
  fVar10 = (float10)transform_matrix->m[1].x * (float10)65536;
  fVar3 = (float)0.31830988619288902;
  fVar2 = (float)32768;
  fVar11 = (float10)local_20.z * (float10)0.31830988619288902 *
           (float10)32768;
  fVar12 = (float10)local_20.y * (float10)0.31830988619288902 *
           (float10)32768;
  dVar14 = round
                     ((double)(transform_matrix->m[0].x * (float)65536));
  g_TransformMatrix.m[0].x = (int)ROUND(dVar14);
  fVar13 = (float10)transform_matrix->m[1].y * (float10)65536;
  dVar14 = round((double)fVar8);
  g_TransformMatrix.m[0].y = (int)ROUND(dVar14);
  fVar8 = (float10)transform_matrix->m[1].z * (float10)65536;
  dVar14 = round((double)fVar9);
  g_TransformMatrix.m[0].z = (int)ROUND(dVar14);
  fVar9 = (float10)transform_matrix->m[2].x * (float10)65536;
  dVar14 = round((double)fVar10);
  g_TransformMatrix.m[1].x = (int)ROUND(dVar14);
  fVar10 = (float10)transform_matrix->m[2].y * (float10)65536;
  dVar14 = round((double)fVar13);
  iVar4 = g_ProjectionScale;
  g_TransformMatrix.m[1].y = (int)ROUND(dVar14);
  fVar13 = (float10)transform_matrix->m[2].z * (float10)65536;
  dVar14 = round((double)fVar8);
  fVar8 = (float10)dVar14;
  dVar14 = round((double)fVar9);
  fVar9 = (float10)dVar14;
  dVar14 = round((double)fVar10);
  fVar10 = (float10)dVar14;
  dVar14 = round((double)fVar13);
  g_TransformMatrix.m[1].z = (int)ROUND(fVar8);
  g_TransformMatrix.m[2].x = (int)ROUND(fVar9);
  g_TransformMatrix.m[2].y = (int)ROUND(fVar10);
  g_TransformMatrix.m[2].z = (int)ROUND(dVar14);
  dVar14 = round((double)(local_20.x * fVar3 * fVar2));
  dVar15 = round((double)fVar11);
  fVar8 = (float10)dVar15;
  dVar15 = round((double)fVar12);
  iVar5 = g_ClipBottom;
  iVar6 = g_ClipTop;
  g_CameraRotationPitch = (int)ROUND(dVar14);
  g_CameraRotationYaw = (int)ROUND(fVar8);
  g_CameraRotationRoll = (int)ROUND(dVar15);
  iVar7 = g_ClipRight - g_ClipLeft;
  this_ptr[1].vertex_buffer_ptr = (SRenderVertex *)(0x100000000 / (longlong)iVar4);
  iVar4 = g_ProjectionScale;
  iVar6 = ((iVar7 + 1) * 0x10000) / ((iVar5 - iVar6) + 1);
  this_ptr[1].face_count = iVar6;
  this_ptr[1].face_count = (int)(((longlong)iVar6 * 0x10000) / (longlong)iVar4);
  lVar1 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[0].x;
  g_TransformMatrix.m[0].x = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[1].x;
  g_TransformMatrix.m[1].x = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[2].x;
  g_TransformMatrix.m[2].x = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[0].y;
  g_TransformMatrix.m[0].y = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[1].y;
  g_TransformMatrix.m[1].y = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[2].y;
  g_TransformMatrix.m[2].y = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_0050c640();
  return;
}
