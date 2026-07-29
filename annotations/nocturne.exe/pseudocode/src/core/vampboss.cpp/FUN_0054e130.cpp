// Name: core_vampboss.cpp_FUN_0054e130
// Address: 0054e130
// Address Range: [[0054e130, 0054e190]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_0054e130(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_0054e130(CVampireBoss *this_ptr)

{
  CEmitter *this_ptr_00;
  int iVar1;
  int iVar2;
  
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
    this_ptr_00 = (CEmitter *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(iVar1 + 0x14cd70 + 0x01E57284),
                             g_CEmitterActorType_01bcde80.name_hash);
    if ((this_ptr_00 != (CEmitter *)0x0) && (this_ptr_00->emitter_type == 2)) {
      core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(this_ptr_00);
    }
    iVar1 = iVar1 + 4;
  }
  return;
}
