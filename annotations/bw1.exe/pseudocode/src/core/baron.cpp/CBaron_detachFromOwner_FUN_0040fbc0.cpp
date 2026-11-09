// Name: core_baron.cpp_CBaron_detachFromOwner_FUN_0040fbc0
// Address: 0040fbc0
// Address Range: [[0040fbc0, 0040fbf7]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_0040fbc0(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_0040fbc0(CBaron *this_ptr,CDemonActor *target)

{
  if ((target == *(CDemonActor **)&this_ptr->field_0x20084) &&
     (*(CDemonActor **)&this_ptr->field_0x20084 != (CDemonActor *)0x0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,7,1);
    *(uint *)&this_ptr->field_0x20084 = 0;
    return;
  }
  return;
}
