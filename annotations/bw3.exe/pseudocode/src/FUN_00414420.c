// Name: FUN_00414420
// Address: 00414420
// Address Range: [[00414420, 00414438]]
// Convention: unknown
// Signature: void FUN_00414420(int param_1)

#include "nocturne.h"

void FUN_00414420(int param_1)

{
  uint in_stack_00000014;
  
  *(uint *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = in_stack_00000014;
  return;
}
