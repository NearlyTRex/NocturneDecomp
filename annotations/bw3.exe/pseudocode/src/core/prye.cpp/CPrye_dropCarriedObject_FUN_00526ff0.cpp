// Name: core_prye.cpp_CPrye_dropCarriedObject_FUN_00526ff0
// Address: 00526ff0
// Address Range: [[00526ff0, 00527046]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_dropCarriedObject_FUN_00526ff0(CPrye *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_dropCarriedObject_FUN_00526ff0(CPrye *this_ptr,int hand_index,CVector3f *drop_direction)

{
  CEnemy_full_vtable *pCVar1;
  
  if ((CWeapon *)(this_ptr->base).base.carry_hands[hand_index].carry_actor == this_ptr->weapon) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->weapon = (CWeapon *)0x0;
    (*(pCVar1->_ue).updateVictim)((CEnemy *)this_ptr,0.0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00431c40
            ((CCharacter *)this_ptr,hand_index,drop_direction);
  return;
}
