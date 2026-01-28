// Name: core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0
// Address: 00543cf0
// Address Range: [[00543cf0, 00543dad]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other)

#include "nocturne.h"

void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other)

{
  *(uint *)this_ptr->name = *(uint *)other->name;
  *(uint *)(this_ptr->name + 4) = *(uint *)(other->name + 4);
  *(uint *)(this_ptr->name + 8) = *(uint *)(other->name + 8);
  *(uint *)(this_ptr->name + 0xc) = *(uint *)(other->name + 0xc);
  *(uint *)(this_ptr->name + 0x10) = *(uint *)(other->name + 0x10);
  *(uint *)(this_ptr->name + 0x14) = *(uint *)(other->name + 0x14);
  *(uint *)(this_ptr->name + 0x18) = *(uint *)(other->name + 0x18);
  *(uint *)(this_ptr->name + 0x1c) = *(uint *)(other->name + 0x1c);
  *(ushort *)(this_ptr->name + 0x20) = *(ushort *)(other->name + 0x20);
  *(uint *)(this_ptr->name + 0x24) = *(uint *)(other->name + 0x24);
  this_ptr->ping_quality = other->ping_quality;
  this_ptr->last_ping_sent = other->last_ping_sent;
  this_ptr->last_ping_response = other->last_ping_response;
  this_ptr->player_id = other->player_id;
  *(uint *)this_ptr->unk1 = *(uint *)other->unk1;
  *(uint *)(this_ptr->unk1 + 4) = *(uint *)(other->unk1 + 4);
  *(uint *)(this_ptr->unk1 + 8) = *(uint *)(other->unk1 + 8);
  *(uint *)(this_ptr->unk1 + 0xc) = *(uint *)(other->unk1 + 0xc);
  *(uint *)(this_ptr->unk1 + 0x10) = *(uint *)(other->unk1 + 0x10);
  *(uint *)(this_ptr->unk1 + 0x14) = *(uint *)(other->unk1 + 0x14);
  *(uint *)(this_ptr->unk1 + 0x18) = *(uint *)(other->unk1 + 0x18);
  *(uint *)(this_ptr->unk1 + 0x1c) = *(uint *)(other->unk1 + 0x1c);
  *(uint *)(this_ptr->unk1 + 0x20) = *(uint *)(other->unk1 + 0x20);
  this_ptr->sync_stage = other->sync_stage;
  *(uint *)this_ptr->unk2 = *(uint *)other->unk2;
  *(uint *)(this_ptr->unk2 + 4) = *(uint *)(other->unk2 + 4);
  *(uint *)(this_ptr->unk2 + 8) = *(uint *)(other->unk2 + 8);
  *(uint *)(this_ptr->unk2 + 0xc) = *(uint *)(other->unk2 + 0xc);
  *(uint *)(this_ptr->unk2 + 0x10) = *(uint *)(other->unk2 + 0x10);
  *(uint *)(this_ptr->unk2 + 0x14) = *(uint *)(other->unk2 + 0x14);
  return;
}
