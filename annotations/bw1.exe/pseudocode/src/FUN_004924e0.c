// Name: FUN_004924e0
// Address: 004924e0
// Address Range: [[004924e0, 00492589]]
// Convention: unknown
// Signature: int FUN_004924e0(undefined4 param_1)

#include "nocturne.h"

int FUN_004924e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ad4c0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5ff6c4;
  FUN_00468950(iVar1 + 0x158,"dynamitestick.kfm");
  *(uint *)(iVar1 + 0x564) = 0x3f800000;
  *(uint *)(iVar1 + 0x584) = 0;
  *(uint *)(iVar1 + 0x580) = *(uint *)(iVar1 + 0x584);
  *(uint *)(iVar1 + 0x57c) = *(uint *)(iVar1 + 0x580);
  *(uint *)(iVar1 + 0x578) = 0xbf800000;
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e0) = 3;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0x43480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  *(uint *)(iVar1 + 0x2f0) = 0;
  *(uint *)(iVar1 + 0x588) = 0;
  return iVar1;
}
