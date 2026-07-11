// Name: FUN_00439a30
// Address: 00439a30
// Address Range: [[00439a30, 00439a68]]
// Convention: unknown
// Signature: void FUN_00439a30(int param_1)

#include "nocturne.h"

void FUN_00439a30(int param_1)

{
  FUN_004393d0(param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  FUN_00438a90(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = 0xffffffff;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  return;
}
