// Name: FUN_00585c90
// Address: 00585c90
// Address Range: [[00585c90, 00585ccc]]
// Convention: unknown
// Signature: void FUN_00585c90(int param_1)

#include "nocturne.h"

void FUN_00585c90(int param_1)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_20 [6];
  
  bVar5 = 0;
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  puVar3 = *(uint **)(iVar1 + 0x350);
  puVar4 = auStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = auStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
