// Name: core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060
// Address: 0058d060
// Address Range: [[0058d060, 0058d0a7]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_playHowl_FUN_0058d060(CWerewolf *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  this_ptr->howl_cooldown = 10.0;
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"were?.wav");
  this_ptr->howl_cooldown = 20.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
