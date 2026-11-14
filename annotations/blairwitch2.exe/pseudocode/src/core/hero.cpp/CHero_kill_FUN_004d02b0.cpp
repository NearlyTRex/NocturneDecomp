// Name: core_hero.cpp_CHero_kill_FUN_004d02b0
// Address: 004d02b0
// Address Range: [[004d02b0, 004d02d5]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_kill_FUN_004d02b0(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_kill_FUN_004d02b0(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  this_ptr->invincibility_timer = 0.0;
  core_charactr_cpp_CCharacter_kill_FUN_00423900
            (&this_ptr->base,damage_type,damage_direction,impact_force);
  return;
}
