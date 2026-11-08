// Name: FUN_00418810
// Address: 00418810
// Address Range: [[00418810, 00418828]]
// Convention: unknown
// Signature: void FUN_00418810(int param_1)

#include "nocturne.h"

void FUN_00418810(int param_1)

{
  uint in_stack_00000014;
  
  *(uint *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = in_stack_00000014;
  return;
}
