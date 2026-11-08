// Name: FUN_004878a0
// Address: 004878a0
// Address Range: [[004878a0, 00487903]]
// Convention: unknown
// Signature: void FUN_004878a0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004878a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  if (param_2 == 0) {
    return;
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = auStack_34;
  puVar4 = auStack_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = FUN_0041a840(auStack_1c);
  *(uint *)(param_1 + 0x60c) = uVar1;
  FUN_00408a10(param_1);
  return;
}
