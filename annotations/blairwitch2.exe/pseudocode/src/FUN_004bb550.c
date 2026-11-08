// Name: FUN_004bb550
// Address: 004bb550
// Address Range: [[004bb550, 004bb576]]
// Convention: unknown
// Signature: void FUN_004bb550(int param_1)

#include "nocturne.h"

void FUN_004bb550(int param_1)

{
  *(uint *)(param_1 + 0xb14) = 1;
  *(uint *)(param_1 + 0xaf4) = *(uint *)(param_1 + 0xaf8);
  *(uint *)(param_1 + 0xb04) = *(uint *)(param_1 + 0xb00);
  return;
}
