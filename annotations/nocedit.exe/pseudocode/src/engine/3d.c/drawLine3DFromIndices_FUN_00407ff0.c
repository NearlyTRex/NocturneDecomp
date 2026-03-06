// Name: engine_3d.c_drawLine3DFromIndices_FUN_00407ff0
// Address: 00407ff0
// Address Range: [[00407ff0, 00408062]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)

{
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  SRenderVertex in_stack_ffffff38;
  SRenderVertex in_stack_ffffff68;
  SRenderVertex local_68;
  SRenderVertex local_38;
  
  pSVar2 = g_RenderVertexBuffer + vertex_index1;
  pSVar3 = &local_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + 4);
  }
  pSVar2 = g_RenderVertexBuffer + vertex_index2;
  pSVar3 = &local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar3->projected_vertex).transformed_x = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
  }
  pSVar2 = &local_38;
  piVar4 = (int *)&stack0xffffff68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar4 = piVar4 + 1;
  }
  pSVar2 = &local_68;
  piVar4 = (int *)&stack0xffffff38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar4 = piVar4 + 1;
  }
  engine_3d_c_clipAndDrawLine3D_FUN_00408070(in_stack_ffffff38,in_stack_ffffff68);
  return;
}
