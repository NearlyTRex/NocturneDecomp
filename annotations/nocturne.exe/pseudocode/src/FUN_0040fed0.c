// Name: FUN_0040fed0
// Address: 0040fed0
// Address Range: [[0040fed0, 0040ff27]]
// Convention: unknown
// Signature: int FUN_0040fed0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040fed0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005999a4;
  FUN_00454580(iVar1,"candle.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  return iVar1 + -0x150;
}
