// Name: FUN_004eed10
// Address: 004eed10
// Address Range: [[004eed10, 004eedb4]]
// Convention: unknown
// Signature: void FUN_004eed10(int param_1)

#include "nocturne.h"

void FUN_004eed10(int param_1)

{
  if (0x00000004 < 2) {
    FUN_0040d2d0(param_1);
    FUN_0040c880(param_1 + 0x2434,"@@hitPoints" + 2);
    return;
  }
  FUN_004244b0(param_1);
  if (2 < 0x00000004) {
    FUN_0040ca80(param_1 + 0x150,"modelName");
    FUN_0040cb00(param_1 + 0x150,"motion state");
  }
  if (3 < 0x00000004) {
    FUN_0040c900(param_1 + 0x1f568,"shootMe");
  }
  if (0x00000004 < 5) {
    return;
  }
  FUN_0040c900(param_1 + 0x1f56c,"poolMe");
  return;
}
