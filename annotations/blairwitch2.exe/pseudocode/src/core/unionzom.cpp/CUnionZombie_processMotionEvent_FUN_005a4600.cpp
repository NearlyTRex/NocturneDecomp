// Name: core_unionzom.cpp_CUnionZombie_processMotionEvent_FUN_005a4600
// Address: 005a4600
// Address Range: [[005a4600, 005a46df]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processMotionEvent_FUN_005a4600(CUnionZombie *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_unionzom_cpp_CUnionZombie_processMotionEvent_FUN_005a4600(CUnionZombie *this_ptr,int event_id)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  switch(event_id) {
  case 0x1fa4:
    iVar1 = this_ptr->right_finger_bone;
    uVar3 = 0x40000000;
    uVar2 = 0x41C80000;
    break;
  case 0x1fa5:
    iVar1 = core_basicene_cpp_FUN_0059f740
                      (this_ptr,0x40A00000,this_ptr->right_finger_bone,0x3f800000);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_005a46c4;
  case 0x1fa6:
    iVar1 = this_ptr->left_finger_bone;
    uVar3 = 0x3f800000;
    uVar2 = 0x40A00000;
    break;
  case 0x1fa7:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"phantomhandswing0?.wav",
               &(this_ptr->base).base.base.base.location.position);
    return;
  case 0x1fa8:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"phantomteleport0?.wav",
               &(this_ptr->base).base.base.base.location.position);
    return;
  default:
    goto switchD_005a4617_default;
  }
  iVar1 = core_basicene_cpp_FUN_0059f740(this_ptr,uVar2,iVar1,uVar3);
switchD_005a4617_default:
  if (iVar1 == 0) {
    return;
  }
LAB_005a46c4:
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"phandslap0?.wav",
             &(this_ptr->base).base.base.base.location.position);
  return;
}
