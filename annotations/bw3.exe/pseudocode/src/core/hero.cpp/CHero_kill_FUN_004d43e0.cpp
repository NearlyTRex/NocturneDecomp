// Name: core_hero.cpp_CHero_kill_FUN_004d43e0
// Address: 004d43e0
// Address Range: [[004d43e0, 004d4405]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_kill_FUN_004d43e0(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_kill_FUN_004d43e0(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  *(uint *)(this_ptr + 0xcdcc) = 0;
  core_charactr_cpp_CCharacter_kill_FUN_0042c0d0
            ((CCharacter *)this_ptr,damage_type,damage_direction,impact_force);
  return;
}
