// Name: core_stranger.cpp_CStranger_dropCarriedObject_FUN_00591d80
// Address: 00591d80
// Address Range: [[00591d80, 00591dd6]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_00591d80(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_dropCarriedObject_FUN_00591d80(CStranger *this_ptr,int hand_index,CVector3f *drop_direction)

{
  CEnemy_full_vtable *pCVar1;
  
  if ((CWeapon *)(this_ptr->base).base.carry_hands[hand_index].carry_actor == this_ptr->weapon) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->weapon = (CWeapon *)0x0;
    (*(pCVar1->_ue).updateVictim)((CEnemy *)this_ptr,0.0);
  }
  core_charactr_cpp_CCharacter_dropCarriedObject_FUN_00432820
            ((CCharacter *)this_ptr,hand_index,drop_direction);
  return;
}
