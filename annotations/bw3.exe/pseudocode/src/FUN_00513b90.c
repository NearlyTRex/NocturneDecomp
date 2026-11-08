// Name: FUN_00513b90
// Address: 00513b90
// Address Range: [[00513b90, 00513c27]]
// Convention: unknown
// Signature: void FUN_00513b90(undefined4 *param_1)

#include "nocturne.h"

void FUN_00513b90(uint *param_1)

{
  param_1[0x104] = 0;
  if (param_1[0x105] != 0) {
    FUN_005a3770(param_1[0x105]);
    param_1[0x105] = 0;
  }
  param_1[0x109] = 0;
  param_1[0x107] = 0;
  if (param_1[0x106] != 0) {
    FUN_005a3770(param_1[0x106]);
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
