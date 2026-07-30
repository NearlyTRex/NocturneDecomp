// Name: core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_0040a320
// Address: 0040a320
// Address Range: [[0040a320, 0040a343]]
// Convention: unknown
// Signature: void core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_0040a320(CDemonActor *param_1,char *param_2,float param_3)

#include "nocturne.h"

void core_actor_cpp_CDemonActor_playSoundWithDelay_FUN_0040a320(CDemonActor *param_1,char *param_2,float param_3)

{
  core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
            (0x02DC9450,param_1,param_2,&(param_1->location).position,param_3);
  return;
}
