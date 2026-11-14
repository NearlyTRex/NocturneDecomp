// Name: core_baron.cpp_CBaron_detachFromOwner_FUN_00410040
// Address: 00410040
// Address Range: [[00410040, 00410077]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410040(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410040(CBaron *this_ptr,CDemonActor *target)

{
  if ((target == this_ptr->target_actor) && (this_ptr->target_actor != (CDemonActor *)0x0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,7,1);
    this_ptr->target_actor = (CDemonActor *)0x0;
    return;
  }
  return;
}
