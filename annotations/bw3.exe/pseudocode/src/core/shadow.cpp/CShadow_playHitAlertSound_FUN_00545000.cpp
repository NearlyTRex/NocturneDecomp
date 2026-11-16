// Name: core_shadow.cpp_CShadow_playHitAlertSound_FUN_00545000
// Address: 00545000
// Address Range: [[00545000, 0054503d]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_playHitAlertSound_FUN_00545000(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_playHitAlertSound_FUN_00545000(CShadow *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"@@shb_alert??.wav" + 2);
  this_ptr->howl_cooldown = 20.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
