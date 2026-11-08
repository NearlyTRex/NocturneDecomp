// Name: FUN_00581270
// Address: 00581270
// Address Range: [[00581270, 005812f0]]
// Convention: unknown
// Signature: int FUN_00581270(int param_1)

#include "nocturne.h"

int FUN_00581270(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x10cb4) == 3) {
    return 0;
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar2 = auStack_34;
  puVar3 = auStack_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041a840(auStack_1c);
  if (iVar1 != 0) {
    FUN_0044fcc0(param_1 + 0x10afc,*(uint *)(param_1 + 0x10af8),0xffffffff);
  }
  FUN_00408a10(param_1);
  return iVar1;
}
