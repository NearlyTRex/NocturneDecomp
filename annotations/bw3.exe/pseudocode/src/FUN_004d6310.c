// Name: FUN_004d6310
// Address: 004d6310
// Address Range: [[004d6310, 004d635b]]
// Convention: unknown
// Signature: int FUN_004d6310(undefined4 param_1)

#include "nocturne.h"

int FUN_004d6310(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004d5430(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e1a64;
  FUN_0054eae0(iVar1 + 0x158,"@hotdemon.dfm" + 1);
  *(uint *)(iVar1 + 0x2538) = 0x42200000;
  *(uint *)(iVar1 + 0xce5c) = 0x41700000;
  *(uint *)(iVar1 + 0xce60) = 0x41700000;
  return iVar1;
}
