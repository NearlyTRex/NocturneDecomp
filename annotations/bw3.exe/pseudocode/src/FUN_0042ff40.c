// Name: FUN_0042ff40
// Address: 0042ff40
// Address Range: [[0042ff40, 0042ff68]]
// Convention: unknown
// Signature: void FUN_0042ff40(int param_1)

#include "nocturne.h"

void FUN_0042ff40(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  uint auStack_1c [6];
  
  puVar2 = (uint *)(param_1 + 0x2788);
  puVar3 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + 1;
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}
