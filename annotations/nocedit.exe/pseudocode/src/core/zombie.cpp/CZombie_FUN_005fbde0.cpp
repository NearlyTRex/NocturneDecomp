// Name: core_zombie.cpp_CZombie_FUN_005fbde0
// Address: 005fbde0
// Address Range: [[005fbde0, 005fbe18]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_FUN_005fbde0(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_FUN_005fbde0(CZombie *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  
  pCVar1 = (this_ptr->base).base.base.vtable._uc;
  this_ptr->pickup_target = (CDemonActor *)0x0;
  (*(pCVar1->_uc).dropCarriedObject)((CCharacter *)this_ptr,0,(CVector3f *)0x0);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  return;
}
