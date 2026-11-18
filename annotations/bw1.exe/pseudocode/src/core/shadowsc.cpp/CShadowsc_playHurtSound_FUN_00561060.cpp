// Name: core_shadowsc.cpp_CShadowsc_playHurtSound_FUN_00561060
// Address: 00561060
// Address Range: [[00561060, 0056109d]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_playHurtSound_FUN_00561060(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_playHurtSound_FUN_00561060(CShadowsc *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"scorp-damage?.wav @ 4");
  this_ptr->sound_cooldown = 4.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
