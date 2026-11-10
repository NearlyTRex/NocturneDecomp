// Name: core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
// Address: 00424430
// Address Range: [[00424430, 0042446b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_00424430(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_00424430(CCharacter *this_ptr)

{
  int iVar1;
  
  if (((*(int *)&(this_ptr->base).field_0xdc == 0) &&
      (*(float *)&(this_ptr->base).field_0x24 == this_ptr->closest_distance_threshold)) &&
     (this_ptr->is_on_ground != 0)) {
    iVar1 = (*((this_ptr->base).vtable._ub)->canLookAt)(&this_ptr->base);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
