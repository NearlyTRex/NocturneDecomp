// Name: FUN_004ea330
// Address: 004ea330
// Address Range: [[004ea330, 004ea387]]
// Convention: unknown
// Signature: int FUN_004ea330(undefined4 param_1)

#include "nocturne.h"

int FUN_004ea330(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x601c14;
  FUN_00468950(iVar1,"bullet.kfm");
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0x42480000;
  return iVar1 + -0x158;
}
