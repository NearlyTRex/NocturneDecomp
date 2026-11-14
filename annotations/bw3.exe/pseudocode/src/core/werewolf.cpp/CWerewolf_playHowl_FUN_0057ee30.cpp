// Name: core_werewolf.cpp_CWerewolf_playHowl_FUN_0057ee30
// Address: 0057ee30
// Address Range: [[0057ee30, 0057ee77]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_playHowl_FUN_0057ee30(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_playHowl_FUN_0057ee30(CWerewolf *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  this_ptr->howl_cooldown = 10.0;
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"were?.wav");
  this_ptr->howl_cooldown = 20.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
