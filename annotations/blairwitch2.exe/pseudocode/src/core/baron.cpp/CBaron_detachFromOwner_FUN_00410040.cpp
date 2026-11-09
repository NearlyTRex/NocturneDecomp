// Name: core_baron.cpp_CBaron_detachFromOwner_FUN_00410040
// Address: 00410040
// Address Range: [[00410040, 00410077]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410040(CBaron *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_detachFromOwner_FUN_00410040(CBaron *this_ptr,CDemonActor *target)

{
  if ((target == *(CDemonActor **)&this_ptr->field_0x25718) &&
     (*(CDemonActor **)&this_ptr->field_0x25718 != (CDemonActor *)0x0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,7,1);
    *(uint *)&this_ptr->field_0x25718 = 0;
    return;
  }
  return;
}
