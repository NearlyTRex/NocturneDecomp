// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// Address: 004a1f40
// Address Range: [[004a1f40, 004a204e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_6c */
/* WARNING: Variable defined which should be unmapped: local_9c */

void __cdecl
shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

{
  SRenderVertex vertex2;
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  byte bVar4;
  SRenderVertex local_9c;
  SRenderVertex local_6c;
  CVector3i local_24;
  float local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  local_24.x = (int)ROUND(start_point->x * 256.0f);
  local_24.y = (int)ROUND(start_point->y * 256.0f);
  local_24.z = (int)ROUND(start_point->z * 256.0f);
  local_6c.w_recip = (float)&local_24;
  local_6c.fog = 0.0;
  local_6c.color = 0x4a1f82;
  engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_6c.w_recip);
  local_18 = start_point->x * 0.8f + end_point->x * 0.2f;
  local_14 = start_point->y * 0.8f + end_point->y * 0.2f;
  local_10 = 0.8f * start_point->z + 0.2f * end_point->z;
  local_24.x = (int)ROUND(local_18 * 256.0f);
  local_24.y = (int)ROUND(local_14 * 256.0f);
  local_24.z = (int)ROUND(local_10 * 256.0f);
  local_6c.w_recip = (float)&local_24;
  local_6c.fog = 1.4013e-45;
  local_6c.color = 0x4a201b;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)local_6c.w_recip);
  pSVar2 = g_RenderVertexBuffer + 1;
  pSVar3 = &local_6c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  pSVar2 = g_RenderVertexBuffer;
  pSVar3 = &local_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  vertex2.color = local_6c.color;
  vertex2.projected_vertex = local_6c.projected_vertex;
  vertex2.u = local_6c.u;
  vertex2.v = local_6c.v;
  vertex2.light = local_6c.light;
  vertex2.fog = local_6c.fog;
  vertex2.w_recip = local_6c.w_recip;
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_9c,vertex2);
  return;
}
