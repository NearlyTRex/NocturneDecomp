// Name: core_health.cpp_CHealthItem_useItem_FUN_004cdf90
// Address: 004cdf90
// Address Range: [[004cdf90, 004cdfd4]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004cdf90(CHealthItem *this_ptr,CCharacter *user)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004cdf90(CHealthItem *this_ptr,CCharacter *user)

{
  float fVar1;
  
  if (0 < this_ptr->use_count) {
    fVar1 = this_ptr->hp_restored + user->hit_points;
    user->hit_points = fVar1;
    if ((float)_DAT_005d99f4 < fVar1) {
      user->hit_points = 100.0;
    }
    this_ptr->use_count = this_ptr->use_count + -1;
  }
  return this_ptr->use_count;
}
