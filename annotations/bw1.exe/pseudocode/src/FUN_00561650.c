// Name: FUN_00561650
// Address: 00561650
// Address Range: [[00561650, 00561751]]
// Convention: unknown
// Signature: void FUN_00561650(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561650(int param_1)

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
  if (*(int *)(param_1 + 0x57c) != 0) {
    _DAT_01cce098 = 1;
    (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))();
    uStack_38 = uStack_20;
    *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    FUN_00408b40();
    uStack_2c = uStack_14;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    _DAT_01cce0a0 = 0;
    if (&stack0x00000000 != (byte *)0x1ccc414) {
      _DAT_01ccc3e8 = uStack_2c;
      _DAT_01ccc3ec = uStack_28;
      _DAT_01ccc3f0 = uStack_24;
    }
    FUN_0045f3e0();
    _DAT_01ccc524 = *(uint *)(param_1 + 0x580);
    _DAT_01ccc41c = 0x42e00000;
    FUN_00465da0();
    _DAT_01cce0b4 = 0;
    FUN_005518e0();
  }
  *(uint *)(param_1 + 0x57c) = 0;
  FUN_005ad770();
  return;
}
