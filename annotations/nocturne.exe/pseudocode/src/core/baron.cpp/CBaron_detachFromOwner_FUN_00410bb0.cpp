// Name: core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0
// Address: 00410bb0
// Address Range: [[00410bb0, 00410be7]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0(CBaron *this_ptr,CDemonActor *target)

{
  if ((target == this_ptr->target_actor) && (this_ptr->target_actor != (CDemonActor *)0x0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,7,1);
    this_ptr->target_actor = (CDemonActor *)0x0;
    return;
  }
  return;
}
