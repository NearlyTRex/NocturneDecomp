// Name: core_charactr.cpp_CCharacter_FUN_004297e0
// Address: 004297e0
// Address Range: [[004297e0, 0042981b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_004297e0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_004297e0(CCharacter *this_ptr)

{
  int iVar1;
  
  if ((((this_ptr->base).standing_platform == (CPlatform *)0x0) &&
      ((this_ptr->base).location.position.y == this_ptr->closest_distance_threshold)) &&
     (this_ptr->field3_0x2410 != 0)) {
    iVar1 = (*((this_ptr->base).vtable._ub)->isActiveTarget)(&this_ptr->base);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
