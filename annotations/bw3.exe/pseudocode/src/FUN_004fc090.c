// Name: FUN_004fc090
// Address: 004fc090
// Address Range: [[004fc090, 004fc0b9]]
// Convention: unknown
// Signature: void FUN_004fc090(int param_1)

#include "nocturne.h"

void FUN_004fc090(int param_1)

{
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  FUN_004fc480(param_1);
  return;
}
