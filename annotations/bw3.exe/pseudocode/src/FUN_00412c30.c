// Name: FUN_00412c30
// Address: 00412c30
// Address Range: [[00412c30, 00412c48]]
// Convention: unknown
// Signature: void FUN_00412c30(int param_1)

#include "nocturne.h"

void FUN_00412c30(int param_1)

{
  uint in_stack_00000014;
  
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x24) = in_stack_00000014;
  return;
}
