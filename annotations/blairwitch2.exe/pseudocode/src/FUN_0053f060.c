// Name: FUN_0053f060
// Address: 0053f060
// Address Range: [[0053f060, 0053f161]]
// Convention: unknown
// Signature: void FUN_0053f060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f060(int param_1)

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
  if (*(int *)(param_1 + 0x6d8) != 0) {
    _DAT_01cb5604 = 1;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))();
    uStack_38 = uStack_20;
    *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    FUN_00408d70();
    uStack_2c = uStack_14;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    _DAT_01cb560c = 0;
    if (&stack0x00000000 != (byte *)0x1cb3980) {
      _DAT_01cb3954 = uStack_2c;
      _DAT_01cb3958 = uStack_28;
      _DAT_01cb395c = uStack_24;
    }
    FUN_00449280();
    _DAT_01cb3a90 = *(uint *)(param_1 + 0x6dc);
    _DAT_01cb3988 = 0x42e00000;
    FUN_0044d570();
    _DAT_01cb5620 = 0;
    FUN_00530630();
  }
  *(uint *)(param_1 + 0x6d8) = 0;
  FUN_00589c80();
  return;
}
