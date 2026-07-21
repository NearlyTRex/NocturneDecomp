// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240
// Address: 00440240
// Address Range: [[00440240, 00440261]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(uint param_1,int param_2)

{
  _DAT_007f7370 = param_1;
  if (param_2 != 0) {
    _DAT_007f7374 = param_1;
    return;
  }
  _DAT_007f7374 = 0;
  return;
}
