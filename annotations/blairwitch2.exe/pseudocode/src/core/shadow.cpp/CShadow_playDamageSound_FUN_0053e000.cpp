// Name: core_shadow.cpp_CShadow_playDamageSound_FUN_0053e000
// Address: 0053e000
// Address Range: [[0053e000, 0053e03d]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_playDamageSound_FUN_0053e000(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_playDamageSound_FUN_0053e000(CShadow *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"shb_damage??.wav");
  this_ptr->howl_cooldown = 4.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
