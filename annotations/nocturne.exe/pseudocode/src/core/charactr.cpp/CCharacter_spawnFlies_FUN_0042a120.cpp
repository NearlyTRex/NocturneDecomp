// Name: core_charactr.cpp_CCharacter_spawnFlies_FUN_0042a120
// Address: 0042a120
// Address Range: [[0042a120, 0042a140]]
// Convention: unknown
// Signature: void core_charactr_cpp_CCharacter_spawnFlies_FUN_0042a120(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

void core_charactr_cpp_CCharacter_spawnFlies_FUN_0042a120(CDemonActor *param_1,int param_2,float param_3)

{
  if (param_1[0x23].blood_effect_color != 0) {
    return;
  }
  core_actor_cpp_CDemonActor_spawnFlies_FUN_0040b090(param_1,param_2,param_3);
  return;
}
