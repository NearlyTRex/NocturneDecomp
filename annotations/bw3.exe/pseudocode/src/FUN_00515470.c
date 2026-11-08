// Name: FUN_00515470
// Address: 00515470
// Address Range: [[00515470, 00515487]]
// Convention: unknown
// Signature: void FUN_00515470(undefined4 param_1)

#include "nocturne.h"

void FUN_00515470(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00514320(param_1);
  *(byte ***)(iVar1 + 0x194) = &PTR_FUN_005e3494;
  return;
}
