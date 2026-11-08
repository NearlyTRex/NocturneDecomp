// Name: FUN_004fc0d0
// Address: 004fc0d0
// Address Range: [[004fc0d0, 004fc157]]
// Convention: unknown
// Signature: void FUN_004fc0d0(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc0d0(uint *param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_1[10] = 0xffffffff;
    return;
  }
  if (*(int *)*param_1 <= param_2) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x2bd;
    FUN_004e4330("CMotionController::setDesiredState - invalid state index");
  }
  if (param_2 != param_1[10]) {
    if (param_1[0xb] != 0) {
      if (param_1[8] == 0) {
        FUN_004fc010(param_1);
      }
      param_1[0xb] = 0;
    }
    param_1[9] = 0;
    param_1[10] = param_2;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_004fbf20(param_1);
  return;
}
