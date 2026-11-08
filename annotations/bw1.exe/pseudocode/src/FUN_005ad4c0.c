// Name: FUN_005ad4c0
// Address: 005ad4c0
// Address Range: [[005ad4c0, 005ad5c5]]
// Convention: unknown
// Signature: int FUN_005ad4c0(undefined4 param_1)

#include "nocturne.h"

int FUN_005ad4c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  iVar1 = FUN_0041da00(iVar1 + 0x1b0);
  *(byte ***)(iVar1 + -0x1b4) = &PTR_FUN_00607e74;
  *(uint *)(iVar1 + 0x25c) = 0x40a00000;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -0x34) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x260) = 0x14;
  *(uint *)(iVar1 + 0x264) = 0;
  *(uint *)(iVar1 + -0x30) = 0;
  *(uint *)(iVar1 + -0x2c) = 0;
  *(uint *)(iVar1 + -0x28) = 0;
  *(uint *)(iVar1 + -0x24) = 0;
  *(uint *)(iVar1 + -0x20) = 0x43480000;
  *(uint *)(iVar1 + -0x1c) = 0;
  *(uint *)(iVar1 + -0x18) = 1;
  *(uint *)(iVar1 + -0x14) = 0xff;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  FUN_00468950(iVar1 + -0x1b0,"gat.kfm");
  *(uint *)(iVar1 + 0x268) = 0;
  *(uint *)(iVar1 + 0x26c) = 0;
  return iVar1 + -0x308;
}
