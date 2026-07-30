// Name: core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350
// Address: 0040a350
// Address Range: [[0040a350, 0040a37f]]
// Convention: unknown
// Signature: uint core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350(CDemonActor *param_1,char *param_2,float param_3)

#include "nocturne.h"

uint core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350(CDemonActor *param_1,char *param_2,float param_3)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
                    (0x02DC9450,param_1,param_2,&(param_1->location).position,param_3);
  return uVar1;
}
