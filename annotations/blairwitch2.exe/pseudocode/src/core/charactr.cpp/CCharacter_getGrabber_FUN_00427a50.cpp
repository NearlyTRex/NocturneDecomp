// Name: core_charactr.cpp_CCharacter_getGrabber_FUN_00427a50
// Address: 00427a50
// Address Range: [[00427a50, 00427a5a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_00427a50(CCharacter *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_00427a50(CCharacter *this_ptr)

{
  return this_ptr->grabbed_by;
}
