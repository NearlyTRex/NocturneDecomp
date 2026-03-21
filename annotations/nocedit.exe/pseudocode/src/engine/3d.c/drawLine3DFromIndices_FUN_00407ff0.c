// Name: engine_3d.c_drawLine3DFromIndices_FUN_00407ff0
// Address: 00407ff0
// Address Range: [[00407ff0, 00408062] [004b1b14, 004b1bc5]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407ff0(int vertex_index1,int vertex_index2)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  int iVar1;
  SRenderVertex *pSVar2;
  SRenderVertex *pSVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
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
  iVar5 = local_38.projected_vertex.transformed_x;
  iVar6 = local_38.projected_vertex.transformed_y;
  iVar7 = local_38.projected_vertex.transformed_z;
  iVar8 = local_38.projected_vertex.inv_z;
  iVar9 = local_38.projected_vertex.screen_x;
  iVar10 = local_38.projected_vertex.screen_y;
  iVar11 = local_38.u;
  iVar12 = local_38.v;
  iVar13 = local_38.r;
  iVar14 = local_38.g;
  iVar15 = local_38.b;
  iVar16 = local_38.a;
  for (iVar1 = local_38.a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar4 = piVar4 + 1;
  }
  pSVar2 = &local_68;
  piVar4 = (int *)&stack0xffffff38;
  for (iVar1 = local_68.a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar4 = piVar4 + 1;
  }
  vertex1.projected_vertex.transformed_y = local_68.projected_vertex.transformed_y;
  vertex1.projected_vertex.transformed_x = local_68.projected_vertex.transformed_x;
  vertex1.projected_vertex.transformed_z = local_68.projected_vertex.transformed_z;
  vertex1.projected_vertex.inv_z = local_68.projected_vertex.inv_z;
  vertex1.projected_vertex.screen_x = local_68.projected_vertex.screen_x;
  vertex1.projected_vertex.screen_y = local_68.projected_vertex.screen_y;
  vertex1.u = local_68.u;
  vertex1.v = local_68.v;
  vertex1.r = local_68.r;
  vertex1.g = local_68.g;
  vertex1.b = local_68.b;
  vertex1.a = local_68.a;
  vertex2.projected_vertex.transformed_y = iVar6;
  vertex2.projected_vertex.transformed_x = iVar5;
  vertex2.projected_vertex.transformed_z = iVar7;
  vertex2.projected_vertex.inv_z = iVar8;
  vertex2.projected_vertex.screen_x = iVar9;
  vertex2.projected_vertex.screen_y = iVar10;
  vertex2.u = iVar11;
  vertex2.v = iVar12;
  vertex2.r = iVar13;
  vertex2.g = iVar14;
  vertex2.b = iVar15;
  vertex2.a = iVar16;
  engine_3d_c_clipAndDrawLine3D_FUN_00408070(vertex1,vertex2);
  return;
}
