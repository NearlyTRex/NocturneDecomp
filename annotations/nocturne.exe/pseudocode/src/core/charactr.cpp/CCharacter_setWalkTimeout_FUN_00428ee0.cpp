// Name: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428ee0
// Address: 00428ee0
// Address Range: [[00428ee0, 00428eee]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_00428ee0(CCharacter *this_ptr,float timeout)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_00428ee0(CCharacter *this_ptr,float timeout)

{
  this_ptr->door_target = (CDoor *)timeout;
  return;
}
