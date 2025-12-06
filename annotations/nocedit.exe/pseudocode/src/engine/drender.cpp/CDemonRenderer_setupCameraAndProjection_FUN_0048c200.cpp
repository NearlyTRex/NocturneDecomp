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
  CVector3f *pCVar4;
  int iVar5;
  uint extraout_EDX;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  uint uStack00000010;
  CVector3f local_20;
  float fStack_14;
  
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(transform_matrix,&local_20);
  fVar7 = (float10)transform_matrix->m[0].x * (float10)65536;
  fVar8 = (float10)transform_matrix->m[0].y * (float10)65536;
  fVar9 = (float10)transform_matrix->m[0].z * (float10)65536;
  fVar10 = (float10)transform_matrix->m[1].x * (float10)65536;
  fVar11 = (float10)local_20.y * (float10)0.31830988619288902 *
           (float10)32768;
  fVar12 = (float10)fStack_14 * (float10)0.31830988619288902 * (float10)32768
  ;
  fVar13 = (float10)local_20.z * (float10)0.31830988619288902 *
           (float10)32768;
  local_20.x = 6.681925e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar4));
  g_TransformMatrix.m[0].x = (int)ROUND(fVar7);
  fVar7 = (float10)transform_matrix->m[1].y * (float10)65536;
  local_20.y = 6.681956e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[0].y = (int)ROUND(fVar8);
  fVar8 = (float10)transform_matrix->m[1].z * (float10)65536;
  local_20.z = 6.681987e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[0].z = (int)ROUND(fVar9);
  fVar9 = (float10)transform_matrix->m[2].x * (float10)65536;
  fStack_14 = 6.682017e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[1].x = (int)ROUND(fVar10);
  fVar10 = (float10)transform_matrix->m[2].y * (float10)65536;
  crt_math_c_round_FUN_005fe6b0(dVar14);
  iVar2 = g_ProjectionScale;
  g_TransformMatrix.m[1].y = (int)ROUND(fVar7);
  fVar7 = (float10)transform_matrix->m[2].z * (float10)65536;
  dVar14 = crt_math_c_round_FUN_005fe6b0(1.39067116189079e-309);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[1].z = (int)ROUND(fVar8);
  g_TransformMatrix.m[2].x = (int)ROUND(fVar9);
  g_TransformMatrix.m[2].y = (int)ROUND(fVar10);
  g_TransformMatrix.m[2].z = (int)ROUND(fVar7);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  iVar3 = g_ClipBottom;
  iVar5 = g_ClipTop;
  g_CameraRotationPitch = (int)ROUND(fVar11);
  g_CameraRotationYaw = (int)ROUND(fVar12);
  g_CameraRotationRoll = (int)ROUND(fVar13);
  iVar6 = g_ClipRight - g_ClipLeft;
  this_ptr[1].vertex_buffer_ptr =
       (SRenderVertex *)
       (((longlong)SUB84 /* extract 2-byte value */(dVar14,0) * (longlong)(int)((ulonglong)dVar14 >> 0x20)) / (longlong)iVar2);
  iVar2 = g_ProjectionScale;
  iVar5 = ((iVar6 + 1) * 0x10000) / ((iVar3 - iVar5) + 1);
  this_ptr[1].face_count = iVar5;
  this_ptr[1].face_count = (int)(((longlong)iVar5 * 0x10000) / (longlong)iVar2);
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
  uStack00000010 = 0x48c417;
  engine_matrix_c_invertTransformMatrix_FUN_0050c640();
  return;
}
