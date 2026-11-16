// Name: core_tawiscara.cpp_CTawiscara_playHowl_FUN_00595710
// Address: 00595710
// Address Range: [[00595710, 00595757]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscara_cpp_CTawiscara_playHowl_FUN_00595710(CTawiscara *this_ptr)

#include "nocturne.h"

void __cdecl core_tawiscara_cpp_CTawiscara_playHowl_FUN_00595710(CTawiscara *this_ptr)

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
