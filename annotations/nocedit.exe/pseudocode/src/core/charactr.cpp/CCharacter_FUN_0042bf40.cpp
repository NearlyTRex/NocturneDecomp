// Name: core_charactr.cpp_CCharacter_FUN_0042bf40
// Address: 0042bf40
// Address Range: [[0042bf40, 0042bf6f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf40(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042bf40(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  int in_EAX;
  int iVar2;
  
  pCVar1 = this_ptr->grabbed_by;
  if (pCVar1 == (CDemonActor *)0x0) {
    return in_EAX;
  }
  this_ptr->grabbed_by = (CDemonActor *)0x0;
  iVar2 = (*(((pCVar1->vtable)._uc)->_uc).cfunc10)();
  return iVar2;
}
