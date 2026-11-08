// Name: FUN_005804c0
// Address: 005804c0
// Address Range: [[005804c0, 00580608]]
// Convention: unknown
// Signature: void FUN_005804c0(int param_1)

#include "nocturne.h"

void FUN_005804c0(int param_1)

{
  if (0x00000005 < 3) {
    FUN_0040c330(param_1);
  }
  else {
    FUN_00487ec0(param_1);
  }
  FUN_0040b4b0(param_1 + 0x10c80,"@homePos" + 1);
  FUN_0040ba60(param_1 + 0x10afc,"modelName");
  if (1 < 0x00000005) {
    FUN_0040b8e0(param_1 + 0x10c78,"speed");
    FUN_0040b8e0(param_1 + 0x10c8c,"maxDistance");
    FUN_0040b8e0(param_1 + 0x10c90,"maxHeight");
    FUN_0040b8e0(param_1 + 0x10c94,"rotSpeed");
    FUN_0040b8e0(param_1 + 0x10c98,"moveSpeed");
    FUN_0040b960(param_1 + 0x10ca0,"followOrders");
  }
  if (0x00000005 < 4) {
    *(uint *)(param_1 + 0x10cb4) = 0;
    if (0x00000005 < 5) {
      return;
    }
  }
  else {
    FUN_0040b960(param_1 + 0x10cb4,"state");
    if (0x00000005 < 5) {
      return;
    }
  }
  FUN_0040b730(param_1 + 0x10cb8,0);
  FUN_0040b8e0(param_1 + 0x10d1c,"periodicSoundTimerMin");
  FUN_0040b8e0(param_1 + 0x10d20,"periodicSoundTimerMax");
  return;
}
