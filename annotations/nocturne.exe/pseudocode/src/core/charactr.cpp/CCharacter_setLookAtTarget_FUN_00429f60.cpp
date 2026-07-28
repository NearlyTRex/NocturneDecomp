// Name: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60
// Address: 00429f60
// Address Range: [[00429f60, 00429f6e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429f60(CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429f60(CCharacter *this_ptr,CDemonActor *target)

{
  this_ptr->look_at_target = (CCharacter *)target;
  return;
}
