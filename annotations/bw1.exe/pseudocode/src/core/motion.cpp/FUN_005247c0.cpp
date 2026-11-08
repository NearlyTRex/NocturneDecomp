// Name: FUN_005247c0
// Address: 005247c0
// Address Range: [[005247c0, 00524847]]
// Convention: unknown
// Signature: void FUN_005247c0(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005247c0(uint *param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_1[10] = 0xffffffff;
    return;
  }
  if (*(int *)*param_1 <= param_2) {
    _DAT_01d1d400 = "..\\core\\motion.cpp";
    _DAT_01d1d404 = 0x2b8;
    FUN_005030e0("CMotionController::setDesiredState - invalid state index");
  }
  if (param_2 != param_1[10]) {
    if (param_1[0xb] != 0) {
      if (param_1[8] == 0) {
        FUN_00524710(param_1);
      }
      param_1[0xb] = 0;
    }
    param_1[9] = 0;
    param_1[10] = param_2;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_00524620(param_1);
  return;
}
