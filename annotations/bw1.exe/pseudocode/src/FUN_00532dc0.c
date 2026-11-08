// Name: FUN_00532dc0
// Address: 00532dc0
// Address Range: [[00532dc0, 00532e99]]
// Convention: unknown
// Signature: void FUN_00532dc0(int param_1)

#include "nocturne.h"

void FUN_00532dc0(int param_1)

{
  FUN_00531bf0(param_1);
  FUN_0040b440(param_1 + 0x1fab8,"transformEvent");
  FUN_0040b440(param_1 + 0x1fb1c,"wolfModelName");
  FUN_0040b5f0(param_1 + 0x207f0,"morphTime");
  if ((1 < 0x00000006) && (0x00000006 < 5)) {
    FUN_0040b7f0(param_1 + 0x158,"modelName");
    FUN_0040b870(param_1 + 0x158,"motion state");
  }
  if (2 < 0x00000006) {
    FUN_0040b5f0(param_1 + 0x207f4,"wolfSize");
  }
  if (3 < 0x00000006) {
    FUN_0040b440(param_1 + 0x1fb3c,"nameOfWolf");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b440(param_1 + 0x1fb5c,"transformWav");
  return;
}
