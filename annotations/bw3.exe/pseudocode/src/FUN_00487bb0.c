// Name: FUN_00487bb0
// Address: 00487bb0
// Address Range: [[00487bb0, 00487c73]]
// Convention: unknown
// Signature: void FUN_00487bb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487bb0(int param_1)

{
  FUN_00408890(param_1);
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x234);
  if (*(int *)(param_1 + 0x158) == 4) {
    FUN_00462580(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x158) == 0xb) {
    FUN_00462580(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x158) == 0xc) {
    FUN_00462580(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x158) == 0xd) {
    FUN_00462580(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x3f0) == 0) {
    *(uint *)(param_1 + 0x3f0) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  *(uint *)(param_1 + 0x45c) = 0;
  *(uint *)(param_1 + 0x4b0) = 0;
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x168);
  return;
}
