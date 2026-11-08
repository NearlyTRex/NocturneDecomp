// Name: FUN_00544e30
// Address: 00544e30
// Address Range: [[00544e30, 00544e55]]
// Convention: unknown
// Signature: void FUN_00544e30(int param_1)

#include "nocturne.h"

void FUN_00544e30(int param_1)

{
  if (*(int *)(param_1 + 0x2234) == 0) {
    return;
  }
  FUN_005b7fce(*(int *)(param_1 + 0x2234));
  *(uint *)(param_1 + 0x2234) = 0;
  return;
}
