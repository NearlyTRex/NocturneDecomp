// Name: core_doc.cpp_CDoc_drop_FUN_0045de30
// Address: 0045de30
// Address Range: [[0045de30, 0045de75]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_drop_FUN_0045de30(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_drop_FUN_0045de30(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  CEnemy_full_vtable *pCVar1;
  
  if ((CWeapon *)carrier == this_ptr->weapon) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->weapon = (CWeapon *)0x0;
    (*(pCVar1->_ue).updateVictim)((CEnemy *)this_ptr,0.0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00427a60((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
