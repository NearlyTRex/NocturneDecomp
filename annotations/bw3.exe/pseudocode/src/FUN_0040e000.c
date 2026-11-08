// Name: FUN_0040e000
// Address: 0040e000
// Address Range: [[0040e000, 0040e05f]]
// Convention: unknown
// Signature: void FUN_0040e000(int param_1)

#include "nocturne.h"

void FUN_0040e000(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"modelName");
  FUN_0040b680(param_1 + 0x2d4,"weaponClassName");
  FUN_0040b8b0(param_1 + 0x314,"ammoCount");
  FUN_0040b8b0(param_1 + 0x318,"ammoType");
  return;
}
