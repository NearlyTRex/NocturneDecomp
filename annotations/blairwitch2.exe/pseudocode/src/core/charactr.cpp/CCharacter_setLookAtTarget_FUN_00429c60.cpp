// Name: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429c60
// Address: 00429c60
// Address Range: [[00429c60, 00429c6e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429c60(CCharacter *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429c60(CCharacter *this_ptr,CDemonActor *target)

{
  this_ptr->look_at_target = (CCharacter *)target;
  return;
}
