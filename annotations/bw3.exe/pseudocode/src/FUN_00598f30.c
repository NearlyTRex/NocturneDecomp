// Name: FUN_00598f30
// Address: 00598f30
// Address Range: [[00598f30, 00598fad]]
// Convention: unknown
// Signature: void FUN_00598f30(int param_1)

#include "nocturne.h"

void FUN_00598f30(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040b830(param_1 + 0xdc90,"morphTime");
  return;
}
