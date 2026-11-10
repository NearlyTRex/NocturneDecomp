// Name: core_confzomb.cpp_CConfederateZombie_processMotionEvent_FUN_005a2520
// Address: 005a2520
// Address Range: [[005a2520, 005a25ff]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processMotionEvent_FUN_005a2520(CConfederateZombie *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_confzomb_cpp_CConfederateZombie_processMotionEvent_FUN_005a2520(CConfederateZombie *this_ptr,int event_id)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  switch(event_id) {
  case 0x1fa4:
    uVar3 = *(uint *)&this_ptr->field_0x11854;
    uVar4 = 0x40000000;
    uVar2 = 0x41C80000;
    break;
  case 0x1fa5:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740
                      (this_ptr,0x40A00000,*(uint *)&this_ptr->field_0x11854,0x3f800000);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_005a25e4;
  case 0x1fa6:
    uVar3 = *(uint *)&this_ptr->field_0x11850;
    uVar4 = 0x3f800000;
    uVar2 = 0x40A00000;
    break;
  case 0x1fa7:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"phantomhandswing0?.wav",
               (CVector3f *)&this_ptr->field_0x20);
    return;
  case 0x1fa8:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"phantomteleport0?.wav",
               (CVector3f *)&this_ptr->field_0x20);
    return;
  default:
    goto switchD_005a2537_default;
  }
  iVar1 = unkafter_basicene_cpp_FUN_0059f740(this_ptr,uVar2,uVar3,uVar4);
switchD_005a2537_default:
  if (iVar1 == 0) {
    return;
  }
LAB_005a25e4:
  core_sound_cpp_CSound_playActorSound_FUN_0055ae50
            (0x0264B290,(CDemonActor *)this_ptr,"phandslap0?.wav",
             (CVector3f *)&this_ptr->field_0x20);
  return;
}
