// Name: FUN_0053be30
// Address: 0053be30
// Address Range: [[0053be30, 0053bec7]]
// Convention: unknown
// Signature: void FUN_0053be30(undefined4 *param_1)

#include "nocturne.h"

void FUN_0053be30(uint *param_1)

{
  param_1[0x104] = 0;
  if (param_1[0x105] != 0) {
    FUN_005c09f0(param_1[0x105]);
    param_1[0x105] = 0;
  }
  param_1[0x109] = 0;
  param_1[0x107] = 0;
  if (param_1[0x106] != 0) {
    FUN_005c09f0(param_1[0x106]);
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
