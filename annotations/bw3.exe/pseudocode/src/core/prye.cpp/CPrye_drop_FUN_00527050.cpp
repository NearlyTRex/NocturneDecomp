// Name: core_prye.cpp_CPrye_drop_FUN_00527050
// Address: 00527050
// Address Range: [[00527050, 00527095]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_drop_FUN_00527050(CPrye *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_drop_FUN_00527050(CPrye *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  CEnemy_full_vtable *pCVar1;
  
  if ((CWeapon *)carrier == this_ptr->weapon) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->weapon = (CWeapon *)0x0;
    (*(pCVar1->_ue).updateVictim)((CEnemy *)this_ptr,0.0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_00430810((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
