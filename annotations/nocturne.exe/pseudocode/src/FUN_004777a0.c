// Name: FUN_004777a0
// Address: 004777a0
// Address Range: [[004777a0, 00477889]]
// Convention: unknown
// Signature: void FUN_004777a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004777a0(int param_1)

{
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  if (*(int *)(param_1 + 0x574) != 0) {
    _DAT_01c762f4 = 1;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))();
    FUN_0040a240();
    _DAT_01c762fc = 0;
    if (&stack0x00000000 != (byte *)0x1c74764) {
      _DAT_01c74744 = uStack_20;
      _DAT_01c74748 = uStack_1c;
      _DAT_01c7474c = uStack_18;
    }
    FUN_0044d7a0();
    _DAT_01c74740 = *(uint *)(param_1 + 0x578);
    _DAT_01c74778 = 0x42e00000;
    FUN_00452080();
    _DAT_01c76310 = 0;
    FUN_0050a970();
  }
  *(uint *)(param_1 + 0x574) = 0;
  FUN_00554030();
  return;
}
