// Name: FUN_004417d0
// Address: 004417d0
// Address Range: [[004417d0, 004417e4]]
// Convention: unknown
// Signature: void FUN_004417d0(int param_1)

#include "nocturne.h"

void FUN_004417d0(int param_1)

{
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) * 0x2ff0bd + 1U & 0xffffff;
  return;
}
