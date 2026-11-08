// Name: FUN_004cbf10
// Address: 004cbf10
// Address Range: [[004cbf10, 004cbf1f]]
// Convention: unknown
// Signature: void FUN_004cbf10(int param_1)

#include "nocturne.h"

void FUN_004cbf10(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005b2420();
  *(uint *)(param_1 + 0x28c) = uVar1;
  return;
}
