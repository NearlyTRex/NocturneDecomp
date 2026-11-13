// Name: core_basicene.cpp_CBasicEnemy_processMotionEvent_FUN_0059e880
// Address: 0059e880
// Address Range: [[0059e880, 0059e8b3]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processMotionEvent_FUN_0059e880(CBasicEnemy *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processMotionEvent_FUN_0059e880(CBasicEnemy *this_ptr,int param_2)

{
  if ((param_2 == 7000) && (this_ptr->bodyfall_sound[0] != '\0')) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,this_ptr->bodyfall_sound,
               &(this_ptr->base).base.base.location.position);
    return;
  }
  return;
}
