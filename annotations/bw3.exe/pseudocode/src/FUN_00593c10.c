// Name: FUN_00593c10
// Address: 00593c10
// Address Range: [[00593c10, 00593c93]]
// Convention: unknown
// Signature: void FUN_00593c10(int param_1)

#include "nocturne.h"

void FUN_00593c10(int param_1)

{
  FUN_00489120(param_1);
  FUN_0040b830(param_1 + 0xcdcc,"@speed" + 1);
  FUN_0040ba30(param_1 + 0x158,"modelName");
  FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  FUN_0040bab0(param_1 + 0x158,"motion state");
  FUN_0040b830(param_1 + 0xd06c,"maxFadeTime");
  FUN_0040b8b0(param_1 + 0xd070,"fadeOutOpacity");
  return;
}
