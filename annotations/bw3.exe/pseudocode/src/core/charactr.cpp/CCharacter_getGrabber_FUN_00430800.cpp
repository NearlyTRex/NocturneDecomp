// Name: core_charactr.cpp_CCharacter_getGrabber_FUN_00430800
// Address: 00430800
// Address Range: [[00430800, 0043080a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_00430800(CCharacter *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_00430800(CCharacter *this_ptr)

{
  return this_ptr->grabbed_by;
}
