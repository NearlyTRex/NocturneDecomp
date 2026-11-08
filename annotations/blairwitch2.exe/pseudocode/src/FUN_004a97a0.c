// Name: FUN_004a97a0
// Address: 004a97a0
// Address Range: [[004a97a0, 004a986e]]
// Convention: unknown
// Signature: void FUN_004a97a0(int param_1)

#include "nocturne.h"

void FUN_004a97a0(int param_1)

{
  if (*(int *)(param_1 + 0x4210) == 0) {
    if ((0 < *(int *)(param_1 + 0x1dd8)) && (0 < *(int *)(param_1 + 0x1ddc))) {
      FUN_004f3380(param_1 + 0x1db4);
      FUN_004f3550(0);
      FUN_004f3470(0);
      FUN_004f5d90();
      FUN_004f3710();
      FUN_004f3720();
      FUN_004f40a0(*(uint *)(param_1 + 0x1dd0),*(uint *)(param_1 + 0x1dd8),
                   *(uint *)(param_1 + 0x1dd4),*(int *)(param_1 + 0x1ddc) / 3);
      FUN_004f3730();
      FUN_004f3470(1);
      FUN_004f3550(0xc0);
    }
    *(uint *)(param_1 + 0x1ddc) = 0;
    *(uint *)(param_1 + 0x1dd8) = 0;
    return;
  }
  FUN_00510d50(*(uint *)(param_1 + 0x4214));
  return;
}
