// Name: core_charactr.cpp_CCharacter_FUN_0042f300
// Address: 0042f300
// Address Range: [[0042f300, 0042f330]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042f300(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f300(CCharacter *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  char *in_stack_00000008;
  
  if (0.0 < *(float *)(this_ptr->cloth_data + 0x340)) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->cloth_data[0x340] = -0x33;
  this_ptr->cloth_data[0x341] = -0x34;
  this_ptr->cloth_data[0x342] = -0x34;
  this_ptr->cloth_data[0x343] = '=';
  (*pCVar1->playSound)(&this_ptr->base,in_stack_00000008);
  return;
}
