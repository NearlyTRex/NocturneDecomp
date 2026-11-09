// Name: engine_mini3d.cpp_FUN_005140c0
// Address: 005140c0
// Address Range: [[005140c0, 00514119]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005140c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005140c0(int param_1)

{
  uint uStack_4;
  
  if (_DAT_01d224c8 != 0) {
    uStack_4 = (*(float *)(param_1 + 8) - _DAT_01d22570) * _DAT_01d2adb8;
    if (uStack_4 < 0.0) {
      uStack_4 = 0.0;
    }
    else if (0x3f800000 < (int)uStack_4) {
      uStack_4 = 1.0;
    }
    *(float *)(param_1 + 0x34) = uStack_4;
    return;
  }
  *(uint *)(param_1 + 0x34) = 0;
  return;
}
