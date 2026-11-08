// Name: FUN_004c5150
// Address: 004c5150
// Address Range: [[004c5150, 004c51b9]]
// Convention: unknown
// Signature: int FUN_004c5150(undefined4 param_1)

#include "nocturne.h"

int FUN_004c5150(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x184);
  iVar1 = FUN_00447d10(iVar1 + 0x17c);
  iVar1 = FUN_00468860(iVar1 + 0xc);
  *(uint *)(iVar1 + -0x1b8) = 0x600c34;
  *(uint *)(iVar1 + -0x1b0) = 0;
  *(byte *)(iVar1 + -0x1ac) = 0;
  *(uint *)(iVar1 + -0x18c) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x30c;
}
