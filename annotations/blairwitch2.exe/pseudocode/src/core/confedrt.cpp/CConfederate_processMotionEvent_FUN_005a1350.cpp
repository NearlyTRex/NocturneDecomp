// Name: core_confedrt.cpp_CConfederate_processMotionEvent_FUN_005a1350
// Address: 005a1350
// Address Range: [[005a1350, 005a1486]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processMotionEvent_FUN_005a1350(CConfederate *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_processMotionEvent_FUN_005a1350(CConfederate *this_ptr,int event_id)

{
  int iVar1;
  
  switch(event_id) {
  case 0x206c:
    core_confedrt_cpp_FUN_005a14e0(this_ptr);
    break;
  case 0x206d:
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
    if (2 < iVar1) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"confedstab01.wav",
                 (CVector3f *)&this_ptr->field_0x20);
      unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
      return;
    }
    break;
  case 0x206e:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"confedbutt01.wav",
               (CVector3f *)&this_ptr->field_0x20);
    unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
    return;
  case 0x206f:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (this_ptr,0x40200000,*(uint *)&this_ptr->field_0x1185c,0x3f800000);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"swordimpactflesh0?.wav",
                 (CVector3f *)&this_ptr->field_0x20);
      unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
      return;
    }
    break;
  case 0x2070:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (this_ptr,0x40200000,*(uint *)&this_ptr->field_0x11858,0x3f800000);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"riflebutt01",
                 (CVector3f *)&this_ptr->field_0x20);
      unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
      return;
    }
  }
  unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
  return;
}
