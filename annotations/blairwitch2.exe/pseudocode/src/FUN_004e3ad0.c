// Name: FUN_004e3ad0
// Address: 004e3ad0
// Address Range: [[004e3ad0, 004e3b0f]]
// Convention: unknown
// Signature: undefined4 FUN_004e3ad0(int param_1)

#include "nocturne.h"

uint FUN_004e3ad0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x6c8) == 6) {
    return 0;
  }
  uVar1 = FUN_0040cf60(0x41700000,0x420c0000);
  return uVar1;
}
