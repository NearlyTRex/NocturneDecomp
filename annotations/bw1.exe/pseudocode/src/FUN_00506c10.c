// Name: FUN_00506c10
// Address: 00506c10
// Address Range: [[00506c10, 00506c8d]]
// Convention: unknown
// Signature: undefined4 FUN_00506c10(int param_1)

#include "nocturne.h"

uint FUN_00506c10(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  iVar1 = FUN_00483e60(DAT_00612560);
  if (iVar1 != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x19c) = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_1c;
  puVar4 = auStack_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar2 = FUN_004207b0(auStack_34);
  *(uint *)(param_1 + 0x19c) = uVar2;
  FUN_004087f0(param_1);
  return *(uint *)(param_1 + 0x19c);
}
