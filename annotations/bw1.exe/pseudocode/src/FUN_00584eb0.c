// Name: FUN_00584eb0
// Address: 00584eb0
// Address Range: [[00584eb0, 00584ed1]]
// Convention: unknown
// Signature: void FUN_00584eb0(undefined4 param_1)

#include "nocturne.h"

void FUN_00584eb0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00421ca0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x605f54;
  *(uint *)(iVar1 + 0x678) = 0;
  return;
}
