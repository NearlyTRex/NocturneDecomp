// Name: FUN_00503620
// Address: 00503620
// Address Range: [[00503620, 005036a7]]
// Convention: unknown
// Signature: void FUN_00503620(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00503620(uint *param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_1[10] = 0xffffffff;
    return;
  }
  if (*(int *)*param_1 <= param_2) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x2a4;
    FUN_004e4500("CMotionController::setDesiredState - invalid state index");
  }
  if (param_2 != param_1[10]) {
    if (param_1[0xb] != 0) {
      if (param_1[8] == 0) {
        FUN_00503560(param_1);
      }
      param_1[0xb] = 0;
    }
    param_1[9] = 0;
    param_1[10] = param_2;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_00503470(param_1);
  return;
}
