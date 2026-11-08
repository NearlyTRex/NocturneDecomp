// Name: FUN_00584940
// Address: 00584940
// Address Range: [[00584940, 005849a2]]
// Convention: unknown
// Signature: int FUN_00584940(undefined4 param_1)

#include "nocturne.h"

int FUN_00584940(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_005c0357(iVar1 + 0x170,0x28,0x5ff680);
  *(uint *)(iVar1 + -0x1c) = 0x605e34;
  *(uint *)(iVar1 + -0x18) = 0x3f800000;
  *(uint *)(iVar1 + -0x14) = 0x3f800000;
  *(uint *)(iVar1 + -0x10) = 0x40400000;
  *(uint *)(iVar1 + -4) = 5;
  *(uint *)(iVar1 + -0xc) = 0x3f000000;
  *(uint *)(iVar1 + -8) = 0x3e99999a;
  *(uint *)(iVar1 + 0x8c0) = 0;
  return iVar1 + -0x170;
}
