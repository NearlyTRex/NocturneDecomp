// Name: core_zombie.cpp_CZombie_dropAndClearTarget_FUN_0058be30
// Address: 0058be30
// Address Range: [[0058be30, 0058be68]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_dropAndClearTarget_FUN_0058be30(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_dropAndClearTarget_FUN_0058be30(CZombie *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  
  pCVar1 = (this_ptr->base).base.base.vtable._uc;
  *(uint *)&this_ptr->field_0xd064 = 0;
  (*(pCVar1->_uc).dropCarriedObject)((CCharacter *)this_ptr,0,(CVector3f *)0x0);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  return;
}
