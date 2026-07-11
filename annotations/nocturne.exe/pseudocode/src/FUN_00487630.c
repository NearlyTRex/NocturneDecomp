// Name: FUN_00487630
// Address: 00487630
// Address Range: [[00487630, 00487694]]
// Convention: unknown
// Signature: void FUN_00487630(int param_1)

#include "nocturne.h"

void FUN_00487630(int param_1)

{
  if (*(float *)(param_1 + 0x3dc) <= 0.0) {
    return;
  }
  FUN_00460a00(DAT_005ae704,param_1 + 0x180);
  FUN_00460aa0(DAT_005ae704,param_1 + 0x18c,0);
  FUN_004544d0(param_1 + 4,0,0xffffffff);
  thunk_FUN_004cdbc0(DAT_005ae704);
  return;
}
