// Name: core_shadow.cpp_CShadow_playAlertSound_FUN_0055f450
// Address: 0055f450
// Address Range: [[0055f450, 0055f49b]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_playAlertSound_FUN_0055f450(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_playAlertSound_FUN_0055f450(CShadow *this_ptr)

{
  int iVar1;
  uint uVar2;
  char *sound_name;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[2]);
  if (iVar1 == 0) {
    if (this_ptr->is_shadow_beast == 1) {
      sound_name = "shb_alert??.wav";
    }
    else {
      sound_name = "ghost_child??.wav";
    }
    uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,sound_name);
    this_ptr->sfx_handles[2] = uVar2;
    this_ptr->howl_cooldown = 15.0;
  }
  return;
}
