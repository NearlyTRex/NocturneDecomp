// Name: FUN_00550540
// Address: 00550540
// Address Range: [[00550540, 0055064c]]
// Convention: unknown
// Signature: void FUN_00550540(int param_1)

#include "nocturne.h"

void FUN_00550540(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,"modelName");
  FUN_0040c980(param_1 + 0x2d0,&DAT_005974cf);
  FUN_0040c980(param_1 + 0x2d4,"neutral");
  FUN_0040c6d0(param_1 + 0x2d8,"destroyedEvent");
  FUN_0040c980(param_1 + 0x3a0,"startLoc");
  FUN_0040c980(param_1 + 0x3a4,"endLoc");
  FUN_0040c900(param_1 + 0x3b0,"state");
  FUN_0040c880(param_1 + 0x3b4,"timer");
  if (1 < 0x00000004) {
    FUN_0040c6d0(param_1 + 0x33c,"winEvent");
  }
  if (2 < 0x00000004) {
    FUN_0040c880(param_1 + 0x3a8,"eatDistance");
  }
  if (0x00000004 < 4) {
    return;
  }
  FUN_0040c900(param_1 + 0x3ac,"visualType");
  return;
}
