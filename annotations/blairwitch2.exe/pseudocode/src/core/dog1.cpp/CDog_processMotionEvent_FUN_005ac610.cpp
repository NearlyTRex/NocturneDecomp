// Name: core_dog1.cpp_CDog_processMotionEvent_FUN_005ac610
// Address: 005ac610
// Address Range: [[005ac610, 005ac6c6]]
// Convention: __cdecl
// Signature: void __cdecl core_dog1_cpp_CDog_processMotionEvent_FUN_005ac610(CDog *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_dog1_cpp_CDog_processMotionEvent_FUN_005ac610(CDog *this_ptr,int event_id)

{
  byte *position;
  
  position = &this_ptr->field_0x20;
  if ((uint)event_id < 0x2199) {
    if (event_id != 0x2198) {
      return;
    }
    unkafter_basicene_cpp_FUN_0059f740
              (this_ptr,0x40A00000,*(uint *)&this_ptr->field_0x11850,0x40000000);
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"dogbite0?.wav",(CVector3f *)position);
    return;
  }
  if ((uint)event_id < 0x219a) {
    unkafter_basicene_cpp_FUN_0059f740
              (this_ptr,0x41200000,*(uint *)&this_ptr->field_0x11850,0x40000000);
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"dogjump0?.wav",(CVector3f *)position);
    return;
  }
  if (event_id != 0x219a) {
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"dogfoot0?.wav",(CVector3f *)position);
  return;
}
