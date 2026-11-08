// Name: FUN_0056cb90
// Address: 0056cb90
// Address Range: [[0056cb90, 0056cbca]]
// Convention: unknown
// Signature: undefined4 FUN_0056cb90(int param_1)

#include "nocturne.h"

uint FUN_0056cb90(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004fc070(param_1 + 0x158,"@stand" + 1);
  iVar2 = FUN_005a3260(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_0040c7e0(param_1);
  return uVar1;
}
