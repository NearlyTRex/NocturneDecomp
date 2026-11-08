// Name: FUN_005919f0
// Address: 005919f0
// Address Range: [[005919f0, 00591aa9]]
// Convention: unknown
// Signature: void FUN_005919f0(int param_1)

#include "nocturne.h"

void FUN_005919f0(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  if (1 < 0x00000004) {
    FUN_0040b830(param_1 + 0xd06c,"maxFadeTime");
  }
  if (2 < 0x00000004) {
    FUN_0040b8b0(param_1 + 0xd070,"fadeOutOpacity");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b8b0(param_1 + 0xd094,"ciniFlag");
  return;
}
