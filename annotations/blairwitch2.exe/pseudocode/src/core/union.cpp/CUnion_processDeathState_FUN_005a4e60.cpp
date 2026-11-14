// Name: core_union.cpp_CUnion_processDeathState_FUN_005a4e60
// Address: 005a4e60
// Address Range: [[005a4e60, 005a4e80]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processDeathState_FUN_005a4e60(CUnion *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_union_cpp_CUnion_processDeathState_FUN_005a4e60(CUnion *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.base.model.base,6,1);
  return;
}
