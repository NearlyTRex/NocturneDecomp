// Name: FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e6a0]]
// Convention: unknown
// Signature: undefined4 FUN_0040e670(int param_1)

#include "nocturne.h"

uint FUN_0040e670(int param_1)

{
  uint uVar1;
  
  FUN_00462580(param_1 + 0x158);
  uVar1 = FUN_00408890(param_1);
  *(uint *)(param_1 + 0x348) = 0;
  return uVar1;
}
