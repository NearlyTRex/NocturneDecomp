// Name: core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005835a0
// Address: 005835a0
// Address Range: [[005835a0, 00583600]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005835a0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_summonFireEmitters_FUN_005835a0(CVampireBoss *this_ptr)

{
  CEmitter *this_ptr_00;
  int iVar1;
  int iVar2;
  
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
    this_ptr_00 = (CEmitter *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)((int)g_CDemonSetPtr->actors + iVar1),
                             g_CEmitterClassInfo.name_hash);
    if ((this_ptr_00 != (CEmitter *)0x0) && (*(int *)&this_ptr_00->field_0x2b4 == 2)) {
      core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_00486a80(this_ptr_00);
    }
    iVar1 = iVar1 + 4;
  }
  return;
}
