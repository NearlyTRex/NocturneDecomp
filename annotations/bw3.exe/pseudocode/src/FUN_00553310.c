// Name: FUN_00553310
// Address: 00553310
// Address Range: [[00553310, 00553376]]
// Convention: unknown
// Signature: int FUN_00553310(undefined4 param_1)

#include "nocturne.h"

int FUN_00553310(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00555840(param_1);
  iVar1 = FUN_005738c0(iVar1 + 0x17c);
  *(uint *)(iVar1 + -0x5c) = 0;
  *(uint *)(iVar1 + -0x28) = 0;
  *(uint *)(iVar1 + -0x24) = 0;
  *(uint *)(iVar1 + -0x2c) = 0;
  *(uint *)(iVar1 + -0x20) = 0;
  *(uint *)(iVar1 + -0x1c) = 0xffffffff;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + 0x30) = 0;
  *(uint *)(iVar1 + -0x18) = 0;
  *(uint *)(iVar1 + -0x14) = 0;
  return iVar1 + -0x17c;
}
