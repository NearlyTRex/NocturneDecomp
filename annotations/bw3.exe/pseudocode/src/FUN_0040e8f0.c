// Name: FUN_0040e8f0
// Address: 0040e8f0
// Address Range: [[0040e8f0, 0040e9bd]]
// Convention: unknown
// Signature: void FUN_0040e8f0(int param_1)

#include "nocturne.h"

void FUN_0040e8f0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b9b0(param_1 + 0x158,"modelName");
  FUN_0040b680(param_1 + 0x2d4,"weaponClassName");
  FUN_0040b8b0(param_1 + 0x314,"ammoCount");
  FUN_0040b8b0(param_1 + 0x318,"ammoType");
  FUN_0040b830(param_1 + 0x31c,0);
  if (1 < 0x00000004) {
    FUN_0040b930(param_1 + 800,&DAT_005b61b5);
  }
  if (2 < 0x00000004) {
    FUN_0040b8b0(param_1 + 0x324,"hasCollision");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b680(param_1 + 0x328,"openSound");
  return;
}
