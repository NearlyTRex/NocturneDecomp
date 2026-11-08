// Name: FUN_004a9300
// Address: 004a9300
// Address Range: [[004a9300, 004a932b]]
// Convention: unknown
// Signature: void FUN_004a9300(int param_1)

#include "nocturne.h"

void FUN_004a9300(int param_1)

{
  FUN_004a91b0(param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x20);
  FUN_004a9830(param_1);
  return;
}
