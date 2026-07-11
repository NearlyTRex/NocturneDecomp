// Name: FUN_004f8af0
// Address: 004f8af0
// Address Range: [[004f8af0, 004f8b38]]
// Convention: unknown
// Signature: void FUN_004f8af0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f8af0(int *param_1)

{
  if (param_1 == (int *)0x0) {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x2be;
    FUN_004c8440("CPod::init - No .POD to init!");
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
