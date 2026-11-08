// Name: FUN_004854e0
// Address: 004854e0
// Address Range: [[004854e0, 00485605]]
// Convention: unknown
// Signature: void FUN_004854e0(int param_1)

#include "nocturne.h"

void FUN_004854e0(int param_1)

{
  if (1 < 0x00000006) {
    FUN_0040c040(param_1);
  }
  FUN_0040b770(param_1 + 0x158,"modelName");
  FUN_0040b670(param_1 + 0x2d4,&DAT_005db599);
  FUN_0040b670(param_1 + 0x2d8,"autoDrop");
  FUN_0040b1c0(param_1 + 0x2f8,"homePos");
  FUN_0040b1c0(param_1 + 0x304,&DAT_005db5af);
  if (2 < 0x00000006) {
    FUN_0040b5f0(param_1 + 0x2e0,"minAutoDripTime");
    FUN_0040b5f0(param_1 + 0x2e4,"maxAutoDripTime");
    FUN_0040b5f0(param_1 + 0x2e8,"dripRadius");
  }
  if (3 < 0x00000006) {
    FUN_0040b5f0(param_1 + 0x310,"damage");
  }
  if (4 < 0x00000006) {
    FUN_0040b440(param_1 + 0x314,"hitSound");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b670(param_1 + 0x334,"noRockFlag");
  return;
}
