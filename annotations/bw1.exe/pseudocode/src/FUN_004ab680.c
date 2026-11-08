// Name: FUN_004ab680
// Address: 004ab680
// Address Range: [[004ab680, 004ab6bc]]
// Convention: unknown
// Signature: void FUN_004ab680(int param_1)

#include "nocturne.h"

void FUN_004ab680(int param_1)

{
  FUN_0045d260(param_1);
  FUN_004688e0(param_1 + 500);
  *(uint *)(param_1 + 0xf8) = 1;
  *(uint *)(param_1 + 0x3d8) = 0;
  *(uint *)(param_1 + 0x3dc) = 0;
  return;
}
