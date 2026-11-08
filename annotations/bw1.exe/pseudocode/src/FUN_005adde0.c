// Name: FUN_005adde0
// Address: 005adde0
// Address Range: [[005adde0, 005ade02]]
// Convention: unknown
// Signature: undefined4 FUN_005adde0(int param_1)

#include "nocturne.h"

uint FUN_005adde0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x568)) {
    *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + -1;
    return 1;
  }
  return 0;
}
