// Name: FUN_004df730
// Address: 004df730
// Address Range: [[004df730, 004df7bd]]
// Convention: unknown
// Signature: int FUN_004df730(int param_1)

#include "nocturne.h"

int FUN_004df730(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  iVar1 = FUN_004625a0(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return 0;
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_1c;
  puVar3 = auStack_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_34);
  if (iVar1 != 0) {
    FUN_00462540(param_1 + 0x158,0,0xffffffff);
  }
  FUN_00408830(param_1);
  return iVar1;
}
