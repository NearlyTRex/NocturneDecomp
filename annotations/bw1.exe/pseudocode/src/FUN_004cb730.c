// Name: FUN_004cb730
// Address: 004cb730
// Address Range: [[004cb730, 004cb753]]
// Convention: unknown
// Signature: void FUN_004cb730(int param_1,int param_2)

#include "nocturne.h"

void FUN_004cb730(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x1ffac) = 3;
    return;
  }
  *(uint *)(param_1 + 0x1ffac) = 0;
  return;
}
