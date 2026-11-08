// Name: FUN_00404590
// Address: 00404590
// Address Range: [[00404590, 0040461f]]
// Convention: unknown
// Signature: int FUN_00404590(int param_1)

#include "nocturne.h"

int FUN_00404590(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_d0 [12];
  uint auStack_a0 [11];
  uint uStack_74;
  uint auStack_70 [12];
  uint auStack_40 [12];
  
  bVar6 = 0;
  uStack_74 = 0x40459c;
  FUN_00404560();
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  while (iVar3 < *(int *)(param_1 + 4) + -1) {
    puVar4 = &DAT_00622014 + *piVar2 * 0xc;
    puVar5 = auStack_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    puVar4 = &DAT_00622014 + piVar2[1] * 0xc;
    puVar5 = auStack_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    puVar4 = auStack_70;
    puVar5 = auStack_a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    puVar4 = auStack_40;
    puVar5 = auStack_d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_00407cc0();
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 8;
}
