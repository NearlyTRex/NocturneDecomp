// Name: FUN_0049f010
// Address: 0049f010
// Address Range: [[0049f010, 0049f0d3]]
// Convention: unknown
// Signature: void FUN_0049f010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049f010(int param_1)

{
  FUN_00408850(param_1);
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x234);
  if (*(int *)(param_1 + 0x158) == 4) {
    FUN_004688e0(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x158) == 0xb) {
    FUN_004688e0(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x158) == 0xc) {
    FUN_004688e0(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x158) == 0xd) {
    FUN_004688e0(param_1 + 0x248);
  }
  if (*(int *)(param_1 + 0x3f0) == 0) {
    *(uint *)(param_1 + 0x3f0) = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  }
  *(uint *)(param_1 + 0x45c) = 0;
  *(uint *)(param_1 + 0x4b0) = 0;
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x168);
  return;
}
