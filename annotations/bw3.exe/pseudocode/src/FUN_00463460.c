// Name: FUN_00463460
// Address: 00463460
// Address Range: [[00463460, 004634cc]]
// Convention: unknown
// Signature: void FUN_00463460(int param_1)

#include "nocturne.h"

void FUN_00463460(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  if (0x00000002 < 2) {
    FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  }
  FUN_0040bab0(param_1 + 0x158,"motion state");
  return;
}
