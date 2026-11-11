// Name: core_schngeis.cpp_CSchnellGeist_processMotionEvent_FUN_005a3420
// Address: 005a3420
// Address Range: [[005a3420, 005a355b]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processMotionEvent_FUN_005a3420(CSchnellGeist *this_ptr,int event_id)

#include "nocturne.h"

void __cdecl core_schngeis_cpp_CSchnellGeist_processMotionEvent_FUN_005a3420(CSchnellGeist *this_ptr,int event_id)

{
  CSound *this_ptr_00;
  uint uVar1;
  int iVar2;
  
  this_ptr_00 = 0x0264B290;
  switch(event_id) {
  case 8000:
    iVar2 = this_ptr->tongue_attack_bone;
    uVar1 = 0x41700000;
    goto LAB_005a344f;
  case 0x1f41:
    this_ptr->breath_state = 1;
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (this_ptr_00,(CDemonActor *)this_ptr,"schnellbreath01",
               &(this_ptr->base).base.base.base.location.position);
    break;
  case 0x1f42:
    this_ptr->breath_state = 0;
    unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
    return;
  case 0x1f43:
    iVar2 = this_ptr->tongue_attack_bone;
    uVar1 = 0x41A00000;
    goto LAB_005a344f;
  case 0x1f44:
    iVar2 = this_ptr->finger_bone;
    uVar1 = 0x41200000;
LAB_005a344f:
    unkafter_basicene_cpp_FUN_0059f740(this_ptr,uVar1,iVar2,0x40000000);
    break;
  case 0x1f45:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"schnellarm0?.wav",
               &(this_ptr->base).base.base.base.location.position);
    break;
  case 0x1f46:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"schnellbite01.wav",
               &(this_ptr->base).base.base.base.location.position);
    break;
  case 0x1f47:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"schnellfootsteps0?.wav",
               &(this_ptr->base).base.base.base.location.position);
    break;
  case 0x1f48:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"schnelljump.wav",
               &(this_ptr->base).base.base.base.location.position);
    break;
  case 0x1f49:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"schnelldeath01.wav",
               &(this_ptr->base).base.base.base.location.position);
  }
  unkafter_basicene_cpp_FUN_0059e880(this_ptr,event_id);
  return;
}
