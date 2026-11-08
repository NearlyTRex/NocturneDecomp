// Name: FUN_0046cfe0
// Address: 0046cfe0
// Address Range: [[0046cfe0, 0046d105]]
// Convention: unknown
// Signature: void FUN_0046cfe0(int param_1)

#include "nocturne.h"

void FUN_0046cfe0(int param_1)

{
  if (1 < 0x00000006) {
    FUN_0040c330(param_1);
  }
  FUN_0040ba60(param_1 + 0x2b4,"modelName");
  FUN_0040b960(param_1 + 0x430,&DAT_005d17a0);
  FUN_0040b960(param_1 + 0x434,"autoDrop");
  FUN_0040b4b0(param_1 + 0x454,"homePos");
  FUN_0040b4b0(param_1 + 0x460,&DAT_005d17b6);
  if (2 < 0x00000006) {
    FUN_0040b8e0(param_1 + 0x43c,"minAutoDripTime");
    FUN_0040b8e0(param_1 + 0x440,"maxAutoDripTime");
    FUN_0040b8e0(param_1 + 0x444,"dripRadius");
  }
  if (3 < 0x00000006) {
    FUN_0040b8e0(param_1 + 0x46c,"damage");
  }
  if (4 < 0x00000006) {
    FUN_0040b730(param_1 + 0x470,"hitSound");
  }
  if (0x00000006 < 6) {
    return;
  }
  FUN_0040b960(param_1 + 0x490,"noRockFlag");
  return;
}
