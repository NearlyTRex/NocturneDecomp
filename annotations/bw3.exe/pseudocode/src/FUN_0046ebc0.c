// Name: FUN_0046ebc0
// Address: 0046ebc0
// Address Range: [[0046ebc0, 0046ece5]]
// Convention: unknown
// Signature: void FUN_0046ebc0(int param_1)

#include "nocturne.h"

void FUN_0046ebc0(int param_1)

{
  if (1 < 0x00000006) {
    FUN_0040c280(param_1);
  }
  FUN_0040b9b0(param_1 + 0x158,"modelName");
  FUN_0040b8b0(param_1 + 0x2d4,&DAT_005bc730);
  FUN_0040b8b0(param_1 + 0x2d8,"autoDrop");
  FUN_0040b400(param_1 + 0x2f8,"homePos");
  FUN_0040b400(param_1 + 0x304,&DAT_005bc746);
  if (2 < 0x00000006) {
    FUN_0040b830(param_1 + 0x2e0,"minAutoDripTime");
    FUN_0040b830(param_1 + 0x2e4,"maxAutoDripTime");
    FUN_0040b830(param_1 + 0x2e8,"dripRadius");
  }
  if (3 < 0x00000006) {
    FUN_0040b830(param_1 + 0x310,"damage");
  }
  if (4 < 0x00000006) {
    FUN_0040b680(param_1 + 0x314,"hitSound");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b8b0(param_1 + 0x334,"noRockFlag");
  return;
}
