// Name: core_basicene.cpp_CBasicEnemy_resetInitialPos_FUN_005a0240
// Address: 005a0240
// Address Range: [[005a0240, 005a0261]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_resetInitialPos_FUN_005a0240(CBasicEnemy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_basicene_cpp_CBasicEnemy_resetInitialPos_FUN_005a0240(CBasicEnemy *this_ptr)

{
  (this_ptr->initial_location).position.x = (this_ptr->base).base.base.location.position.x;
  (this_ptr->initial_location).position.y = (this_ptr->base).base.base.location.position.y;
  (this_ptr->initial_location).position.z = (this_ptr->base).base.base.location.position.z;
  (this_ptr->initial_location).area_id = (this_ptr->base).base.base.location.area_id;
  return;
}
