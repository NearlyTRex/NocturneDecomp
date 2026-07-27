// Name: core_vampboss.cpp_FUN_0054e130
// Address: 0054e130
// Address Range: [[0054e130, 0054e190]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_0054e130(int param_1)

#include "nocturne.h"

void core_vampboss_cpp_FUN_0054e130(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicusummon.wav");
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x14cd6c); iVar3 = iVar3 + 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar2 + 0x14cd70 + 0x01E57284),
                       g_CEmitterActorType_01bcde80.name_hash);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x150) == 2)) {
      core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(iVar1);
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
