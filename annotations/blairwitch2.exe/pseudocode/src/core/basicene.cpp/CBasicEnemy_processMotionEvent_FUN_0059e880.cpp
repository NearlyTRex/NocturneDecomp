// Name: core_basicene.cpp_CBasicEnemy_processMotionEvent_FUN_0059e880
// Address: 0059e880
// Address Range: [[0059e880, 0059e8b3]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processMotionEvent_FUN_0059e880(CBasicEnemy *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processMotionEvent_FUN_0059e880(CBasicEnemy *this_ptr,int event_id)

{
  if ((event_id == 7000) && (this_ptr->bodyfall_sound[0] != '\0')) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,this_ptr->bodyfall_sound,
               &(this_ptr->base).base.base.location.position);
    return;
  }
  return;
}
