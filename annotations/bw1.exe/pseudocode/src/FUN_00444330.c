// Name: FUN_00444330
// Address: 00444330
// Address Range: [[00444330, 00444393]]
// Convention: unknown
// Signature: int FUN_00444330(undefined4 param_1)

#include "nocturne.h"

int FUN_00444330(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ea830(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005fdbe4;
  *(uint *)(iVar1 + 0x1ffac) = 0;
  *(uint *)(iVar1 + 0x1ffb0) = 0;
  FUN_00569f50(iVar1 + 0x158,"colonel.dfm");
  *(uint *)(iVar1 + 0x1ffc0) = 0x3f800000;
  *(uint *)(iVar1 + 0x1ffbc) = 0;
  *(uint *)(iVar1 + 0x1ffb8) = *(uint *)(iVar1 + 0x1ffbc);
  *(uint *)(iVar1 + 0x1ffb4) = *(uint *)(iVar1 + 0x1ffb8);
  return iVar1;
}
