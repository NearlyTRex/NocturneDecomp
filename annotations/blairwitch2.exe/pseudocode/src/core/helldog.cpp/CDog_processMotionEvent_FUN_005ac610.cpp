// Name: core_helldog.cpp_CDog_processMotionEvent_FUN_005ac610
// Address: 005ac610
// Address Range: [[005ac610, 005ac6c6]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_processMotionEvent_FUN_005ac610(CDog *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_helldog_cpp_CDog_processMotionEvent_FUN_005ac610(CDog *this_ptr,int event_id)

{
  CLocation *position;
  
  position = &(this_ptr->base).base.base.base.location;
  if ((uint)event_id < 0x2199) {
    if (event_id != 0x2198) {
      return;
    }
    core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
              (&this_ptr->base,5.0f,this_ptr->mouth_bone,2.0);
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"dogbite0?.wav",
               &position->position);
    return;
  }
  if ((uint)event_id < 0x219a) {
    core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
              (&this_ptr->base,10.0f,this_ptr->mouth_bone,2.0);
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"dogjump0?.wav",
               &position->position);
    return;
  }
  if (event_id != 0x219a) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"dogfoot0?.wav",
             &position->position);
  return;
}
