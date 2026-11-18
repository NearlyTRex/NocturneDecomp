// Name: core_demnfolk.cpp_CDemnfolk_dropAndClearTarget_FUN_00458180
// Address: 00458180
// Address Range: [[00458180, 004581b8]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_dropAndClearTarget_FUN_00458180(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_dropAndClearTarget_FUN_00458180(CDemnfolk *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  
  pCVar1 = (this_ptr->base).base.base.vtable._uc;
  this_ptr->pickup_target = (CDemonActor *)0x0;
  (*(pCVar1->_uc).dropCarriedObject)((CCharacter *)this_ptr,0,(CVector3f *)0x0);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  return;
}
