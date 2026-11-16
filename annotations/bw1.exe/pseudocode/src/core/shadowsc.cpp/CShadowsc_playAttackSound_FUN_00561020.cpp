// Name: core_shadowsc.cpp_CShadowsc_playAttackSound_FUN_00561020
// Address: 00561020
// Address Range: [[00561020, 0056105d]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_playAttackSound_FUN_00561020(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_playAttackSound_FUN_00561020(CShadowsc *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handle);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"scorp-attack?.wav @ 4");
  this_ptr->sound_cooldown = 8.0;
  this_ptr->sfx_handle = uVar2;
  return;
}
