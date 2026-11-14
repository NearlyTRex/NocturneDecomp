// Name: core_charactr.cpp_CCharacter_releaseFromGrab_FUN_00431440
// Address: 00431440
// Address Range: [[00431440, 0043146f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_00431440(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_releaseFromGrab_FUN_00431440(CCharacter *this_ptr)

{
  CCharacter *this_ptr_00;
  
  this_ptr_00 = (CCharacter *)this_ptr->grabbed_by;
  if (this_ptr_00 == (CCharacter *)0x0) {
    return;
  }
  this_ptr->grabbed_by = (CDemonActor *)0x0;
  (*(((this_ptr_00->base).vtable._uc)->_uc).onVictimLost)(this_ptr_00,&this_ptr->base);
  return;
}
