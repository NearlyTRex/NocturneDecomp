// Name: FUN_00510e90
// Address: 00510e90
// Address Range: [[00510e90, 00510ea7]]
// Convention: unknown
// Signature: void FUN_00510e90(undefined4 param_1)

#include "nocturne.h"

void FUN_00510e90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00539400(param_1);
  *(uint *)(iVar1 + 0x154) = 0x603b74;
  return;
}
