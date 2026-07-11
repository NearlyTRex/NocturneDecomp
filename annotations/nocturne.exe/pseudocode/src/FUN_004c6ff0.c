// Name: FUN_004c6ff0
// Address: 004c6ff0
// Address Range: [[004c6ff0, 004c709e]]
// Convention: unknown
// Signature: void FUN_004c6ff0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6ff0(int param_1)

{
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))();
  FUN_0040a240();
  _DAT_01c762f4 = 1;
  _DAT_01c762fc = 0;
  if (&stack0x00000000 != (byte *)0x1c74758) {
    _DAT_01c74744 = uStack_14;
    _DAT_01c74748 = uStack_10;
    _DAT_01c7474c = uStack_c;
  }
  FUN_0044d7a0();
  _DAT_01c74740 = 0x42000000;
  _DAT_01c74778 = _DAT_0059fd64;
  _DAT_01c76310 = 1;
  FUN_00452080();
  return;
}
