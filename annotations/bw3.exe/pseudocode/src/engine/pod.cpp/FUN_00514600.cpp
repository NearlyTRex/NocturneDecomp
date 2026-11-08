// Name: FUN_00514600
// Address: 00514600
// Address Range: [[00514600, 00514648]]
// Convention: unknown
// Signature: void FUN_00514600(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514600(int *param_1)

{
  if (param_1 == (int *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x4a2;
    FUN_004e4330("CPod::init - No .POD to init!");
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
