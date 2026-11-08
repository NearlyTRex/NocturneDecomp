// Name: FUN_004a6b90
// Address: 004a6b90
// Address Range: [[004a6b90, 004a6c24]]
// Convention: unknown
// Signature: void FUN_004a6b90(int param_1)

#include "nocturne.h"

void FUN_004a6b90(int param_1)

{
  FUN_0040c330(param_1);
  FUN_0040b960(param_1 + 0x2c0,"count");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040b9e0(param_1 + 0x2b64,"followActor");
    FUN_0040b960(param_1 + 0x2b68,"gatherCount");
    FUN_0040b8e0(param_1 + 0x2b70,"gatherTime");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040b4b0(param_1 + 0x2b4,"boxSize");
  return;
}
