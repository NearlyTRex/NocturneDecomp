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
  this_ptr->unk1[0x18] = '\0';
  this_ptr->unk1[0x19] = '\0';
  this_ptr->unk1[0x1a] = '\0';
  this_ptr->unk1[0x1b] = '\0';
  (*(pCVar1->_uc).cfunc21)();
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc21)();
  return;
}
