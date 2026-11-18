// Name: core_shadowsc.cpp_CShadowsc_playGiantAttackSound_FUN_00560fe0
// Address: 00560fe0
// Address Range: [[00560fe0, 0056101d]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_playGiantAttackSound_FUN_00560fe0(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_playGiantAttackSound_FUN_00560fe0(CShadowsc *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"scorp-attack?.wav @ 4");
  this_ptr->sound_cooldown = 15.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
