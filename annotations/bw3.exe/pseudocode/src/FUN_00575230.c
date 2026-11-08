// Name: FUN_00575230
// Address: 00575230
// Address Range: [[00575230, 00575378]]
// Convention: unknown
// Signature: void FUN_00575230(int param_1)

#include "nocturne.h"

void FUN_00575230(int param_1)

{
  if (0x00000005 < 3) {
    FUN_0040c280(param_1);
  }
  else {
    FUN_00489120(param_1);
  }
  FUN_0040b400(param_1 + 0xd1dc,"@homePos" + 1);
  FUN_0040b9b0(param_1 + 0xd058,"modelName");
  if (1 < 0x00000005) {
    FUN_0040b830(param_1 + 0xd1d4,"speed");
    FUN_0040b830(param_1 + 0xd1e8,"maxDistance");
    FUN_0040b830(param_1 + 0xd1ec,"maxHeight");
    FUN_0040b830(param_1 + 0xd1f0,"rotSpeed");
    FUN_0040b830(param_1 + 0xd1f4,"moveSpeed");
    FUN_0040b8b0(param_1 + 0xd1fc,"followOrders");
  }
  if (0x00000005 < 4) {
    *(uint *)(param_1 + 0xd210) = 0;
    if (0x00000005 < 5) {
      return;
    }
  }
  else {
    FUN_0040b8b0(param_1 + 0xd210,"state");
    if (0x00000005 < 5) {
      return;
    }
  }
  FUN_0040b680(param_1 + 0xd214,0);
  FUN_0040b830(param_1 + 0xd278,"periodicSoundTimerMin");
  FUN_0040b830(param_1 + 0xd27c,"periodicSoundTimerMax");
  return;
}
