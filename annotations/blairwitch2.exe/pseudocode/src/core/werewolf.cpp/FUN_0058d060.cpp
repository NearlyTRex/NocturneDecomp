// Name: core_werewolf.cpp_FUN_0058d060
// Address: 0058d060
// Address Range: [[0058d060, 0058d0a7]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_FUN_0058d060(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_FUN_0058d060(CWerewolf *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)&this_ptr->field_0x10b18 = 0x41200000;
  iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x10b14);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"were?.wav");
  *(uint *)&this_ptr->field_0x10b18 = 0x41a00000;
  *(uint *)&this_ptr->field_0x10b14 = uVar2;
  return;
}
