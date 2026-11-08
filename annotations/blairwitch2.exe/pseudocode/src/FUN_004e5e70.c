// Name: FUN_004e5e70
// Address: 004e5e70
// Address Range: [[004e5e70, 004e5eeb]]
// Convention: unknown
// Signature: void FUN_004e5e70(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004e5e70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_24 [6];
  
  bVar6 = 0;
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  puVar4 = (uint *)(iVar1 + 0x338);
  puVar5 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  piVar3 = (int *)(param_1 + 0x74c);
  do {
    while (*piVar3 != 0) {
      FUN_00536cb0(0x01E661B8,param_2,auStack_24,piVar3 + 3,piVar3 + 9);
      piVar3 = piVar3 + 0x19;
      if (piVar3 == (int *)(param_1 + 0xbfc)) {
        return;
      }
    }
    piVar3 = piVar3 + 0x19;
  } while (piVar3 != (int *)(param_1 + 0xbfc));
  return;
}
