// Name: FUN_00599ba0
// Address: 00599ba0
// Address Range: [[00599ba0, 00599bda]]
// Convention: unknown
// Signature: undefined4 FUN_00599ba0(int param_1)

#include "nocturne.h"

uint FUN_00599ba0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00524770(param_1 + 0x158,"@stand" + 1);
  iVar2 = FUN_005c04e0(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_0040c5a0(param_1);
  return uVar1;
}
