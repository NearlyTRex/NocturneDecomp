// Name: FUN_004b1f10
// Address: 004b1f10
// Address Range: [[004b1f10, 004b1f74]]
// Convention: unknown
// Signature: void FUN_004b1f10(int param_1)

#include "nocturne.h"

void FUN_004b1f10(int param_1)

{
  if (*(float *)(param_1 + 0x3dc) <= 0.0) {
    return;
  }
  FUN_004837b0(DAT_00612560,param_1 + 0x180);
  FUN_00483850(DAT_00612560,param_1 + 0x18c,0);
  FUN_004688a0(param_1 + 4,0,0xffffffff);
  thunk_FUN_005084b0(DAT_00612560);
  return;
}
