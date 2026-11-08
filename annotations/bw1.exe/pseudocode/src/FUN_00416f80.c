// Name: FUN_00416f80
// Address: 00416f80
// Address Range: [[00416f80, 00416f98]]
// Convention: unknown
// Signature: void FUN_00416f80(int param_1)

#include "nocturne.h"

void FUN_00416f80(int param_1)

{
  uint in_stack_00000014;
  
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x24) = in_stack_00000014;
  return;
}
