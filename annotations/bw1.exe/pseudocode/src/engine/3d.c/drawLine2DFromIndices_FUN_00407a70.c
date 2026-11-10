// Name: engine_3d.c_drawLine2DFromIndices_FUN_00407a70
// Address: 00407a70
// Address Range: [[00407a70, 00407ae2]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407a70(int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLine2DFromIndices_FUN_00407a70(int vertex_index1,int vertex_index2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint auStack_c8 [12];
  uint auStack_98 [12];
  uint auStack_68 [12];
  uint auStack_38 [12];
  
  puVar2 = &DAT_00629014 + vertex_index1 * 0xc;
  puVar3 = auStack_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_00629014 + vertex_index2 * 0xc;
  puVar3 = auStack_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_38;
  puVar3 = auStack_98;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_68;
  puVar3 = auStack_c8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
  return;
}
