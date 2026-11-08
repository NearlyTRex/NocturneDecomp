// Name: FUN_00531bf0
// Address: 00531bf0
// Address Range: [[00531bf0, 00531cb5]]
// Convention: unknown
// Signature: void FUN_00531bf0(int param_1)

#include "nocturne.h"

void FUN_00531bf0(int param_1)

{
  if (0x00000006 < 2) {
    FUN_0040c040(param_1);
    FUN_0040b5f0(param_1 + 0x2538,"hitPoints");
    return;
  }
  FUN_0042c7f0(param_1);
  if (2 < 0x00000006) {
    FUN_0040b7f0(param_1 + 0x158,"modelName");
    FUN_0040b870(param_1 + 0x158,"motion state");
  }
  if (3 < 0x00000006) {
    FUN_0040b670(param_1 + 0x1faac,"shootMe");
  }
  if (4 < 0x00000006) {
    FUN_0040b670(param_1 + 0x1fab0,"poolMe");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b5f0(param_1 + 0x1fab4,"speed");
  return;
}
