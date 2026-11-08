// Name: FUN_0046f1f0
// Address: 0046f1f0
// Address Range: [[0046f1f0, 0046f26e]]
// Convention: unknown
// Signature: void FUN_0046f1f0(int param_1)

#include "nocturne.h"

void FUN_0046f1f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint auStack_24 [6];
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x2d4) == 2) {
    puVar4 = auStack_24;
    iVar2 = FUN_004625a0(param_1 + 0x158);
    iVar1 = 6;
    puVar3 = *(uint **)(iVar2 + 0x350);
  }
  else {
    uStack_34 = 0xbf000000;
    uStack_3c = 0xbf000000;
    uStack_38 = 0;
    uStack_30 = 0x3f000000;
    iVar1 = 6;
    uStack_2c = 0x3f800000;
    uStack_28 = 0x3f800000;
    puVar3 = &uStack_3c;
    puVar4 = auStack_24;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
