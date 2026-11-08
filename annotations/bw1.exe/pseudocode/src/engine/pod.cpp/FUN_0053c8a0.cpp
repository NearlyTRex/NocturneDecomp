// Name: FUN_0053c8a0
// Address: 0053c8a0
// Address Range: [[0053c8a0, 0053c8e8]]
// Convention: unknown
// Signature: void FUN_0053c8a0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053c8a0(int *param_1)

{
  if (param_1 == (int *)0x0) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x4a2;
    FUN_005030e0("CPod::init - No .POD to init!");
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
