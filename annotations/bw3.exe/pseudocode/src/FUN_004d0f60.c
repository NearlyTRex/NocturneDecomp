// Name: FUN_004d0f60
// Address: 004d0f60
// Address Range: [[004d0f60, 004d0fbf]]
// Convention: unknown
// Signature: int FUN_004d0f60(undefined4 param_1)

#include "nocturne.h"

int FUN_004d0f60(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e1094;
  FUN_004625f0(iVar1 + 0x158,0x5c49cc);
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 1;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x2ec) = 0;
  return iVar1;
}
