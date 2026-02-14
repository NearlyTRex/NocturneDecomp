// Name: core_stranger.cpp_CStranger_drop_FUN_005c6850
// Address: 005c6850
// Address Range: [[005c6850, 005c6895]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drop_FUN_005c6850(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_drop_FUN_005c6850(CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  CEnemy_full_vtable *pCVar1;
  
  if (carrier == this_ptr->weapon) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->weapon = (CDemonActor *)0x0;
    (*(pCVar1->_ue).updateVictim)((CEnemy *)this_ptr,0.0);
  }
  core_charactr_cpp_CCharacter_drop_FUN_0042bf90((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
