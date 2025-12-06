// Name: core_charactr.cpp_CCharacter_FUN_00428ee0
// Address: 00428ee0
// Address Range: [[00428ee0, 00428f33]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428ee0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428ee0(CCharacter *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SCollisionInfo *in_stack_ffffffc0;
  float in_stack_ffffffd8;
  
  iVar1 = (*(this_ptr->base_actor).vtable[1].hasCollision)(&this_ptr->base_actor,in_stack_ffffffc0);
  if (0 < iVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffd4);
  (*(this_ptr->base_actor).vtable[1].playAmbientSoundWithVolume)
            (&this_ptr->base_actor,&stack0xffffffd8,in_stack_ffffffd8);
  return;
}
