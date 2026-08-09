// Name: engine_3d.c_drawLine2DFromIndices_FUN_00409210
// Address: 00409210
// Address Range: [[00409210, 00409282]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00409210(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00409210(int vertex_index1,int vertex_index2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  SRenderVertex in_stack_ffffff38;
  SRenderVertex in_stack_ffffff68;
  uint local_68 [12];
  uint local_38 [12];
  
  puVar2 = &DAT_005c5014 + vertex_index1 * 0xc;
  puVar3 = local_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_005c5014 + vertex_index2 * 0xc;
  puVar3 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_38;
  puVar3 = (uint *)&stack0xffffff68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_68;
  puVar3 = (uint *)&stack0xffffff38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00409290(in_stack_ffffff38,in_stack_ffffff68);
  return;
}
