// Name: FUN_004d2180
// Address: 004d2180
// Address Range: [[004d2180, 004d21c1]]
// Convention: unknown
// Signature: int FUN_004d2180(undefined4 param_1)

#include "nocturne.h"

int FUN_004d2180(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004d1d80(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e13f4;
  FUN_004625f0(iVar1 + 0x158,"health_sm.kfm");
  *(uint *)(iVar1 + 0x2d8) = 0x41200000;
  *(uint *)(iVar1 + 0x2e0) = 1;
  return iVar1;
}
