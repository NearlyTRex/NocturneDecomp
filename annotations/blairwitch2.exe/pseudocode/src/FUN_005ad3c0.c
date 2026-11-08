// Name: FUN_005ad3c0
// Address: 005ad3c0
// Address Range: [[005ad3c0, 005ad451]]
// Convention: unknown
// Signature: int FUN_005ad3c0(undefined4 param_1)

#include "nocturne.h"

int FUN_005ad3c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bd30(param_1);
  *(byte **)(iVar1 + 0x2b0) = &DAT_00600f64;
  *(uint *)(iVar1 + 0x7dc) = 0x40a00000;
  *(uint *)(iVar1 + 0x7e0) = 0x40a00000;
  *(uint *)(iVar1 + 0x7e4) = 0x41c80000;
  *(uint *)(iVar1 + 0x7e8) = 0;
  *(uint *)(iVar1 + 0x7ec) = 0;
  *(uint *)(iVar1 + 0x7f0) = 0;
  *(uint *)(iVar1 + 0xfc) = 0;
  *(uint *)(iVar1 + 0x7d8) = 0x3f800000;
  *(uint *)(iVar1 + 0x7d4) = 0x3f800000;
  FUN_0044fd70(iVar1 + 0x2b4,"rock_pile.kfm");
  *(uint *)(iVar1 + 0x834) = 0;
  return iVar1;
}
