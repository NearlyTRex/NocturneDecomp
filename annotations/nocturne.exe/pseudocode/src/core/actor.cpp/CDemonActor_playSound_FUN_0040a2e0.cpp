// Name: core_actor.cpp_CDemonActor_playSound_FUN_0040a2e0
// Address: 0040a2e0
// Address Range: [[0040a2e0, 0040a2ff]]
// Convention: unknown
// Signature: void core_actor_cpp_CDemonActor_playSound_FUN_0040a2e0(CDemonActor *param_1,char *param_2)

#include "nocturne.h"

void core_actor_cpp_CDemonActor_playSound_FUN_0040a2e0(CDemonActor *param_1,char *param_2)

{
  core_sound_cpp_CSound_playActorSound_FUN_0052ea60
            (0x02DC9450,param_1,param_2,&(param_1->location).position);
  return;
}
