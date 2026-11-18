// Name: engine_3d.c_drawLine3DFromIndices_FUN_00407f40
// Address: 00407f40
// Address Range: [[00407f40, 00407fb2]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407f40(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine3DFromIndices_FUN_00407f40(int vertex_index1,int vertex_index2)

{
  int iVar1;
  SRenderVertex *pSVar2;
  int *piVar3;
  int *piVar4;
  SRenderVertex in_stack_ffffff38;
  SRenderVertex in_stack_ffffff68;
  int aiStack_68 [12];
  int aiStack_38 [12];
  
  pSVar2 = g_SRenderVertex_ARRAY_00622014 + vertex_index1;
  piVar3 = aiStack_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar3 = piVar3 + 1;
  }
  pSVar2 = g_SRenderVertex_ARRAY_00622014 + vertex_index2;
  piVar3 = aiStack_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (pSVar2->projected_vertex).transformed_x;
    pSVar2 = (SRenderVertex *)&(pSVar2->projected_vertex).transformed_y;
    piVar3 = piVar3 + 1;
  }
  piVar3 = aiStack_38;
  piVar4 = (int *)&stack0xffffff68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = aiStack_68;
  piVar4 = (int *)&stack0xffffff38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  engine_3d_c_clipAndDrawLine3D_FUN_00407fc0(in_stack_ffffff38,in_stack_ffffff68);
  return;
}
