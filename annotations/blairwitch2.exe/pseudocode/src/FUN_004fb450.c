// Name: FUN_004fb450
// Address: 004fb450
// Address Range: [[004fb450, 004fb48b]]
// Convention: unknown
// Signature: void FUN_004fb450(int param_1)

#include "nocturne.h"

void FUN_004fb450(int param_1)

{
  FUN_004fc640(param_1);
  *(uint *)(param_1 + 4) = 0;
  *(byte *)(param_1 + 0x1014) = 0;
  *(uint *)(param_1 + 0x1010) = 0;
  *(uint *)(param_1 + 0x1454) = 0;
  *(uint *)(param_1 + 0x1458) = 0;
  return;
}
