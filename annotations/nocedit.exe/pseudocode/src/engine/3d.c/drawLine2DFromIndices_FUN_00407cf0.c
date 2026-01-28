// Name: engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
// Address: 00407cf0
// Address Range: [[00407cf0, 00407d62]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_c8 */
/* WARNING: Variable defined which should be unmapped: local_98 */

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(int vertex_index1,int vertex_index2)

{
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  SRenderVertex local_c8;
  SRenderVertex local_98;
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
  pSVar3 = &local_98;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + 4);
  }
  pSVar2 = &local_68;
  pSVar3 = &local_c8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    pSVar3 = (SRenderVertex *)((int)pSVar3 + 4);
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_c8,local_98);
  return;
}
