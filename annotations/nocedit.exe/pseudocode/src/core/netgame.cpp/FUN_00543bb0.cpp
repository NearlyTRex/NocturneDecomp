// Name: core_netgame.cpp_FUN_00543bb0
// Address: 00543bb0
// Address Range: [[00543bb0, 00543ca8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_FUN_00543bb0(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_FUN_00543bb0(void)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint local_70;
  ushort local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar3 = 0;
  uStack_88 = *in_stack_00000004;
  uStack_84 = in_stack_00000004[1];
  uStack_80 = in_stack_00000004[2];
  uStack_7c = in_stack_00000004[3];
  uStack_78 = in_stack_00000004[4];
  local_74 = in_stack_00000004[5];
  local_70 = in_stack_00000004[6];
  core_netgame_cpp_FUN_00543e30();
  local_68 = *(ushort *)(in_stack_00000004 + 8);
  local_64 = in_stack_00000004[9];
  local_60 = in_stack_00000004[10];
  local_5c = in_stack_00000004[0xb];
  local_58 = in_stack_00000004[0xc];
  local_54 = in_stack_00000004[0xd];
  local_50 = in_stack_00000004[0xe];
  local_4c = in_stack_00000004[0xf];
  local_48 = in_stack_00000004[0x10];
  local_44 = in_stack_00000004[0x11];
  local_40 = in_stack_00000004[0x12];
  local_3c = in_stack_00000004[0x13];
  local_38 = in_stack_00000004[0x14];
  local_34 = in_stack_00000004[0x15];
  local_30 = in_stack_00000004[0x16];
  local_2c = in_stack_00000004[0x17];
  local_28 = in_stack_00000004[0x18];
  local_24 = in_stack_00000004[0x19];
  local_20 = in_stack_00000004[0x1a];
  local_1c = in_stack_00000004[0x1b];
  local_18 = in_stack_00000004[0x1c];
  local_14 = in_stack_00000004[0x1d];
  puVar2 = in_stack_00000008;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000004 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    in_stack_00000004 = in_stack_00000004 + (uint)bVar3 * -2 + 1;
  }
  puVar2 = &uStack_88;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000008 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar3 * -2 + 1;
  }
  return;
}
