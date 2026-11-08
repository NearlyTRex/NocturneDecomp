// Name: FUN_004436b0
// Address: 004436b0
// Address Range: [[004436b0, 004436e0]]
// Convention: unknown
// Signature: void FUN_004436b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004436b0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00442ba0(param_1);
  iVar1 = FUN_00442f70(iVar1 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005fd9b4;
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = param_3;
  return;
}
