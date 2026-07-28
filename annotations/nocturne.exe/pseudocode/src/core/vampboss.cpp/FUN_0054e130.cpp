// Name: core_vampboss.cpp_FUN_0054e130
// Address: 0054e130
// Address Range: [[0054e130, 0054e190]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_0054e130(int param_1)

#include "nocturne.h"

void core_vampboss_cpp_FUN_0054e130(int param_1)

{
  CEmitter *this_ptr;
  int iVar1;
  int iVar2;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicusummon.wav");
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(0x01E57284 + 0x14cd6c); iVar2 = iVar2 + 1) {
    this_ptr = (CEmitter *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(iVar1 + 0x14cd70 + 0x01E57284),
                          g_CEmitterActorType_01bcde80.name_hash);
    if ((this_ptr != (CEmitter *)0x0) && (this_ptr->emitter_type == 2)) {
      core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(this_ptr);
    }
    iVar1 = iVar1 + 4;
  }
  return;
}
