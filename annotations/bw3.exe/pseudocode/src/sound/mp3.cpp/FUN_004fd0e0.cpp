// Name: FUN_004fd0e0
// Address: 004fd0e0
// Address Range: [[004fd0e0, 004fd14a]]
// Convention: unknown
// Signature: undefined4 FUN_004fd0e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004fd0e0(int param_1,int param_2)

{
  if ((((0 < param_1) && (param_1 < 4)) && (-1 < param_2)) && (param_2 < 4)) {
    return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 0x13);
  }
  _DAT_01d71de0 = "..\\sound\\mp3.cpp";
  _DAT_01d71de4 = 0x1ea;
  core_main_c_displayErrorAndQuit_FUN_004e4330("js_bound bad layer/modext (%d/%d)  File: %s");
  return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 0x13);
}
