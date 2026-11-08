// Name: FUN_004e2bf0
// Address: 004e2bf0
// Address Range: [[004e2bf0, 004e2cb6]]
// Convention: unknown
// Signature: void FUN_004e2bf0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2bf0(int param_1)

{
  byte bVar1;
  uint auStack_1024 [1030];
  
  bVar1 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))();
  auStack_1024[(uint)bVar1 * -2 + 0x3fb] = auStack_1024[(uint)bVar1 * -2 + 0x404];
  auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc] =
       auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x405];
  FUN_00408d70();
  _DAT_01cb5604 = 1;
  _DAT_01cb560c = 1;
  auStack_1024[0x400] = auStack_1024[0x3fd];
  auStack_1024[(uint)bVar1 * -2 + 0x401] = auStack_1024[(uint)bVar1 * -2 + 0x3fe];
  auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x402] =
       auStack_1024[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3ff];
  if (&stack0x00000000 != (byte *)0x1cb3978) {
    _DAT_01cb3954 = auStack_1024[0x400];
    _DAT_01cb3958 = auStack_1024[0x401];
    _DAT_01cb395c = auStack_1024[0x402];
  }
  FUN_00449280();
  _DAT_01cb3a90 = 0x42000000;
  _DAT_01cb3988 = _DAT_005f95d4;
  _DAT_01cb5620 = 1;
  FUN_0044d570();
  return;
}
