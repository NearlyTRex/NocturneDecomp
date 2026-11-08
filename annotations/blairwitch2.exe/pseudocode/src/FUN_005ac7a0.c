// Name: FUN_005ac7a0
// Address: 005ac7a0
// Address Range: [[005ac7a0, 005ac7e1]]
// Convention: unknown
// Signature: int FUN_005ac7a0(undefined4 param_1)

#include "nocturne.h"

int FUN_005ac7a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bd30(param_1);
  *(byte **)(iVar1 + 0x2b0) = &DAT_00600e34;
  *(uint *)(iVar1 + 0xfc) = 1;
  FUN_0044fd70(iVar1 + 0x2b4,0x5f0e98);
  *(uint *)(iVar1 + 0x754) = 0;
  return iVar1;
}
