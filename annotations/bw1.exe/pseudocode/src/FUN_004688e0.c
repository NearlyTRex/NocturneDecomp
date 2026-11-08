// Name: FUN_004688e0
// Address: 004688e0
// Address Range: [[004688e0, 004688fa]]
// Convention: unknown
// Signature: void FUN_004688e0(int param_1)

#include "nocturne.h"

void FUN_004688e0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00468780(param_1 + 0x78);
  *(uint *)(param_1 + 0x178) = uVar1;
  return;
}
