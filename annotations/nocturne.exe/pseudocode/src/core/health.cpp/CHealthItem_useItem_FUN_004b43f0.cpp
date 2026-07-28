// Name: core_health.cpp_CHealthItem_useItem_FUN_004b43f0
// Address: 004b43f0
// Address Range: [[004b43f0, 004b4434]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004b43f0(CHealthItem *this_ptr,CCharacter *user)

#include "nocturne.h"

int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004b43f0(CHealthItem *this_ptr,CCharacter *user)

{
  float fVar1;
  
  if (0 < this_ptr->use_count) {
    fVar1 = this_ptr->hp_restored + user->hit_points;
    user->hit_points = fVar1;
    if ((float)100 < fVar1) {
      user->hit_points = 100.0;
    }
    this_ptr->use_count = this_ptr->use_count + -1;
  }
  return this_ptr->use_count;
}
