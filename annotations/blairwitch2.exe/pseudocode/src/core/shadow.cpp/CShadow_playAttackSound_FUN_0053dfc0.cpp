// Name: core_shadow.cpp_CShadow_playAttackSound_FUN_0053dfc0
// Address: 0053dfc0
// Address Range: [[0053dfc0, 0053dffd]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_playAttackSound_FUN_0053dfc0(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_playAttackSound_FUN_0053dfc0(CShadow *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"shb_attack??.wav");
  this_ptr->howl_cooldown = 8.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
