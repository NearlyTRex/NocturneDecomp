// Name: FUN_0051b320
// Address: 0051b320
// Address Range: [[0051b320, 0051b368]]
// Convention: unknown
// Signature: void FUN_0051b320(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b320(int *param_1)

{
  if (param_1 == (int *)0x0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x432;
    FUN_004e4500("CPod::init - No .POD to init!");
    if (iRam00000000 != 0) {
      return;
    }
  }
  else if (*param_1 != 0) {
    return;
  }
  (**(code **)(param_1[0x65] + 4))(param_1);
  return;
}
