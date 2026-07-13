// Name: FUN_0054b310
// Address: 0054b310
// Address Range: [[0054b310, 0054b458]]
// Convention: unknown
// Signature: void FUN_0054b310(int param_1)

#include "nocturne.h"

void FUN_0054b310(int param_1)

{
  if (0x00000005 < 3) {
    FUN_0040d2d0(param_1);
  }
  else {
    FUN_004796c0(param_1);
  }
  FUN_0040c450(param_1 + 0xbeac,"@homePos" + 1);
  FUN_0040ca00(param_1 + 0xbd28,"modelName");
  if (1 < 0x00000005) {
    FUN_0040c880(param_1 + 0xbea4,"speed");
    FUN_0040c880(param_1 + 0xbeb8,"maxDistance");
    FUN_0040c880(param_1 + 0xbebc,"maxHeight");
    FUN_0040c880(param_1 + 0xbec0,"rotSpeed");
    FUN_0040c880(param_1 + 0xbec4,"moveSpeed");
    FUN_0040c900(param_1 + 0xbecc,"followOrders");
  }
  if (0x00000005 < 4) {
    *(uint *)(param_1 + 0xbee0) = 0;
    if (0x00000005 < 5) {
      return;
    }
  }
  else {
    FUN_0040c900(param_1 + 0xbee0,"state");
    if (0x00000005 < 5) {
      return;
    }
  }
  FUN_0040c6d0(param_1 + 0xbee4,0);
  FUN_0040c880(param_1 + 0xbf48,"periodicSoundTimerMin");
  FUN_0040c880(param_1 + 0xbf4c,"periodicSoundTimerMax");
  return;
}
