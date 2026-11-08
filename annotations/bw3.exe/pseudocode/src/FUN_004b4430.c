// Name: FUN_004b4430
// Address: 004b4430
// Address Range: [[004b4430, 004b443f]]
// Convention: unknown
// Signature: void FUN_004b4430(int param_1)

#include "nocturne.h"

void FUN_004b4430(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005806a0();
  *(uint *)(param_1 + 0x30c) = uVar1;
  return;
}
