// Name: FUN_004621d0
// Address: 004621d0
// Address Range: [[004621d0, 004622f5]]
// Convention: unknown
// Signature: void FUN_004621d0(int param_1)

#include "nocturne.h"

void FUN_004621d0(int param_1)

{
  if (1 < 0x00000006) {
    FUN_0040d2d0(param_1);
  }
  FUN_0040ca00(param_1 + 0x150,"modelName");
  FUN_0040c900(param_1 + 0x2cc,&DAT_0057de0b);
  FUN_0040c900(param_1 + 0x2d0,"autoDrop");
  FUN_0040c450(param_1 + 0x2f0,"homePos");
  FUN_0040c450(param_1 + 0x2fc,&DAT_0057de21);
  if (2 < 0x00000006) {
    FUN_0040c880(param_1 + 0x2d8,"minAutoDripTime");
    FUN_0040c880(param_1 + 0x2dc,"maxAutoDripTime");
    FUN_0040c880(param_1 + 0x2e0,"dripRadius");
  }
  if (3 < 0x00000006) {
    FUN_0040c880(param_1 + 0x308,"damage");
  }
  if (4 < 0x00000006) {
    FUN_0040c6d0(param_1 + 0x30c,"hitSound");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040c900(param_1 + 0x32c,"noRockFlag");
  return;
}
