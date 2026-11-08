// Name: FUN_005a4110
// Address: 005a4110
// Address Range: [[005a4110, 005a4258]]
// Convention: unknown
// Signature: void FUN_005a4110(int param_1)

#include "nocturne.h"

void FUN_005a4110(int param_1)

{
  if (0x00000005 < 3) {
    FUN_0040c040(param_1);
  }
  else {
    FUN_004a0520(param_1);
  }
  FUN_0040b1c0(param_1 + 0xc3f0,"@homePos" + 1);
  FUN_0040b770(param_1 + 0xc26c,"modelName");
  if (1 < 0x00000005) {
    FUN_0040b5f0(param_1 + 0xc3e8,"speed");
    FUN_0040b5f0(param_1 + 0xc3fc,"maxDistance");
    FUN_0040b5f0(param_1 + 0xc400,"maxHeight");
    FUN_0040b5f0(param_1 + 0xc404,"rotSpeed");
    FUN_0040b5f0(param_1 + 0xc408,"moveSpeed");
    FUN_0040b670(param_1 + 0xc410,"followOrders");
  }
  if (0x00000005 < 4) {
    *(uint *)(param_1 + 0xc424) = 0;
    if (0x00000005 < 5) {
      return;
    }
  }
  else {
    FUN_0040b670(param_1 + 0xc424,"state");
    if (0x00000005 < 5) {
      return;
    }
  }
  FUN_0040b440(param_1 + 0xc428,0);
  FUN_0040b5f0(param_1 + 0xc48c,"periodicSoundTimerMin");
  FUN_0040b5f0(param_1 + 0xc490,"periodicSoundTimerMax");
  return;
}
