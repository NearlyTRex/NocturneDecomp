// Name: core_charactr.cpp_CCharacter_FUN_0042f300
// Address: 0042f300
// Address Range: [[0042f300, 0042f330]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042f300(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f300(CCharacter *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  char *in_stack_00000008;
  
  if (0.0 < *(float *)(this_ptr->field53_0x2dc4 + 0x14)) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->field53_0x2dc4[0x14] = -0x33;
  this_ptr->field53_0x2dc4[0x15] = -0x34;
  this_ptr->field53_0x2dc4[0x16] = -0x34;
  this_ptr->field53_0x2dc4[0x17] = '=';
  (*pCVar1->playSound)(&this_ptr->base,in_stack_00000008);
  return;
}
