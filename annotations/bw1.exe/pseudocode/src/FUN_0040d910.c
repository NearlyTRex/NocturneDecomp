// Name: FUN_0040d910
// Address: 0040d910
// Address Range: [[0040d910, 0040d935]]
// Convention: unknown
// Signature: void FUN_0040d910(int param_1)

#include "nocturne.h"

void FUN_0040d910(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = *(uint **)(param_1 + 8);
  puVar3 = (uint *)&DAT_01c4e3d4;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)puVar3 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  return;
}
