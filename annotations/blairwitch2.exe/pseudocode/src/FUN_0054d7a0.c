// Name: FUN_0054d7a0
// Address: 0054d7a0
// Address Range: [[0054d7a0, 0054d806]]
// Convention: unknown
// Signature: int FUN_0054d7a0(undefined4 param_1)

#include "nocturne.h"

int FUN_0054d7a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054fcd0(param_1);
  iVar1 = FUN_0057cd50(iVar1 + 0x17c);
  *(uint *)(iVar1 + -0x5c) = 0;
  *(uint *)(iVar1 + -0x28) = 0;
  *(uint *)(iVar1 + -0x24) = 0;
  *(uint *)(iVar1 + -0x2c) = 0;
  *(uint *)(iVar1 + -0x20) = 0;
  *(uint *)(iVar1 + -0x1c) = 0xffffffff;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + 0x2c) = 0;
  *(uint *)(iVar1 + -0x18) = 0;
  *(uint *)(iVar1 + -0x14) = 0;
  return iVar1 + -0x17c;
}
