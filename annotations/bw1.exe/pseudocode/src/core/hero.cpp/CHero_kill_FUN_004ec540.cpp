// Name: core_hero.cpp_CHero_kill_FUN_004ec540
// Address: 004ec540
// Address Range: [[004ec540, 004ec565]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_kill_FUN_004ec540(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_kill_FUN_004ec540(CHero *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  *(uint *)(this_ptr + 0xc1d0) = 0;
  core_charactr_cpp_CCharacter_kill_FUN_0042d5f0
            ((CCharacter *)this_ptr,damage_type,damage_direction,impact_force);
  return;
}
