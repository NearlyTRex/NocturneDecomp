// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// Address: 004a1f40
// MANUAL RECONSTRUCTION
// Address Range: [[004a1f40, 004a204e] [0060dda9, 0060de5c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

{
  CVector3i pt;

  pt.x = (int)ROUND(start_point->x * 256.0f);
  pt.y = (int)ROUND(start_point->y * 256.0f);
  pt.z = (int)ROUND(start_point->z * 256.0f);
  engine_matrix_c_transformToCache_FUN_0050cd70(0, &pt);
  pt.x = (int)ROUND((start_point->x * 0.8f + end_point->x * 0.2f) * 256.0f);
  pt.y = (int)ROUND((start_point->y * 0.8f + end_point->y * 0.2f) * 256.0f);
  pt.z = (int)ROUND((start_point->z * 0.8f + end_point->z * 0.2f) * 256.0f);
  engine_matrix_c_transformToCache_FUN_0050cd70(1, &pt);
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[0], g_RenderVertexBuffer[1]);
  return;
}
