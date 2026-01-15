// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
// Address: 0048c200
// Address Range: [[0048c200, 0048c41d]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix, CVector3f * rotation_angles)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
          (CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix,CVector3f *rotation_angles)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int extraout_EAX;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  CVector3f local_1c;
  
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(transform_matrix,&local_1c);
  fVar6 = (float10)transform_matrix->m[0].y * (float10)65536;
  fVar7 = (float10)transform_matrix->m[0].z * (float10)65536;
  fVar8 = (float10)transform_matrix->m[1].x * (float10)65536;
  fVar9 = (float10)local_1c.x * (float10)0.31830988619288902 * (float10)32768
  ;
  fVar10 = (float10)local_1c.z * (float10)0.31830988619288902 *
           (float10)32768;
  fVar11 = (float10)local_1c.y * (float10)0.31830988619288902 *
           (float10)32768;
  dVar13 = crt_math_c_round_FUN_005fe6b0
                     ((double)(transform_matrix->m[0].x * (float)65536));
  g_TransformMatrix.m[0].x = (int)ROUND(dVar13);
  fVar12 = (float10)transform_matrix->m[1].y * (float10)65536;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  g_TransformMatrix.m[0].y = (int)ROUND(dVar13);
  fVar6 = (float10)transform_matrix->m[1].z * (float10)65536;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  g_TransformMatrix.m[0].z = (int)ROUND(dVar13);
  fVar7 = (float10)transform_matrix->m[2].x * (float10)65536;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  g_TransformMatrix.m[1].x = (int)ROUND(dVar13);
  fVar8 = (float10)transform_matrix->m[2].y * (float10)65536;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  iVar2 = g_ProjectionScale;
  g_TransformMatrix.m[1].y = (int)ROUND(dVar13);
  fVar12 = (float10)transform_matrix->m[2].z * (float10)65536;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  fVar6 = (float10)dVar13;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  fVar7 = (float10)dVar13;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  fVar8 = (float10)dVar13;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar12);
  g_TransformMatrix.m[1].z = (int)ROUND(fVar6);
  g_TransformMatrix.m[2].x = (int)ROUND(fVar7);
  g_TransformMatrix.m[2].y = (int)ROUND(fVar8);
  g_TransformMatrix.m[2].z = (int)ROUND(dVar13);
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  fVar6 = (float10)dVar13;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
  fVar7 = (float10)dVar13;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar11);
  iVar3 = g_ClipBottom;
  iVar4 = g_ClipTop;
  g_CameraRotationPitch = (int)ROUND(fVar6);
  g_CameraRotationYaw = (int)ROUND(fVar7);
  g_CameraRotationRoll = (int)ROUND(dVar13);
  iVar5 = g_ClipRight - g_ClipLeft;
  this_ptr[1].vertex_buffer_ptr =
       (SRenderVertex *)(((longlong)extraout_EAX * (longlong)extraout_EDX) / (longlong)iVar2);
  iVar2 = g_ProjectionScale;
  iVar4 = ((iVar5 + 1) * 0x10000) / ((iVar3 - iVar4) + 1);
  this_ptr[1].face_count = iVar4;
  this_ptr[1].face_count = (int)(((longlong)iVar4 * 0x10000) / (longlong)iVar2);
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
