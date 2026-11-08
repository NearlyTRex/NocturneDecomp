// Name: FUN_005770f0
// Address: 005770f0
// Address Range: [[005770f0, 0057710a]]
// Convention: unknown
// Signature: undefined4 FUN_005770f0(int param_1)

#include "nocturne.h"

uint FUN_005770f0(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x2d4) == 0)) {
    return 1;
  }
  return 0;
}
