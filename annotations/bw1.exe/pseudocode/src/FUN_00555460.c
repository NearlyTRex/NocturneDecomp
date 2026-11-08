// Name: FUN_00555460
// Address: 00555460
// Address Range: [[00555460, 0055558a]]
// Convention: unknown
// Signature: void FUN_00555460(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555460(int param_1,int param_2)

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
  iStack_48 = DAT_00612560;
  FUN_00483ae0();
  local_20 = local_44;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0x00000000 != (byte *)0x20af5cc) {
    _DAT_020af5ac = local_20;
    _DAT_020af5b0 = local_1c;
    _DAT_020af5b4 = local_18;
  }
  iStack_48 = DAT_00612560;
  FUN_00483b70();
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0x00000000 != (byte *)0x20af5e4) {
    _DAT_020af5b8 = local_2c;
    _DAT_020af5bc = local_28;
    _DAT_020af5c0 = local_24;
  }
  iStack_48 = DAT_00612560;
  _DAT_020af5c4 = FUN_00483bf0();
  iVar1 = param_2 * 4 + param_1;
  iStack_48 = _DAT_020af5c4;
  local_14 = _DAT_020af5c4;
  FUN_005188e0(*(int *)(iVar1 + 0x15accc) + 0x1ec,&DAT_020af5ac,&DAT_020af5b8);
  iStack_48 = 1;
  FUN_00484190(DAT_00612560);
  iStack_48 = param_2 + 1;
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 0x10))(DAT_007c6120);
  iStack_48 = param_2 + 1;
  FUN_00484170(DAT_00612560);
  *(int *)(param_1 + 0x161668) = *(int *)(iVar1 + 0x15accc) + 0x1ec;
  return;
}
