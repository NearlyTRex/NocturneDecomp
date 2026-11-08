// Name: FUN_004175f0
// Address: 004175f0
// Address Range: [[004175f0, 00417625]]
// Convention: unknown
// Signature: void FUN_004175f0(undefined4 param_1)

#include "nocturne.h"

void FUN_004175f0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00415ba0(param_1);
  iVar1 = FUN_0040d0a0(iVar1 + 4);
  iVar1 = FUN_005c0357(iVar1 + 0x6c,0x32,&DAT_005fca90);
  *(byte ***)(iVar1 + -0x70) = &PTR_FUN_005fc9d4;
  return;
}
