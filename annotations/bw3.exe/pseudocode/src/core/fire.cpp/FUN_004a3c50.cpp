// Name: core_fire.cpp_FUN_004a3c50
// Address: 004a3c50
// Address Range: [[004a3c50, 004a3ce2]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a3c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a3c50(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  core_fire_cpp_FUN_0049f470
            (_DAT_01d00eac * 0x30 + 0x1d00eb0,param_2,param_3,param_5,param_6,param_7,param_8,
             param_9);
  _DAT_01d00eac = _DAT_01d00eac + 1;
  if (_DAT_01d00eac < 0x40) {
    if (param_4 == 0) {
      return;
    }
  }
  else {
    _DAT_01d00eac = 0;
    if (param_4 == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
  return;
}
