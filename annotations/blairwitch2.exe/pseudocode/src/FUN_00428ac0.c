// Name: FUN_00428ac0
// Address: 00428ac0
// Address Range: [[00428ac0, 00428ae5]]
// Convention: unknown
// Signature: void FUN_00428ac0(int param_1)

#include "nocturne.h"

void FUN_00428ac0(int param_1)

{
  if (*(int *)(param_1 + 0x27b0) == 0) {
    return;
  }
  FUN_0045efc0(*(int *)(param_1 + 0x27b0));
  *(uint *)(param_1 + 0x27b0) = 0;
  return;
}
