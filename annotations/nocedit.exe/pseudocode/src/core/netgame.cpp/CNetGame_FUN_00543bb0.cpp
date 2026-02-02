// Name: core_netgame.cpp_CNetGame_FUN_00543bb0
// Address: 00543bb0
// Address Range: [[00543bb0, 00543ca8]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00543bb0(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00543bb0(CNetGame *this_ptr)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int *in_stack_00000008;
  int iStack_88;
  int iStack_84;
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
  float local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar3 = 0;
  iStack_88 = this_ptr->connection_type;
  iStack_84 = this_ptr->network_mode;
  uStack_80 = *(uint *)this_ptr->network_data;
  uStack_7c = *(uint *)(this_ptr->network_data + 4);
  uStack_78 = *(uint *)(this_ptr->network_data + 8);
  local_74 = *(uint *)(this_ptr->network_data + 0xc);
  local_70 = *(uint *)(this_ptr->network_data + 0x10);
  core_netgame_cpp_FUN_00543e30();
  local_68 = *(ushort *)this_ptr->players[0].name;
  local_64 = *(uint *)(this_ptr->players[0].name + 4);
  local_60 = *(uint *)(this_ptr->players[0].name + 8);
  local_5c = *(uint *)(this_ptr->players[0].name + 0xc);
  local_58 = *(uint *)(this_ptr->players[0].name + 0x10);
  local_54 = *(uint *)(this_ptr->players[0].name + 0x14);
  local_50 = *(uint *)(this_ptr->players[0].name + 0x18);
  local_4c = *(uint *)(this_ptr->players[0].name + 0x1c);
  local_48 = *(uint *)(this_ptr->players[0].name + 0x20);
  local_44 = *(uint *)(this_ptr->players[0].name + 0x24);
  local_40 = this_ptr->players[0].ping_quality;
  local_3c = this_ptr->players[0].last_ping_sent;
  local_38 = this_ptr->players[0].last_ping_response;
  local_34 = this_ptr->players[0].player_id;
  local_30 = *(uint *)this_ptr->players[0].unk1;
  local_2c = *(uint *)(this_ptr->players[0].unk1 + 4);
  local_28 = *(uint *)(this_ptr->players[0].unk1 + 8);
  local_24 = *(uint *)(this_ptr->players[0].unk1 + 0xc);
  local_20 = *(uint *)(this_ptr->players[0].unk1 + 0x10);
  local_1c = *(uint *)(this_ptr->players[0].unk1 + 0x14);
  local_18 = *(uint *)(this_ptr->players[0].unk1 + 0x18);
  local_14 = *(uint *)(this_ptr->players[0].unk1 + 0x1c);
  piVar2 = in_stack_00000008;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    this_ptr->connection_type = *piVar2;
    piVar2 = piVar2 + (uint)bVar3 * -2 + 1;
    this_ptr = (CNetGame *)((int)this_ptr + (uint)bVar3 * -8 + 4);
  }
  piVar2 = &iStack_88;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000008 = *piVar2;
    piVar2 = piVar2 + (uint)bVar3 * -2 + 1;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar3 * -2 + 1;
  }
  return;
}
