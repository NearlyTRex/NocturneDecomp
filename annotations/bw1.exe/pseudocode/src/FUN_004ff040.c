// Name: FUN_004ff040
// Address: 004ff040
// Address Range: [[004ff040, 004ff101]]
// Convention: unknown
// Signature: int FUN_004ff040(undefined4 param_1)

#include "nocturne.h"

int FUN_004ff040(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  FUN_004aacc0(iVar1 + 0x2c8);
  *(uint *)(iVar1 + -4) = 0x602ef4;
  FUN_00468950(iVar1,"lightswitch.kfm");
  *(uint *)(iVar1 + 0x180) = 0;
  *(byte *)(iVar1 + 0x188) = 0;
  *(byte *)(iVar1 + 0x1ec) = 0;
  *(byte *)(iVar1 + 0x250) = 0;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x2b4) = 1;
  *(uint *)(iVar1 + 0x2b8) = 0;
  *(uint *)(iVar1 + 700) = 0x17;
  *(uint *)(iVar1 + 0x2c0) = 0;
  *(uint *)(iVar1 + 0x2c4) = 0;
  *(uint *)(iVar1 + 0x6b4) = 2;
  *(uint *)(iVar1 + 0x6b8) = 1;
  return iVar1 + -0x158;
}
