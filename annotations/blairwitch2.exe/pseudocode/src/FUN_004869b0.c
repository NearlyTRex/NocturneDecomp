// Name: FUN_004869b0
// Address: 004869b0
// Address Range: [[004869b0, 00486a73]]
// Convention: unknown
// Signature: void FUN_004869b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004869b0(int param_1)

{
  FUN_00408a80(param_1);
  *(uint *)(param_1 + 0x5c8) = *(uint *)(param_1 + 0x390);
  if (*(int *)(param_1 + 0x2b4) == 4) {
    FUN_0044fd00(param_1 + 0x3a4);
  }
  if (*(int *)(param_1 + 0x2b4) == 0xb) {
    FUN_0044fd00(param_1 + 0x3a4);
  }
  if (*(int *)(param_1 + 0x2b4) == 0xc) {
    FUN_0044fd00(param_1 + 0x3a4);
  }
  if (*(int *)(param_1 + 0x2b4) == 0xd) {
    FUN_0044fd00(param_1 + 0x3a4);
  }
  if (*(int *)(param_1 + 0x54c) == 0) {
    *(uint *)(param_1 + 0x54c) = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  }
  *(uint *)(param_1 + 0x5b8) = 0;
  *(uint *)(param_1 + 0x60c) = 0;
  *(uint *)(param_1 + 0x610) = *(uint *)(param_1 + 0x2c4);
  return;
}
