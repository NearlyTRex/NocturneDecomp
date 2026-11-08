// Name: FUN_004da360
// Address: 004da360
// Address Range: [[004da360, 004da419]]
// Convention: unknown
// Signature: void FUN_004da360(undefined4 *param_1)

#include "nocturne.h"

void FUN_004da360(uint *param_1)

{
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *param_1 = 0x42c80000;
  param_1[1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0x115] = 1;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0xd3] = 0;
  *(byte *)(param_1 + 0xd5) = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}
