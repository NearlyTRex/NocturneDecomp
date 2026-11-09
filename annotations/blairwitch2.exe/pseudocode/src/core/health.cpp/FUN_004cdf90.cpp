// Name: core_health.cpp_FUN_004cdf90
// Address: 004cdf90
// Address Range: [[004cdf90, 004cdfd4]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_FUN_004cdf90(CHealthItem *this_ptr,CCharacter *user)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_health_cpp_FUN_004cdf90(CHealthItem *this_ptr,CCharacter *user)

{
  float fVar1;
  
  if (0 < *(int *)&this_ptr->field_0x430) {
    fVar1 = *(float *)&this_ptr->field_0x434 + *(float *)&user->field_0x25a8;
    *(float *)&user->field_0x25a8 = fVar1;
    if ((float)_DAT_005d99f4 < fVar1) {
      *(uint *)&user->field_0x25a8 = 0x42c80000;
    }
    *(int *)&this_ptr->field_0x430 = *(int *)&this_ptr->field_0x430 + -1;
  }
  return *(int *)&this_ptr->field_0x430;
}
