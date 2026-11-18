// Name: core_hand.cpp_CHand_processMotionEvent_FUN_005aa380
// Address: 005aa380
// Address Range: [[005aa380, 005aa448]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_processMotionEvent_FUN_005aa380(CHand *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_processMotionEvent_FUN_005aa380(CHand *this_ptr,int event_id)

{
  int iVar1;
  
  iVar1 = 0;
  switch(event_id) {
  case 0x2134:
    iVar1 = core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
                      (&this_ptr->base,10.0f,this_ptr->hand_bone,2.0);
  default:
    if (iVar1 == 0) {
      return;
    }
    break;
  case 0x2135:
    iVar1 = core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
                      (&this_ptr->base,15.0f,this_ptr->hand_bone,2.0);
    if (iVar1 == 0) {
      return;
    }
    break;
  case 0x2136:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"phandriseup01.wav",
               &(this_ptr->base).base.base.base.location.position);
    return;
  case 0x2137:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"phandslap0?.wav",
               &(this_ptr->base).base.base.base.location.position);
    return;
  }
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"phandslap0?.wav",
             &(this_ptr->base).base.base.base.location.position);
  return;
}
