// Name: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00433120
// Address: 00433120
// Address Range: [[00433120, 0043312e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00433120(CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00433120(CCharacter *this_ptr,CDemonActor *target)

{
  this_ptr->look_at_target = (CCharacter *)target;
  return;
}
