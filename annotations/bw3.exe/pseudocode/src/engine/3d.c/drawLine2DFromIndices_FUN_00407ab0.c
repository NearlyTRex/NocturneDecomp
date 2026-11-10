// Name: engine_3d.c_drawLine2DFromIndices_FUN_00407ab0
// Address: 00407ab0
// Address Range: [[00407ab0, 00407b22]]
// Convention: unknown
// Signature: void engine_3d_c_drawLine2DFromIndices_FUN_00407ab0(int param_1,int param_2)

#include "nocturne.h"

void engine_3d_c_drawLine2DFromIndices_FUN_00407ab0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint auStack_c8 [12];
  uint auStack_98 [12];
  uint auStack_68 [12];
  uint auStack_38 [12];
  
  puVar2 = &DAT_0060b014 + param_1 * 0xc;
  puVar3 = auStack_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_0060b014 + param_2 * 0xc;
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
  engine_3d_c_clipAndDrawLine2D_FUN_00407b30();
  return;
}
