// Name: FUN_004c2750
// Address: 004c2750
// Address Range: [[004c2750, 004c280a]]
// Convention: unknown
// Signature: void FUN_004c2750(int param_1)

#include "nocturne.h"

void FUN_004c2750(int param_1)

{
  if (*(int *)(param_1 + 0x4210) == 0) {
    if ((0 < *(int *)(param_1 + 0x1dd8)) && (0 < *(int *)(param_1 + 0x1ddc))) {
      FUN_005121b0(param_1 + 0x1db4);
      FUN_00512300(0);
      FUN_00514ae0();
      FUN_005124c0();
      FUN_005124d0();
      FUN_00512de0(*(uint *)(param_1 + 0x1dd0),*(uint *)(param_1 + 0x1dd8),
                   *(uint *)(param_1 + 0x1dd4),*(int *)(param_1 + 0x1ddc) / 3);
      FUN_005124e0();
      FUN_00512300(0xc0);
    }
    *(uint *)(param_1 + 0x1ddc) = 0;
    *(uint *)(param_1 + 0x1dd8) = 0;
    return;
  }
  FUN_005320b0(*(uint *)(param_1 + 0x4214));
  return;
}
