// Name: unkafter_superopt.cpp_FUN_005a84c0
// Address: 005a84c0
// Address Range: [[005a84c0, 005a85b9]]
// Convention: unknown
// Signature: void unkafter_superopt_cpp_FUN_005a84c0(undefined4 *param_1)

#include "nocturne.h"

void unkafter_superopt_cpp_FUN_005a84c0(uint *param_1)

{
  uint local_38 [3];
  uint local_2c [3];
  uint local_20 [3];
  uint local_14 [3];
  
  *param_1 = 0;
  param_1[0x16] = 0x3dcccccd;
  param_1[0x17] = 0x3dcccccd;
  param_1[1] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[6] = 0x3dcccccd;
  param_1[7] = 0x3dcccccd;
  param_1[8] = 0;
  param_1[5] = param_1[3];
  if (param_1 + 9 != local_20) {
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (param_1 + 0xc != local_14) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
  }
  if (param_1 + 0xf != local_38) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  if (param_1 + 0x12 == local_2c) {
    return;
  }
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  return;
}
