// Name: FUN_004e9020
// Address: 004e9020
// Address Range: [[004e9020, 004e9083]]
// Convention: unknown
// Signature: int FUN_004e9020(undefined4 param_1)

#include "nocturne.h"

int FUN_004e9020(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ea830(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_00601a64;
  *(uint *)(iVar1 + 0x1ffac) = 0;
  *(uint *)(iVar1 + 0x1ffb0) = 0;
  FUN_00569f50(iVar1 + 0x158,"haystack.dfm");
  *(uint *)(iVar1 + 0x1ffc0) = 0x3f800000;
  *(uint *)(iVar1 + 0x1ffbc) = 0;
  *(uint *)(iVar1 + 0x1ffb8) = *(uint *)(iVar1 + 0x1ffbc);
  *(uint *)(iVar1 + 0x1ffb4) = *(uint *)(iVar1 + 0x1ffb8);
  return iVar1;
}
