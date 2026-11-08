// Name: FUN_00504b10
// Address: 00504b10
// Address Range: [[00504b10, 00504b8b]]
// Convention: unknown
// Signature: void FUN_00504b10(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00504b10(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_24 [6];
  
  bVar6 = 0;
  iVar1 = FUN_00468900(param_1 + 0x158);
  puVar4 = (uint *)(iVar1 + 0x338);
  puVar5 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  piVar3 = (int *)(param_1 + 0x5f0);
  do {
    while (*piVar3 != 0) {
      FUN_005580d0(0x01E82168,param_2,auStack_24,piVar3 + 3,piVar3 + 9);
      piVar3 = piVar3 + 0x19;
      if (piVar3 == (int *)(param_1 + 0xaa0)) {
        return;
      }
    }
    piVar3 = piVar3 + 0x19;
  } while (piVar3 != (int *)(param_1 + 0xaa0));
  return;
}
