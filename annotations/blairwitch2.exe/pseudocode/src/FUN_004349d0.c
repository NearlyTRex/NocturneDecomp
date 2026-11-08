// Name: FUN_004349d0
// Address: 004349d0
// Address Range: [[004349d0, 00434a0f]]
// Convention: unknown
// Signature: void FUN_004349d0(int param_1)

#include "nocturne.h"

void FUN_004349d0(int param_1)

{
  FUN_004342d0(param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  FUN_00433760(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = 0xffffffff;
  *(uint *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  return;
}
