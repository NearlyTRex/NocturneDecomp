// Name: FUN_004cf580
// Address: 004cf580
// Address Range: [[004cf580, 004cf5d7]]
// Convention: unknown
// Signature: void FUN_004cf580(int param_1)

#include "nocturne.h"

void FUN_004cf580(int param_1)

{
  if ((*(int *)(param_1 + 0x2dc) == 0) && (*(int *)(param_1 + 0x2e0) == 0)) {
    *(uint *)(param_1 + 0x2e0) = 1;
    *(uint *)(param_1 + 0x2d4) = 0;
    if (*(char *)(param_1 + 0x34c) != '\0') {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x34c);
    }
    FUN_00534820(0x01ED78C8,param_1);
  }
  return;
}
