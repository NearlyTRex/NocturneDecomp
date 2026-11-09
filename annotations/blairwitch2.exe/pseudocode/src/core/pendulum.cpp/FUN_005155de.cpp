// Name: core_pendulum.cpp_FUN_005155de
// Address: 005155de
// Address Range: [[005155de, 005156c2]]
// Convention: unknown
// Signature: bool core_pendulum_cpp_FUN_005155de(float param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_pendulum_cpp_FUN_005155de(float param_1,float param_2,float param_3)

{
  if (param_2 < param_1 + (float)_DAT_005e1a2a) {
    param_2 = param_2 + 1.0;
  }
  if (param_1 + (float)_DAT_005e1a32 < param_2) {
    param_2 = param_2 + _DAT_005e1a3a;
  }
  if (param_2 <= param_1) {
    if (param_3 < param_2) {
      param_3 = param_3 + 1.0;
    }
    if (param_3 < param_2) {
      param_3 = param_3 + 1.0;
    }
    if (param_2 + 1.0 < param_3) {
      param_3 = param_3 + _DAT_005e1a3a;
    }
    if (param_2 + 1.0 < param_3) {
      param_3 = param_3 + _DAT_005e1a3a;
    }
    return param_1 < param_3;
  }
  return false;
}
