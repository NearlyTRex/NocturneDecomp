// Name: FUN_00524790
// Address: 00524790
// Address Range: [[00524790, 005247b9]]
// Convention: unknown
// Signature: void FUN_00524790(int param_1)

#include "nocturne.h"

void FUN_00524790(int param_1)

{
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  FUN_00524b70(param_1);
  return;
}
