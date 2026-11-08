// Name: FUN_004ad8b0
// Address: 004ad8b0
// Address Range: [[004ad8b0, 004ad944]]
// Convention: unknown
// Signature: void FUN_004ad8b0(int param_1)

#include "nocturne.h"

void FUN_004ad8b0(int param_1)

{
  FUN_0040c280(param_1);
  FUN_0040b8b0(param_1 + 0x164,"count");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b930(param_1 + 0x2a08,"followActor");
    FUN_0040b8b0(param_1 + 0x2a0c,"gatherCount");
    FUN_0040b830(param_1 + 0x2a14,"gatherTime");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b400(param_1 + 0x158,"boxSize");
  return;
}
