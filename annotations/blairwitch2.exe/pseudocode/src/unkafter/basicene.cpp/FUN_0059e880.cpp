// Name: unkafter_basicene.cpp_FUN_0059e880
// Address: 0059e880
// Address Range: [[0059e880, 0059e8b3]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059e880(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059e880(CDemonActor *param_1,int param_2)

{
  if ((param_2 == 7000) && (param_1[0x66].field_0x28a != '\0')) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,&param_1[0x66].field_0x28a,(CVector3f *)&param_1->field_0x20);
    return;
  }
  return;
}
