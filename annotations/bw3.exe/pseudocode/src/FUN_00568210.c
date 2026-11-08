// Name: FUN_00568210
// Address: 00568210
// Address Range: [[00568210, 00568283]]
// Convention: unknown
// Signature: int FUN_00568210(undefined4 param_1)

#include "nocturne.h"

int FUN_00568210(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0057ad70(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e4c94;
  FUN_004625f0(iVar1 + 0x158,0x5d5c63);
  *(uint *)(iVar1 + 0x2d8) = 0;
  *(uint *)(iVar1 + 0x2dc) = 0;
  *(uint *)(iVar1 + 0x2e4) = 1;
  *(uint *)(iVar1 + 0x2e8) = 0x42480000;
  *(uint *)(iVar1 + 0x56c) = 0xffffffff;
  *(uint *)(iVar1 + 0x574) = 3;
  *(uint *)(iVar1 + 0x57c) = 0;
  return iVar1;
}
