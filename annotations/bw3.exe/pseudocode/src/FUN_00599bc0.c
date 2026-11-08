// Name: FUN_00599bc0
// Address: 00599bc0
// Address Range: [[00599bc0, 00599c77]]
// Convention: unknown
// Signature: void FUN_00599bc0(int param_1)

#include "nocturne.h"

void FUN_00599bc0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040ba30(param_1 + 0x158,"?modelName" + 1);
  FUN_0040bab0(param_1 + 0x158,"motion state");
  FUN_0040b830(param_1 + 0x2538,"hitPoints");
  FUN_0040b8b0(param_1 + 0x20864,"shootMe");
  FUN_0040b8b0(param_1 + 0x20868,"poolMe");
  FUN_0040b830(param_1 + 0x2086c,"speed");
  if (0x00000002 < 2) {
    FUN_0042b450(param_1);
    return;
  }
  FUN_0040b830(param_1 + 0x214a0,"morphTime");
  FUN_0042b450(param_1);
  return;
}
