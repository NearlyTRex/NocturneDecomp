// Name: core_charactr.cpp_CCharacter_getGrabber_FUN_004280f0
// Address: 004280f0
// Address Range: [[004280f0, 004280fa]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_004280f0(CCharacter *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_004280f0(CCharacter *this_ptr)

{
  return this_ptr->grabbed_by;
}
