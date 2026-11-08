// Name: FUN_004494d0
// Address: 004494d0
// Address Range: [[004494d0, 004494ea]]
// Convention: unknown
// Signature: undefined4 FUN_004494d0(int param_1)

#include "nocturne.h"

uint FUN_004494d0(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x2d4) == 0)) {
    return 1;
  }
  return 0;
}
