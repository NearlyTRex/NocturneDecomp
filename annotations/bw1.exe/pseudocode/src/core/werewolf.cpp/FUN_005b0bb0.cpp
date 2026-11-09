// Name: core_werewolf.cpp_FUN_005b0bb0
// Address: 005b0bb0
// Address Range: [[005b0bb0, 005b0bf7]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_FUN_005b0bb0(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_FUN_005b0bb0(CWerewolf *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)&this_ptr->field_0xc288 = 0x41200000;
  iVar1 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc284);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"were?.wav");
  *(uint *)&this_ptr->field_0xc288 = 0x41a00000;
  *(uint *)&this_ptr->field_0xc284 = uVar2;
  return;
}
