// Name: core_doc.cpp_CDoc_drop_FUN_004764c0
// Address: 004764c0
// Address Range: [[004764c0, 00476505]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_drop_FUN_004764c0(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_drop_FUN_004764c0(CDoc *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  CEnemy_full_vtable *pCVar1;
  
  if ((CWeapon *)carrier == this_ptr->weapon) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->weapon = (CWeapon *)0x0;
    (*(pCVar1->_ue).updateVictim)((CEnemy *)this_ptr,0.0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00431490((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
