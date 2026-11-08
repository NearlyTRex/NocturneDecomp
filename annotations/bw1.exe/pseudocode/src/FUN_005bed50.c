// Name: FUN_005bed50
// Address: 005bed50
// Address Range: [[005bed50, 005bed7d]]
// Convention: unknown
// Signature: undefined4 FUN_005bed50(int param_1)

#include "nocturne.h"

uint FUN_005bed50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00524770(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x24) == 0xe) {
    return 1;
  }
  uVar2 = FUN_0040c5a0(param_1);
  return uVar2;
}
