// Name: core_charactr.cpp_CCharacter_FUN_004297e0
// Address: 004297e0
// Address Range: [[004297e0, 0042981b]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_004297e0(CCharacter *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->base_actor).field11_0xdc == 0) &&
      ((this_ptr->base_actor).location.position.y == *(float *)(this_ptr->field2_0x240c + 8))) &&
     (*(int *)(this_ptr->field2_0x240c + 4) != 0)) {
    iVar1 = (*((this_ptr->base_actor).vtable._ub)->isActiveTarget)(&this_ptr->base_actor);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
