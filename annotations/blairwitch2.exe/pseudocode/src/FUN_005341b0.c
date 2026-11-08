// Name: FUN_005341b0
// Address: 005341b0
// Address Range: [[005341b0, 005342da]]
// Convention: unknown
// Signature: void FUN_005341b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005341b0(int param_1,int param_2)

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
  iStack_48 = DAT_0060b280;
  FUN_0046b5e0();
  local_20 = local_44;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0x00000000 != (byte *)0x2093618) {
    _DAT_020935f8 = local_20;
    _DAT_020935fc = local_1c;
    _DAT_02093600 = local_18;
  }
  iStack_48 = DAT_0060b280;
  FUN_0046b670();
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0x00000000 != (byte *)0x2093630) {
    _DAT_02093604 = local_2c;
    _DAT_02093608 = local_28;
    _DAT_0209360c = local_24;
  }
  iStack_48 = DAT_0060b280;
  _DAT_02093610 = FUN_0046b6f0();
  iVar1 = param_2 * 4 + param_1;
  iStack_48 = _DAT_02093610;
  local_14 = _DAT_02093610;
  FUN_004f9990(*(int *)(iVar1 + 0x15accc) + 0x348,&DAT_020935f8,&DAT_02093604);
  iStack_48 = 1;
  FUN_0046bc90(DAT_0060b280);
  iStack_48 = param_2 + 1;
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 0x10))(DAT_007bda74);
  iStack_48 = param_2 + 1;
  FUN_0046bc70(DAT_0060b280);
  *(int *)(param_1 + 0x161664) = *(int *)(iVar1 + 0x15accc) + 0x348;
  return;
}
