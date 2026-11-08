// Name: FUN_00562410
// Address: 00562410
// Address Range: [[00562410, 0056248d]]
// Convention: unknown
// Signature: int FUN_00562410(undefined4 param_1)

#include "nocturne.h"

int FUN_00562410(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ad4c0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x605624;
  FUN_00468950(iVar1 + 0x158,0x5f1a13);
  *(uint *)(iVar1 + 0x2e0) = 7;
  *(uint *)(iVar1 + 0x56c) = 0xffffffff;
  *(uint *)(iVar1 + 0x568) = 0;
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e4) = 0;
  *(uint *)(iVar1 + 0x2e8) = 0x40a00000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  return iVar1;
}
