// Name: core_basicene.cpp_CBasicEnemy_updateFlinch_FUN_0059f660
// Address: 0059f660
// Address Range: [[0059f660, 0059f69f]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_updateFlinch_FUN_0059f660(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_updateFlinch_FUN_0059f660(CBasicEnemy *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((this_ptr->flinch_active != 0) &&
     (fVar1 = this_ptr->flinch_timer + delta_time, this_ptr->flinch_timer = fVar1,
     this_ptr->flinch_duration < fVar1)) {
    this_ptr->flinch_active = 0;
    this_ptr->flinch_timer = 0.0;
    return;
  }
  return;
}
