// Name: core_hellhag.cpp_CHag_processMotionEvent_FUN_005ab940
// Address: 005ab940
// Address Range: [[005ab940, 005ab9ce]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processMotionEvent_FUN_005ab940(CHag *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_hellhag_cpp_CHag_processMotionEvent_FUN_005ab940(CHag *this_ptr,int event_id)

{
  int iVar1;
  
  if ((uint)event_id < 0x20d1) {
    if (event_id == 0x20d0) {
      core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
                (&this_ptr->base,25.0f,this_ptr->hand_bone,2.0);
      return;
    }
  }
  else {
    if ((uint)event_id < 0x20d2) {
      core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
                (&this_ptr->base,15.0f,this_ptr->hand_bone,2.0);
      return;
    }
    if (event_id != 0x20d2) {
      return;
    }
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"hagattack0?.wav",
                 &(this_ptr->base).base.base.base.location.position);
      return;
    }
  }
  return;
}
