// Name: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// Address: 004a1f40
// Address Range: [[004a1f40, 004a204e]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f * start_point, CVector3f * end_point)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point)

{
  int iVar1;
  SRenderVertex *pSVar2;
  int *piVar3;
  byte bVar4;
  SRenderVertex *in_stack_ffffff64;
  SRenderVertex *in_stack_ffffff68;
  int aiStack_6c [9];
  uint uStack_48;
  CVector3i local_24;
  float local_18;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  local_24.x = (int)ROUND(start_point->x * 256.0f);
  local_24.y = (int)ROUND(start_point->y * 256.0f);
  local_24.z = (int)ROUND(start_point->z * 256.0f);
  uStack_48 = 0x4a1f82;
  engine_matrix_c_transformToCache_FUN_0050cd70(0,&local_24);
  local_18 = start_point->x * 0.8f + end_point->x * 0.2f;
  local_14 = start_point->y * 0.8f + end_point->y * 0.2f;
  local_10 = 0.8f * start_point->z + 0.2f * end_point->z;
  local_24.x = (int)ROUND(local_18 * 256.0f);
  local_24.y = (int)ROUND(local_14 * 256.0f);
  local_24.z = (int)ROUND(local_10 * 256.0f);
  uStack_48 = 0x4a201b;
  engine_matrix_c_transformToCache_FUN_0050cd70(1,&local_24);
  pSVar2 = g_RenderVertexBuffer + 1;
  piVar3 = aiStack_6c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  pSVar2 = g_RenderVertexBuffer;
  piVar3 = (int *)&stack0xffffff64;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff64,in_stack_ffffff68);
  return;
}
