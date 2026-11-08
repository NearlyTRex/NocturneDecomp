// Name: FUN_0051a8f0
// Address: 0051a8f0
// Address Range: [[0051a8f0, 0051a987]]
// Convention: unknown
// Signature: void FUN_0051a8f0(undefined4 *param_1)

#include "nocturne.h"

void FUN_0051a8f0(uint *param_1)

{
  param_1[0x104] = 0;
  if (param_1[0x105] != 0) {
    FUN_005b86a0(param_1[0x105]);
    param_1[0x105] = 0;
  }
  param_1[0x109] = 0;
  param_1[0x107] = 0;
  if (param_1[0x106] != 0) {
    FUN_005b86a0(param_1[0x106]);
    param_1[0x106] = 0;
  }
  *param_1 = 0;
  *(byte *)(param_1 + 0x42) = 0;
  *(byte *)(param_1 + 0x82) = 0;
  *(byte *)(param_1 + 0xc2) = 0;
  param_1[0x102] = 1000;
  param_1[0x103] = 1000;
  *(byte *)(param_1 + 1) = 0;
  return;
}
