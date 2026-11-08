// Name: FUN_00519e50
// Address: 00519e50
// Address Range: [[00519e50, 00519eb9]]
// Convention: unknown
// Signature: void FUN_00519e50(undefined4 *param_1)

#include "nocturne.h"

void FUN_00519e50(uint *param_1)

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
