// Name: FUN_004f3fc0
// Address: 004f3fc0
// Address Range: [[004f3fc0, 004f3fdc]]
// Convention: unknown
// Signature: void FUN_004f3fc0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004f3fc0(int param_1,uint param_2)

{
  FUN_00565f70(param_1,param_2,0x13);
  *(byte *)(param_1 + 0x13) = 0;
  return;
}
