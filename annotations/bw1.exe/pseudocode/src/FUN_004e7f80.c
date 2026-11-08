// Name: FUN_004e7f80
// Address: 004e7f80
// Address Range: [[004e7f80, 004e8011]]
// Convention: unknown
// Signature: void FUN_004e7f80(int param_1)

#include "nocturne.h"

void FUN_004e7f80(int param_1)

{
  uint local_18;
  uint local_10;
  
  FUN_00509050();
  *(int *)(param_1 + 0x2c) = local_18 / (*(int *)(param_1 + 0x1c) << 8);
  *(int *)(param_1 + 0x30) = local_10 / (*(int *)(param_1 + 0x1c) << 8);
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  FUN_004e7780(param_1);
  FUN_00483d80(DAT_00612560,1);
  FUN_004e7e60(param_1);
  FUN_00483d80(DAT_00612560,0);
  return;
}
