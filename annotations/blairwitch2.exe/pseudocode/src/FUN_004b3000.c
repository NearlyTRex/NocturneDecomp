// Name: FUN_004b3000
// Address: 004b3000
// Address Range: [[004b3000, 004b300f]]
// Convention: unknown
// Signature: void FUN_004b3000(int param_1)

#include "nocturne.h"

void FUN_004b3000(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0058e9e0();
  *(uint *)(param_1 + 0x27c) = uVar1;
  return;
}
