// Name: FUN_00415780
// Address: 00415780
// Address Range: [[00415780, 00415820]]
// Convention: unknown
// Signature: void FUN_00415780(int param_1)

#include "nocturne.h"

void FUN_00415780(int param_1)

{
  if (1 < 0x00000001) {
    FUN_0042c7f0(param_1);
    return;
  }
  FUN_0040c040(param_1);
  FUN_0040b7f0(param_1 + 0x158,"modelName");
  FUN_0040b870(param_1 + 0x158,"motion state");
  FUN_0040b5f0(param_1 + 0x2538,"hitPoints");
  FUN_0040b670(param_1 + 0x1faac,"shootMe");
  FUN_0040b670(param_1 + 0x1fab0,"poolMe");
  FUN_0040b5f0(param_1 + 0x1fab4,"speed");
  FUN_0042c7f0(param_1);
  return;
}
