// Name: FUN_00486c30
// Address: 00486c30
// Address Range: [[00486c30, 00486d31]]
// Convention: unknown
// Signature: void FUN_00486c30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486c30(int param_1)

{
  byte bVar1;
  uint auStack_1020 [1016];
  uint uStack_38;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_14;
  
  bVar1 = 0;
  if (*(int *)(param_1 + 0x598) != 0) {
    _DAT_01d20014 = 1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))();
    uStack_38 = uStack_20;
    *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    FUN_00408b80();
    uStack_2c = uStack_14;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    _DAT_01d2001c = 0;
    if (&stack0x00000000 != (byte *)0x1d1e390) {
      _DAT_01d1e364 = uStack_2c;
      _DAT_01d1e368 = uStack_28;
      _DAT_01d1e36c = uStack_24;
    }
    FUN_0045b550();
    _DAT_01d1e4a0 = *(uint *)(param_1 + 0x59c);
    _DAT_01d1e398 = 0x42e00000;
    FUN_0045fab0();
    _DAT_01d20030 = 0;
    FUN_00537270();
  }
  *(uint *)(param_1 + 0x598) = 0;
  FUN_0057b160();
  return;
}
