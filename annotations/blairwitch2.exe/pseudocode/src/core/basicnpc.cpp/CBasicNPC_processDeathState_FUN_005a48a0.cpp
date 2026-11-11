// Name: core_basicnpc.cpp_CBasicNPC_processDeathState_FUN_005a48a0
// Address: 005a48a0
// Address Range: [[005a48a0, 005a48c0]]
// Convention: __cdecl
// Signature: void __cdecl core_basicnpc_cpp_CBasicNPC_processDeathState_FUN_005a48a0(CBasicNPC *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicnpc_cpp_CBasicNPC_processDeathState_FUN_005a48a0(CBasicNPC *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,0,1);
  return;
}
