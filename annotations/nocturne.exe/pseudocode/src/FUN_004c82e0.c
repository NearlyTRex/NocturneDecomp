// Name: FUN_004c82e0
// Address: 004c82e0
// Address Range: [[004c82e0, 004c8360]]
// Convention: unknown
// Signature: void FUN_004c82e0(int param_1)

#include "nocturne.h"

void FUN_004c82e0(int param_1)

{
  FUN_0040d2d0(param_1);
  FUN_0040c880(param_1 + 0x150,&DAT_00587ae5);
  FUN_0040c880(param_1 + 0x154,"falloff");
  if (0x00000002 < 2) {
    return;
  }
  FUN_0040c900(param_1 + 0x158,"state");
  FUN_0040c6d0(param_1 + 0x15c,"onEvent");
  FUN_0040c6d0(param_1 + 0x1c0,"offEvent");
  return;
}
