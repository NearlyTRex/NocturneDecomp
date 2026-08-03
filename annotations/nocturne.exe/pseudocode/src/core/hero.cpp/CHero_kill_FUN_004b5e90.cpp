// Name: core_hero.cpp_CHero_kill_FUN_004b5e90
// Address: 004b5e90
// Address Range: [[004b5e90, 004b5eb5]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_kill_FUN_004b5e90(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_kill_FUN_004b5e90(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  this_ptr->invincibility_timer = 0.0;
  core_charactr_cpp_CCharacter_kill_FUN_00424f40
            (&this_ptr->base,damage_type,damage_direction,impact_force);
  return;
}
