// Name: FUN_004b2110
// Address: 004b2110
// Address Range: [[004b2110, 004b21a1]]
// Convention: unknown
// Signature: void FUN_004b2110(int param_1)

#include "nocturne.h"

void FUN_004b2110(int param_1)

{
  uint local_18;
  uint local_10;
  
  FUN_004ce760();
  *(int *)(param_1 + 0x2c) = local_18 / (*(int *)(param_1 + 0x1c) << 8);
  *(int *)(param_1 + 0x30) = local_10 / (*(int *)(param_1 + 0x1c) << 8);
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  FUN_004b1910(param_1);
  FUN_00460fb0(DAT_005ae704,1);
  FUN_004b1ff0(param_1);
  FUN_00460fb0(DAT_005ae704,0);
  return;
}
