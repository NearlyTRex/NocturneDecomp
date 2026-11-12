// Name: core_basicene.cpp_FUN_0059e880
// Address: 0059e880
// Address Range: [[0059e880, 0059e8b3]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_0059e880(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_basicene_cpp_FUN_0059e880(CDemonActor *param_1,int param_2)

{
  if ((param_2 == 7000) &&
     (*(char *)((int)&param_1[0x66].particle_systems[4].fade_start + 2) != '\0')) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,(char *)((int)&param_1[0x66].particle_systems[4].fade_start + 2)
               ,&(param_1->location).position);
    return;
  }
  return;
}
