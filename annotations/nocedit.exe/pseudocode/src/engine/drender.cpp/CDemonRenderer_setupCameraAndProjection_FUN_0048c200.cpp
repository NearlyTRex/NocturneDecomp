// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
// Address: 0048c200
// Address Range: [[0048c200, 0048c41d]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)

{
  longlong lVar2;
  int iVar6;
  int iVar4;
  int iVar5;
  CVector3f local_20;
  int iVar3;
  int iVar2;
  longlong lVar1;
  
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(transform_matrix,&local_20);
  iVar3 = g_ClipBottom;
  iVar6 = g_ClipTop;
  g_TransformMatrix.m[0].x =
       (int)ROUND(ROUND(transform_matrix->m[0].x * (float)65536));
  g_TransformMatrix.m[0].y =
       (int)ROUND(ROUND(transform_matrix->m[0].y * (float)65536));
  g_TransformMatrix.m[0].z =
       (int)ROUND(ROUND(transform_matrix->m[0].z * (float)65536));
  g_TransformMatrix.m[1].x =
       (int)ROUND(ROUND(transform_matrix->m[1].x * (float)65536));
  g_TransformMatrix.m[1].y =
       (int)ROUND(ROUND(transform_matrix->m[1].y * (float)65536));
  g_TransformMatrix.m[1].z =
       (int)ROUND(ROUND(transform_matrix->m[1].z * (float)65536));
  g_TransformMatrix.m[2].x =
       (int)ROUND(ROUND(transform_matrix->m[2].x * (float)65536));
  g_TransformMatrix.m[2].y =
       (int)ROUND(ROUND(transform_matrix->m[2].y * (float)65536));
  g_TransformMatrix.m[2].z =
       (int)ROUND(ROUND(transform_matrix->m[2].z * (float)65536));
  g_CameraRotationPitch =
       (int)ROUND(ROUND(local_20.x * (float)0.31830988619288902 *
                        (float)32768));
  g_CameraRotationYaw =
       (int)ROUND(ROUND(local_20.z * (float)0.31830988619288902 *
                        (float)32768));
  g_CameraRotationRoll =
       (int)ROUND(ROUND(local_20.y * (float)0.31830988619288902 *
                        (float)32768));
  iVar5 = g_ClipRight - g_ClipLeft;
  this_ptr[1].vertex_buffer_ptr = (SRenderVertex *)(0x100000000 / (longlong)g_ProjectionScale);
  iVar2 = g_ProjectionScale;
  iVar4 = ((iVar5 + 1) * 0x10000) / ((iVar3 - iVar6) + 1);
  this_ptr[1].face_count = iVar4;
  this_ptr[1].face_count =
       (int)((longlong)
             ((((longlong)iVar4 & 0xffffffffffffU) >> 0x10) << 0x20 |
             (longlong)iVar4 * 0x10000 & 0xffffffffU) / (longlong)iVar2);
  lVar1 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[0].x;
  g_TransformMatrix.m[0].x = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar2 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[1].x;
  g_TransformMatrix.m[1].x = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[2].x;
  g_TransformMatrix.m[2].x = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[0].y;
  g_TransformMatrix.m[0].y = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[1].y;
  g_TransformMatrix.m[1].y = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[2].y;
  g_TransformMatrix.m[2].y = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  engine_matrix_c_invertTransformMatrix_FUN_0050c640();
  return;
}
