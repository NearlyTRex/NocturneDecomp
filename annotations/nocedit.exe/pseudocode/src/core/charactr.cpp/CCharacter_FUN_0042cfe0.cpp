// Name: core_charactr.cpp_CCharacter_FUN_0042cfe0
// Address: 0042cfe0
// Address Range: [[0042cfe0, 0042d05c]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042cfe0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042cfe0(CCharacter *this_ptr)

{
  CDemonActor *this_ptr_00;
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float local_c;
  float local_8;
  
  if (this_ptr->carry_hands[in_stack_00000008].carry_actor != (CDemonActor *)0x0) {
    if (in_stack_0000000c != (CVector3f *)0x0) {
      pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base_actor,(CVector3f *)&stack0xffffffe4,in_stack_0000000c);
      if ((CVector3f *)&local_c != pCVar1) {
        local_c = pCVar1->x;
        local_8 = pCVar1->y;
      }
      in_stack_0000000c = (CVector3f *)&local_c;
    }
    this_ptr_00 = this_ptr->carry_hands[in_stack_00000008].carry_actor;
    (*this_ptr_00->vtable->onDropped)(this_ptr_00,in_stack_0000000c);
    this_ptr->carry_hands[in_stack_00000008].carry_actor = (CDemonActor *)0x0;
  }
  return;
}
