// Name: FUN_004b31b0
// Address: 004b31b0
// Address Range: [[004b31b0, 004b31be]]
// Convention: unknown
// Signature: void FUN_004b31b0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004b31b0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x4204) = param_2;
  return;
}
