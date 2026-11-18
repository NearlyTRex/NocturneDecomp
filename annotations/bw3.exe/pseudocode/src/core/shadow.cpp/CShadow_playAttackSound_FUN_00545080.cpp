// Name: core_shadow.cpp_CShadow_playAttackSound_FUN_00545080
// Address: 00545080
// Address Range: [[00545080, 005450bd]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_playAttackSound_FUN_00545080(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_playAttackSound_FUN_00545080(CShadow *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"shb_attack??.wav");
  this_ptr->howl_cooldown = 8.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
