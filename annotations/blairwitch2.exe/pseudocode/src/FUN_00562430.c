// Name: FUN_00562430
// Address: 00562430
// Address Range: [[00562430, 00562451]]
// Convention: unknown
// Signature: void FUN_00562430(undefined4 param_1)

#include "nocturne.h"

void FUN_00562430(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bd30(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fc094;
  *(uint *)(iVar1 + 0x7d4) = 0;
  return;
}
