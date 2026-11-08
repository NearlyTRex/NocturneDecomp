// Name: FUN_005017f0
// Address: 005017f0
// Address Range: [[005017f0, 005018b6]]
// Convention: unknown
// Signature: void FUN_005017f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005017f0(int param_1)

{
  byte bVar1;
  uint auStack_1024 [1030];
  
  bVar1 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))();
  auStack_1024[(uint)bVar1 * -2 + 0x3fb] = auStack_1024[(uint)bVar1 * -2 + 0x404];
  auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc] =
       auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x405];
  FUN_00408b40();
  _DAT_01cce098 = 1;
  _DAT_01cce0a0 = 1;
  auStack_1024[0x400] = auStack_1024[0x3fd];
  auStack_1024[(uint)bVar1 * -2 + 0x401] = auStack_1024[(uint)bVar1 * -2 + 0x3fe];
  auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x402] =
       auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3ff];
  if (&stack0x00000000 != (byte *)0x1ccc40c) {
    _DAT_01ccc3e8 = auStack_1024[0x400];
    _DAT_01ccc3ec = auStack_1024[0x401];
    _DAT_01ccc3f0 = auStack_1024[0x402];
  }
  FUN_0045f3e0();
  _DAT_01ccc524 = 0x42000000;
  _DAT_01ccc41c = _DAT_00603174;
  _DAT_01cce0b4 = 1;
  FUN_00465da0();
  return;
}
