// Name: FUN_0040e400
// Address: 0040e400
// Address Range: [[0040e400, 0040e4cd]]
// Convention: unknown
// Signature: void FUN_0040e400(int param_1)

#include "nocturne.h"

void FUN_0040e400(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b770(param_1 + 0x158,"modelName");
  FUN_0040b440(param_1 + 0x2d4,"weaponClassName");
  FUN_0040b670(param_1 + 0x314,"ammoCount");
  FUN_0040b670(param_1 + 0x318,"ammoType");
  FUN_0040b5f0(param_1 + 0x31c,0);
  if (1 < 0x00000004) {
    FUN_0040b6f0(param_1 + 800,&DAT_005d3235);
  }
  if (2 < 0x00000004) {
    FUN_0040b670(param_1 + 0x324,"hasCollision");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b440(param_1 + 0x328,"openSound");
  return;
}
