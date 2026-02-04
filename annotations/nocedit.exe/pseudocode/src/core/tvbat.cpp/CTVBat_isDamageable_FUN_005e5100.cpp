// Name: core_tvbat.cpp_CTVBat_isDamageable_FUN_005e5100
// Address: 005e5100
// Address Range: [[005e5100, 005e512e]]
// Convention: __cdecl
// Signature: int __cdecl core_tvbat_cpp_CTVBat_isDamageable_FUN_005e5100(CTVBat *this_ptr)

#include "nocturne.h"

int __cdecl core_tvbat_cpp_CTVBat_isDamageable_FUN_005e5100(CTVBat *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).base.base.was_created == 2) {
    return 2;
  }
  iVar1 = this_ptr->state;
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 2;
    }
    return iVar1;
  }
  return 0;
}
