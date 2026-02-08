// Name: core_stranger.cpp_CStranger_drop_FUN_005c6850
// Address: 005c6850
// Address Range: [[005c6850, 005c6895]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_drop_FUN_005c6850 (CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl
core_stranger_cpp_CStranger_drop_FUN_005c6850
          (CStranger *this_ptr,CDemonActor *carrier,CVector3f *drop_position)

{
  CEnemy_full_vtable *pCVar1;
  
  if (carrier == *(CDemonActor **)(this_ptr->unk5 + 8)) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->unk5[8] = '\0';
    this_ptr->unk5[9] = '\0';
    this_ptr->unk5[10] = '\0';
    this_ptr->unk5[0xb] = '\0';
    (*(pCVar1->_ue).enemyfunc2)();
  }
  core_charactr_cpp_CCharacter_drop_FUN_0042bf90((CCharacter *)this_ptr,carrier,drop_position);
  return;
}
