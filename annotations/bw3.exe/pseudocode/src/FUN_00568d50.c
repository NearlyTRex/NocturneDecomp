// Name: FUN_00568d50
// Address: 00568d50
// Address Range: [[00568d50, 00568d67]]
// Convention: unknown
// Signature: void FUN_00568d50(undefined4 param_1)

#include "nocturne.h"

void FUN_00568d50(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e5154;
  return;
}
