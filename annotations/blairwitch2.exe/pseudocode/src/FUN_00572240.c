// Name: FUN_00572240
// Address: 00572240
// Address Range: [[00572240, 00572257]]
// Convention: unknown
// Signature: void FUN_00572240(undefined4 param_1)

#include "nocturne.h"

void FUN_00572240(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408790(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fca44;
  return;
}
