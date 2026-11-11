// Name: core_hag.cpp_CHag_processMotionEvent_FUN_005ab940
// Address: 005ab940
// Address Range: [[005ab940, 005ab9ce]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processMotionEvent_FUN_005ab940(CHag *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_hag_cpp_CHag_processMotionEvent_FUN_005ab940(CHag *this_ptr,int event_id)

{
  int iVar1;
  
  if ((uint)event_id < 0x20d1) {
    if (event_id == 0x20d0) {
      unkafter_basicene_cpp_FUN_0059f740(this_ptr,0x41C80000,this_ptr->hand_bone,0x40000000);
      return;
    }
  }
  else {
    if ((uint)event_id < 0x20d2) {
      unkafter_basicene_cpp_FUN_0059f740(this_ptr,0x41700000,this_ptr->hand_bone,0x40000000);
      return;
    }
    if (event_id != 0x20d2) {
      return;
    }
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"hagattack0?.wav",
                 &(this_ptr->base).base.base.base.location.position);
      return;
    }
  }
  return;
}
