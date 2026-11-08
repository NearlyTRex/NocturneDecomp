// Name: FUN_005065a0
// Address: 005065a0
// Address Range: [[005065a0, 005065dc]]
// Convention: unknown
// Signature: void FUN_005065a0(int param_1)

#include "nocturne.h"

void FUN_005065a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_20 [6];
  
  bVar5 = 0;
  iVar1 = FUN_00468900(param_1 + 0x158);
  puVar3 = (uint *)(iVar1 + 0x338);
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
