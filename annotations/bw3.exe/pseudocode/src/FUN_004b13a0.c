// Name: FUN_004b13a0
// Address: 004b13a0
// Address Range: [[004b13a0, 004b145a]]
// Convention: unknown
// Signature: void FUN_004b13a0(int param_1)

#include "nocturne.h"

void FUN_004b13a0(int param_1)

{
  if (*(int *)(param_1 + 0x4210) == 0) {
    if ((0 < *(int *)(param_1 + 0x1dd8)) && (0 < *(int *)(param_1 + 0x1ddc))) {
      FUN_004ed980(param_1 + 0x1db4);
      FUN_004edad0(0);
      FUN_004f02b0();
      FUN_004edc90();
      FUN_004edca0();
      FUN_004ee5b0(*(uint *)(param_1 + 0x1dd0),*(uint *)(param_1 + 0x1dd8),
                   *(uint *)(param_1 + 0x1dd4),*(int *)(param_1 + 0x1ddc) / 3);
      FUN_004edcb0();
      FUN_004edad0(0xc0);
    }
    *(uint *)(param_1 + 0x1ddc) = 0;
    *(uint *)(param_1 + 0x1dd8) = 0;
    return;
  }
  FUN_00509d90(*(uint *)(param_1 + 0x4214));
  return;
}
