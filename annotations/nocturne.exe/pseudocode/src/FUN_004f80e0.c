// Name: FUN_004f80e0
// Address: 004f80e0
// Address Range: [[004f80e0, 004f814f]]
// Convention: unknown
// Signature: void FUN_004f80e0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004f80e0(uint *param_1)

{
  param_1[0x82] = 0;
  if (param_1[0x83] != 0) {
    FUN_005638d0(param_1[0x83]);
    param_1[0x83] = 0;
  }
  param_1[0x85] = 0;
  if (param_1[0x84] == 0) {
    *param_1 = 0;
    *(byte *)(param_1 + 1) = 0;
    return;
  }
  FUN_005638d0(param_1[0x84]);
  param_1[0x84] = 0;
  *param_1 = 0;
  *(byte *)(param_1 + 1) = 0;
  return;
}
