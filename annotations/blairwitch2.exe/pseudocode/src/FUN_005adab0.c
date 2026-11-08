// Name: FUN_005adab0
// Address: 005adab0
// Address Range: [[005adab0, 005adac7]]
// Convention: unknown
// Signature: void FUN_005adab0(undefined4 param_1)

#include "nocturne.h"

void FUN_005adab0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bd30(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x601094;
  return;
}
