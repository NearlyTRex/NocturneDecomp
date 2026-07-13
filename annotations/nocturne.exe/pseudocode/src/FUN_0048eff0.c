// Name: FUN_0048eff0
// Address: 0048eff0
// Address Range: [[0048eff0, 0048f084]]
// Convention: unknown
// Signature: void FUN_0048eff0(int param_1)

#include "nocturne.h"

void FUN_0048eff0(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c900(param_1 + 0x15c,"count");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040c980(param_1 + 0x2a00,"followActor");
    FUN_0040c900(param_1 + 0x2a04,"gatherCount");
    FUN_0040c880(param_1 + 0x2a0c,"gatherTime");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040c450(param_1 + 0x150,"boxSize");
  return;
}
