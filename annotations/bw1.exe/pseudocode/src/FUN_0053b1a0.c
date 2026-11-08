// Name: FUN_0053b1a0
// Address: 0053b1a0
// Address Range: [[0053b1a0, 0053b209]]
// Convention: unknown
// Signature: void FUN_0053b1a0(undefined4 *param_1)

#include "nocturne.h"

void FUN_0053b1a0(uint *param_1)

{
  param_1[0x105] = 0;
  *(byte *)(param_1 + 1) = 0;
  *(byte *)(param_1 + 0x42) = 0;
  *(byte *)(param_1 + 0x82) = 0;
  *(byte *)(param_1 + 0xc2) = 0;
  *param_1 = 0;
  param_1[0x107] = 0;
  param_1[0x109] = 0;
  param_1[0x106] = 0;
  param_1[0x102] = 1000;
  param_1[0x103] = 1000;
  param_1[0x104] = 0;
  return;
}
