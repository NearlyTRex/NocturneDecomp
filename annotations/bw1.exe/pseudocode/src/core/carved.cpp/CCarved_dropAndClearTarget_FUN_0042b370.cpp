// Name: core_carved.cpp_CCarved_dropAndClearTarget_FUN_0042b370
// Address: 0042b370
// Address Range: [[0042b370, 0042b3a8]]
// Convention: __cdecl
// Signature: void __cdecl core_carved_cpp_CCarved_dropAndClearTarget_FUN_0042b370(CCarved *this_ptr)

#include "nocturne.h"

void __cdecl core_carved_cpp_CCarved_dropAndClearTarget_FUN_0042b370(CCarved *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  
  pCVar1 = (this_ptr->base).base.base.vtable._uc;
  this_ptr->pickup_target = (CDemonActor *)0x0;
  (*(pCVar1->_uc).dropCarriedObject)((CCharacter *)this_ptr,0,(CVector3f *)0x0);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  return;
}
