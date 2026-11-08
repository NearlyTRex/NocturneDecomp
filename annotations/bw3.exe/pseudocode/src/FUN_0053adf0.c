// Name: FUN_0053adf0
// Address: 0053adf0
// Address Range: [[0053adf0, 0053af1a]]
// Convention: unknown
// Signature: void FUN_0053adf0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053adf0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int aiStackY_102c [1014];
  int iStack_48;
  uint local_44;
  uint local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar2 = 0;
  iStack_48 = DAT_005f2afc;
  FUN_0046d1c0();
  local_20 = local_44;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0x00000000 != (byte *)0x21221f4) {
    _DAT_021221d4 = local_20;
    _DAT_021221d8 = local_1c;
    _DAT_021221dc = local_18;
  }
  iStack_48 = DAT_005f2afc;
  FUN_0046d250();
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0x00000000 != (byte *)0x212220c) {
    _DAT_021221e0 = local_2c;
    _DAT_021221e4 = local_28;
    _DAT_021221e8 = local_24;
  }
  iStack_48 = DAT_005f2afc;
  _DAT_021221ec = FUN_0046d2d0();
  iVar1 = param_2 * 4 + param_1;
  iStack_48 = _DAT_021221ec;
  local_14 = _DAT_021221ec;
  FUN_004f40b0(*(int *)(iVar1 + 0x15accc) + 0x21c,&DAT_021221d4,&DAT_021221e0);
  iStack_48 = 1;
  FUN_0046d870(DAT_005f2afc);
  iStack_48 = param_2 + 1;
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 0x10))(DAT_007e2a54);
  iStack_48 = param_2 + 1;
  FUN_0046d850(DAT_005f2afc);
  *(int *)(param_1 + 0x161668) = *(int *)(iVar1 + 0x15accc) + 0x21c;
  return;
}
