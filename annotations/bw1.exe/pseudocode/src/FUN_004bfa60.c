// Name: FUN_004bfa60
// Address: 004bfa60
// Address Range: [[004bfa60, 004bfb15]]
// Convention: unknown
// Signature: int FUN_004bfa60(undefined4 param_1)

#include "nocturne.h"

int FUN_004bfa60(uint param_1)

{
  int iVar1;
  uint local_c [3];
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_005c0357(iVar1 + 0x168,200,&DAT_00600ba0);
  *(byte ***)(iVar1 + -0x14) = &PTR_FUN_00600ac4;
  *(uint *)(iVar1 + -4) = 0x14;
  if ((uint *)(iVar1 + -0x10) != local_c) {
    *(uint *)(iVar1 + -0x10) = 0x40a00000;
    *(uint *)(iVar1 + -0xc) = 0x40a00000;
    *(uint *)(iVar1 + -8) = 0x40a00000;
  }
  *(uint *)(iVar1 + 0x28ac) = 0;
  *(uint *)(iVar1 + 0x28a8) = 0;
  *(uint *)(iVar1 + 0x28a0) = 0;
  *(uint *)(iVar1 + 0x28b0) = 0;
  *(uint *)(iVar1 + 0x28b4) = 1;
  *(uint *)(iVar1 + 0x28a4) = 0;
  return iVar1 + -0x168;
}
