// Name: core_werewolf.cpp_FUN_0057ee30
// Address: 0057ee30
// Address Range: [[0057ee30, 0057ee77]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_FUN_0057ee30(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_FUN_0057ee30(CWerewolf *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)&this_ptr->field_0xd074 = 0x41200000;
  iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd070);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"were?.wav");
  *(uint *)&this_ptr->field_0xd074 = 0x41a00000;
  *(uint *)&this_ptr->field_0xd070 = uVar2;
  return;
}
