// Name: core_actor.cpp_FUN_0040a300
// Address: 0040a300
// Address Range: [[0040a300, 0040a31f]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040a300(CDemonActor *param_1,char *param_2)

#include "nocturne.h"

void core_actor_cpp_FUN_0040a300(CDemonActor *param_1,char *param_2)

{
  core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
            (0x02DC9450,param_1,param_2,&(param_1->location).position);
  return;
}
