// Name: FUN_004a6a90
// Address: 004a6a90
// Address Range: [[004a6a90, 004a6b45]]
// Convention: unknown
// Signature: int FUN_004a6a90(undefined4 param_1)

#include "nocturne.h"

int FUN_004a6a90(uint param_1)

{
  int iVar1;
  uint local_c [3];
  
  iVar1 = FUN_00408790(param_1);
  iVar1 = FUN_005b7f5f(iVar1 + 0x2c4,200,&DAT_005f7170);
  *(byte **)(iVar1 + -0x14) = &DAT_005f7084;
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
  return iVar1 + -0x2c4;
}
