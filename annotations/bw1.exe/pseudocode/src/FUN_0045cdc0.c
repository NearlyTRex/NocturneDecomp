// Name: FUN_0045cdc0
// Address: 0045cdc0
// Address Range: [[0045cdc0, 0045cded]]
// Convention: unknown
// Signature: undefined4 FUN_0045cdc0(int param_1)

#include "nocturne.h"

uint FUN_0045cdc0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00524770(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x24) == 0x24) {
    return 1;
  }
  uVar2 = FUN_0040c5a0(param_1);
  return uVar2;
}
