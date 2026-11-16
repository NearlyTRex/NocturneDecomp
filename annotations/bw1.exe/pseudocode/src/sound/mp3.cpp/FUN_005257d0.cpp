// Name: FUN_005257d0
// Address: 005257d0
// Address Range: [[005257d0, 0052583a]]
// Convention: unknown
// Signature: undefined4 FUN_005257d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005257d0(int param_1,int param_2)

{
  if ((((0 < param_1) && (param_1 < 4)) && (-1 < param_2)) && (param_2 < 4)) {
    return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 0xb);
  }
  _DAT_01d1d400 = "..\\sound\\mp3.cpp";
  _DAT_01d1d404 = 0x1ea;
  core_main_c_displayErrorAndQuit_FUN_005030e0("js_bound bad layer/modext (%d/%d)  File: %s");
  return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 0xb);
}
