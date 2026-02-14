// Name: core_hero.cpp_CHero_kill_FUN_004f3af0
// Address: 004f3af0
// Address Range: [[004f3af0, 004f3b15]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_kill_FUN_004f3af0(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_kill_FUN_004f3af0(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  this_ptr->no_collision_flag = 0;
  core_charactr_cpp_CCharacter_kill_FUN_00428e30
            (&this_ptr->base,damage_type,damage_direction,impact_force);
  return;
}
