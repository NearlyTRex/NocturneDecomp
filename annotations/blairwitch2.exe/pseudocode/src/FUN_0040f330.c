// Name: FUN_0040f330
// Address: 0040f330
// Address Range: [[0040f330, 0040f391]]
// Convention: unknown
// Signature: int FUN_0040f330(undefined4 param_1)

#include "nocturne.h"

int FUN_0040f330(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_0044fc80(iVar1 + 0x2b8);
  *(uint *)(iVar1 + -8) = 0x5f2864;
  FUN_0044fd70(iVar1,"candle.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  *(uint *)(iVar1 + -4) = 1;
  return iVar1 + -0x2b8;
}
