// Name: core_charactr.cpp_CCharacter_FUN_0042bf40
// Address: 0042bf40
// Address Range: [[0042bf40, 0042bf6f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042bf40(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf40(CCharacter *this_ptr)

{
  CDemonActor *this_ptr_00;
  int in_EAX;
  int iVar1;
  
  this_ptr_00 = this_ptr->grabbed_by;
  if (this_ptr_00 == (CDemonActor *)0x0) {
    return in_EAX;
  }
  this_ptr->grabbed_by = (CDemonActor *)0x0;
  iVar1 = (*this_ptr_00->vtable[1].playSound)(this_ptr_00,(char *)this_ptr);
  return iVar1;
}
