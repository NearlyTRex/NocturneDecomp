// Name: FUN_0040e860
// Address: 0040e860
// Address Range: [[0040e860, 0040e92d]]
// Convention: unknown
// Signature: void FUN_0040e860(int param_1)

#include "nocturne.h"

void FUN_0040e860(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040ba60(param_1 + 0x2b4,"modelName");
  FUN_0040b730(param_1 + 0x430,"weaponClassName");
  FUN_0040b960(param_1 + 0x470,"ammoCount");
  FUN_0040b960(param_1 + 0x474,"ammoType");
  FUN_0040b8e0(param_1 + 0x478,0);
  if (1 < 0x00000004) {
    FUN_0040b9e0(param_1 + 0x47c,&DAT_005cb2ca);
  }
  if (2 < 0x00000004) {
    FUN_0040b960(param_1 + 0x480,"hasCollision");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040b730(param_1 + 0x484,"openSound");
  return;
}
