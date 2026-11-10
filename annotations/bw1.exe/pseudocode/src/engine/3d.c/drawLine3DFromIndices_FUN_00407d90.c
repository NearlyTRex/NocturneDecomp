// Name: engine_3d.c_drawLine3DFromIndices_FUN_00407d90
// Address: 00407d90
// Address Range: [[00407d90, 00407de2]]
// Convention: unknown
// Signature: void engine_3d_c_drawLine3DFromIndices_FUN_00407d90(void)

#include "nocturne.h"

void engine_3d_c_drawLine3DFromIndices_FUN_00407d90(void)

{
  int in_ECX;
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *unaff_EDI;
  uint *puVar3;
  int in_stack_00000070;
  uint auStack_60 [12];
  uint auStack_30 [12];
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  puVar2 = &DAT_00629014 + in_stack_00000070 * 0xc;
  puVar3 = (uint *)&stack0x00000030;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (uint *)&stack0x00000030;
  puVar3 = auStack_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (uint *)register0x00000010;
  puVar3 = auStack_60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  engine_3d_c_clipAndDrawLine3D_FUN_00407df0();
  return;
}
