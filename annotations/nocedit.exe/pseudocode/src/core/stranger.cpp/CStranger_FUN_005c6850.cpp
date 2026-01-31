// Name: core_stranger.cpp_CStranger_FUN_005c6850
// Address: 005c6850
// Address Range: [[005c6850, 005c6895]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6850(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6850(CStranger *this_ptr)

{
  CEnemy_full_vtable *pCVar1;
  CDemonActor *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  
  if (in_stack_00000008 == *(CDemonActor **)(this_ptr->unk1 + 0x54)) {
    pCVar1 = (this_ptr->base).base.base.vtable._ue;
    this_ptr->unk1[0x54] = '\0';
    this_ptr->unk1[0x55] = '\0';
    this_ptr->unk1[0x56] = '\0';
    this_ptr->unk1[0x57] = '\0';
    (*(pCVar1->_ue).enemyfunc2)();
  }
  core_charactr_cpp_CCharacter_drop_FUN_0042bf90
            ((CCharacter *)this_ptr,in_stack_00000008,in_stack_0000000c);
  return;
}
