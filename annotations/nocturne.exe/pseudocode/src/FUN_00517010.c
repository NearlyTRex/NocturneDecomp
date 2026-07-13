// Name: FUN_00517010
// Address: 00517010
// Address Range: [[00517010, 005170b8]]
// Convention: unknown
// Signature: void FUN_00517010(int param_1)

#include "nocturne.h"

void FUN_00517010(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040ca00(param_1 + 0x150,"@modelName" + 1);
  FUN_0040c880(param_1 + 0x2d0,"weight");
  if (0x00000003 < 2) {
    if (0x00000003 < 3) {
      return;
    }
  }
  else {
    FUN_0040c450(param_1 + 0x338,"initialVelocity");
    FUN_0040c450(param_1 + 0x344,"initRotVel");
    FUN_0040c6d0(param_1 + 0x2d4,"triggerEvent");
    if (0x00000003 < 3) {
      return;
    }
  }
  FUN_0040c900(param_1 + 0x2cc,&DAT_0059116e);
  return;
}
