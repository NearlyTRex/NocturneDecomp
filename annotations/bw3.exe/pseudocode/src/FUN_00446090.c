// Name: FUN_00446090
// Address: 00446090
// Address Range: [[00446090, 004460aa]]
// Convention: unknown
// Signature: undefined4 FUN_00446090(int param_1)

#include "nocturne.h"

uint FUN_00446090(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x2d4) == 0)) {
    return 1;
  }
  return 0;
}
