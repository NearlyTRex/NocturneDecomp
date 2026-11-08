// Name: FUN_004456b0
// Address: 004456b0
// Address Range: [[004456b0, 0044571c]]
// Convention: unknown
// Signature: void FUN_004456b0(int param_1)

#include "nocturne.h"

void FUN_004456b0(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"speed");
  FUN_0040ba30(param_1 + 0x158,"modelName");
  if (0x00000002 < 2) {
    FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  FUN_0040bab0(param_1 + 0x158,"motion state");
  return;
}
