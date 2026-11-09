// Name: core_netgame.cpp_SNetPlayer_copy_FUN_00530a90
// Address: 00530a90
// Address Range: [[00530a90, 00530a90]]
// Convention: unknown
// Signature: SNetPlayer * core_netgame_cpp_SNetPlayer_copy_FUN_00530a90(SNetPlayer *this_ptr,SNetPlayer *other)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNetPlayer * core_netgame_cpp_SNetPlayer_copy_FUN_00530a90(SNetPlayer *this_ptr,SNetPlayer *other)

{
  *(uint *)this_ptr = *(uint *)other;
  *(uint *)&this_ptr->field_0x4 = *(uint *)&other->field_0x4;
  *(uint *)&this_ptr->field_0x8 = *(uint *)&other->field_0x8;
  *(uint *)&this_ptr->field_0xc = *(uint *)&other->field_0xc;
  *(uint *)&this_ptr->field_0x10 = *(uint *)&other->field_0x10;
  *(uint *)&this_ptr->field_0x14 = *(uint *)&other->field_0x14;
  *(uint *)&this_ptr->field_0x18 = *(uint *)&other->field_0x18;
  *(uint *)&this_ptr->field_0x1c = *(uint *)&other->field_0x1c;
  *(ushort *)&this_ptr->field_0x20 = *(ushort *)&other->field_0x20;
  *(uint *)&this_ptr->field_0x24 = *(uint *)&other->field_0x24;
  *(uint *)&this_ptr->field_0x28 = *(uint *)&other->field_0x28;
  *(uint *)&this_ptr->field_0x2c = *(uint *)&other->field_0x2c;
  *(uint *)&this_ptr->field_0x30 = *(uint *)&other->field_0x30;
  *(uint *)&this_ptr->field_0x34 = *(uint *)&other->field_0x34;
  *(uint *)&this_ptr->field_0x38 = *(uint *)&other->field_0x38;
  *(uint *)&this_ptr->field_0x3c = *(uint *)&other->field_0x3c;
  *(uint *)&this_ptr->field_0x40 = *(uint *)&other->field_0x40;
  *(uint *)&this_ptr->field_0x44 = *(uint *)&other->field_0x44;
  *(uint *)&this_ptr->field_0x48 = *(uint *)&other->field_0x48;
  *(uint *)&this_ptr->field_0x4c = *(uint *)&other->field_0x4c;
  *(uint *)&this_ptr->field_0x50 = *(uint *)&other->field_0x50;
  *(uint *)&this_ptr->field_0x54 = *(uint *)&other->field_0x54;
  *(uint *)&this_ptr->field_0x58 = *(uint *)&other->field_0x58;
  *(uint *)&this_ptr->field_0x5c = *(uint *)&other->field_0x5c;
  *(uint *)&this_ptr->field_0x60 = *(uint *)&other->field_0x60;
  *(uint *)&this_ptr->field_0x64 = *(uint *)&other->field_0x64;
  *(uint *)&this_ptr->field_0x68 = *(uint *)&other->field_0x68;
  *(uint *)&this_ptr->field_0x6c = *(uint *)&other->field_0x6c;
  *(uint *)&this_ptr->field_0x70 = *(uint *)&other->field_0x70;
  *(uint *)&this_ptr->field_0x74 = *(uint *)&other->field_0x74;
  *(uint *)&this_ptr->field_0x78 = *(uint *)&other->field_0x78;
  return this_ptr;
}
