// Name: FUN_004bfb60
// Address: 004bfb60
// Address Range: [[004bfb60, 004bfbf4]]
// Convention: unknown
// Signature: void FUN_004bfb60(int param_1)

#include "nocturne.h"

void FUN_004bfb60(int param_1)

{
  FUN_0040c040(param_1);
  FUN_0040b670(param_1 + 0x164,"count");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b6f0(param_1 + 0x2a08,"followActor");
    FUN_0040b670(param_1 + 0x2a0c,"gatherCount");
    FUN_0040b5f0(param_1 + 0x2a14,"gatherTime");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b1c0(param_1 + 0x158,"boxSize");
  return;
}
