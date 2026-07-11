// Name: FUN_004b5490
// Address: 004b5490
// Address Range: [[004b5490, 004b54bc]]
// Convention: unknown
// Signature: undefined4 FUN_004b5490(int param_1)

#include "nocturne.h"

uint FUN_004b5490(int param_1)

{
  if (*(int *)(param_1 + 0x1fa10) == 0) {
    return 0;
  }
  FUN_004c6500(*(int *)(param_1 + 0x1fa10));
  *(uint *)(param_1 + 0x1fa10) = 0;
  return 1;
}
