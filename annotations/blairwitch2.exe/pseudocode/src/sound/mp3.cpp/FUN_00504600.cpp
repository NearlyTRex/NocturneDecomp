// Name: FUN_00504600
// Address: 00504600
// Address Range: [[00504600, 0050466a]]
// Convention: unknown
// Signature: undefined4 FUN_00504600(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00504600(int param_1,int param_2)

{
  if ((((0 < param_1) && (param_1 < 4)) && (-1 < param_2)) && (param_2 < 4)) {
    return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 0x14);
  }
  _DAT_01d046a0 = "..\\sound\\mp3.cpp";
  _DAT_01d046a4 = 0x1ea;
  core_main_c_displayErrorAndQuit_FUN_004e4500("js_bound bad layer/modext (%d/%d)  File: %s");
  return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 0x14);
}
