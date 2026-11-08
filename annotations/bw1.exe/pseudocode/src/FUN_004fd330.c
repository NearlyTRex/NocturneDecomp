// Name: FUN_004fd330
// Address: 004fd330
// Address Range: [[004fd330, 004fd3d5]]
// Convention: unknown
// Signature: int FUN_004fd330(undefined4 param_1)

#include "nocturne.h"

int FUN_004fd330(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x602c04;
  FUN_00468950(iVar1,"null.kfm");
  *(uint *)(iVar1 + 0x17c) = 0x40000000;
  *(uint *)(iVar1 + 0x180) = 0x41200000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x194) = 0;
  *(uint *)(iVar1 + 400) = *(uint *)(iVar1 + 0x194);
  *(uint *)(iVar1 + 0x18c) = *(uint *)(iVar1 + 400);
  *(uint *)(iVar1 + 0x1a0) = 0;
  *(uint *)(iVar1 + 0x19c) = *(uint *)(iVar1 + 0x1a0);
  *(uint *)(iVar1 + 0x198) = *(uint *)(iVar1 + 0x19c);
  *(uint *)(iVar1 + 0x1a4) = 0;
  return iVar1 + -0x158;
}
