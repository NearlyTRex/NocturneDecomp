// Name: core_pendulum.cpp_didPhaseCross_FUN_0050e60e
// Address: 0050e60e
// Address Range: [[0050e60e, 0050e6f2]]
// Convention: unknown
// Signature: bool core_pendulum_cpp_didPhaseCross_FUN_0050e60e(float param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_pendulum_cpp_didPhaseCross_FUN_0050e60e(float param_1,float param_2,float param_3)

{
  if (param_2 < param_1 + (float)_DAT_005cbaed) {
    param_2 = param_2 + 1.0;
  }
  if (param_1 + (float)_DAT_005cbaf5 < param_2) {
    param_2 = param_2 + _DAT_005cbafd;
  }
  if (param_2 <= param_1) {
    if (param_3 < param_2) {
      param_3 = param_3 + 1.0;
    }
    if (param_3 < param_2) {
      param_3 = param_3 + 1.0;
    }
    if (param_2 + 1.0 < param_3) {
      param_3 = param_3 + _DAT_005cbafd;
    }
    if (param_2 + 1.0 < param_3) {
      param_3 = param_3 + _DAT_005cbafd;
    }
    return param_1 < param_3;
  }
  return false;
}
