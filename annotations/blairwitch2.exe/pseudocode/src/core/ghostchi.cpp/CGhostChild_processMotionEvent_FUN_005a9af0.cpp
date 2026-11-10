// Name: core_ghostchi.cpp_CGhostChild_processMotionEvent_FUN_005a9af0
// Address: 005a9af0
// Address Range: [[005a9af0, 005a9b5d]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processMotionEvent_FUN_005a9af0(CGhostChild *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_processMotionEvent_FUN_005a9af0(CGhostChild *this_ptr,int event_id)

{
  byte *position;
  
  position = &this_ptr->field_0x20;
  if ((uint)event_id < 0x2261) {
    if (event_id != 0x2260) {
      return;
    }
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"ghostchilslap0?.wav",
               (CVector3f *)position);
    return;
  }
  if ((uint)event_id < 0x2262) {
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"ghostchilddeath0?.wav",
               (CVector3f *)position);
    return;
  }
  if (event_id != 0x2262) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"robinscream0?.wav",(CVector3f *)position)
  ;
  return;
}
