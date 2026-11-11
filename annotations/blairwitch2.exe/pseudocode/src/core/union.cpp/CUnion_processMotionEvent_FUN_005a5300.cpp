// Name: core_union.cpp_CUnion_processMotionEvent_FUN_005a5300
// Address: 005a5300
// Address Range: [[005a5300, 005a5436]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processMotionEvent_FUN_005a5300(CUnion *this_ptr,int event_id)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_union_cpp_CUnion_processMotionEvent_FUN_005a5300(CUnion *this_ptr,int event_id)

{
  int iVar1;
  
  switch(event_id) {
  case 0x206c:
    core_union_cpp_FUN_005a5460(this_ptr);
    break;
  case 0x206d:
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
    if (2 < iVar1) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"confedstab01.wav",
                 &(this_ptr->base).base.base.base.base.location.position);
      core_basicnpc_cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(&this_ptr->base,event_id);
      return;
    }
    break;
  case 0x206e:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,(CDemonActor *)this_ptr,"confedbutt01.wav",
               &(this_ptr->base).base.base.base.base.location.position);
    core_basicnpc_cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(&this_ptr->base,event_id);
    return;
  case 0x206f:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740(this_ptr,0x40200000,this_ptr->gun2_bone,0x3f800000)
    ;
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"swordimpactflesh0?.wav",
                 &(this_ptr->base).base.base.base.base.location.position);
      core_basicnpc_cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(&this_ptr->base,event_id);
      return;
    }
    break;
  case 0x2070:
    iVar1 = unkafter_basicene_cpp_FUN_0059f740(this_ptr,0x40200000,this_ptr->gun_bone,0x3f800000);
    if (iVar1 != 0) {
      core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                (0x0264B290,(CDemonActor *)this_ptr,"riflebutt01",
                 &(this_ptr->base).base.base.base.base.location.position);
      core_basicnpc_cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(&this_ptr->base,event_id);
      return;
    }
  }
  core_basicnpc_cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(&this_ptr->base,event_id);
  return;
}
