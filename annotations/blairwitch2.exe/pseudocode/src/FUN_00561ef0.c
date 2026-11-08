// Name: FUN_00561ef0
// Address: 00561ef0
// Address Range: [[00561ef0, 00561f52]]
// Convention: unknown
// Signature: int FUN_00561ef0(undefined4 param_1)

#include "nocturne.h"

int FUN_00561ef0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_005b7f5f(iVar1 + 0x2cc,0x28,0x5f5b70);
  *(uint *)(iVar1 + -0x1c) = 0x5fbf64;
  *(uint *)(iVar1 + -0x18) = 0x3f800000;
  *(uint *)(iVar1 + -0x14) = 0x3f800000;
  *(uint *)(iVar1 + -0x10) = 0x40400000;
  *(uint *)(iVar1 + -4) = 5;
  *(uint *)(iVar1 + -0xc) = 0x3f000000;
  *(uint *)(iVar1 + -8) = 0x3e99999a;
  *(uint *)(iVar1 + 0x8c0) = 0;
  return iVar1 + -0x2cc;
}
