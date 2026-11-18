// Name: core_confzomb.cpp_CConfederateZombie_processMotionEvent_FUN_005a2520
// Address: 005a2520
// Address Range: [[005a2520, 005a25ff]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processMotionEvent_FUN_005a2520(CConfederateZombie *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_confzomb_cpp_CConfederateZombie_processMotionEvent_FUN_005a2520(CConfederateZombie *this_ptr,int event_id)

{
  int iVar1;
  float damage;
  float radius;
  
  iVar1 = 0;
  switch(event_id) {
  case 0x1fa4:
    iVar1 = this_ptr->right_finger_bone;
    radius = 2.0;
    damage = 25.0f;
    break;
  case 0x1fa5:
    iVar1 = core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
                      (&this_ptr->base,5.0f,this_ptr->right_finger_bone,1.0);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_005a25e4;
  case 0x1fa6:
    iVar1 = this_ptr->left_finger_bone;
    radius = 1.0;
    damage = 5.0f;
    break;
  case 0x1fa7:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"phantomhandswing0?.wav",
               &(this_ptr->base).base.base.base.location.position);
    return;
  case 0x1fa8:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"phantomteleport0?.wav",
               &(this_ptr->base).base.base.base.location.position);
    return;
  default:
    goto switchD_005a2537_default;
  }
  iVar1 = core_basicene_cpp_CBasicEnemy_attackFromBone_FUN_0059f740
                    (&this_ptr->base,damage,iVar1,radius);
switchD_005a2537_default:
  if (iVar1 == 0) {
    return;
  }
LAB_005a25e4:
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (g_CSound_PTR_0061c068,(CDemonActor *)this_ptr,"phandslap0?.wav",
             &(this_ptr->base).base.base.base.location.position);
  return;
}
