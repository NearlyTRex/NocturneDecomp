// Name: core_twigzomb.cpp_CTwigZombie_processDamage_FUN_005a2e90
// Address: 005a2e90
// Address Range: [[005a2e90, 005a2ea9]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_processDamage_FUN_005a2e90(CTwigZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_processDamage_FUN_005a2e90(CTwigZombie *this_ptr,SDamageInfo *damage_info)

{
  damage_info->gore_multiplier = 0.0;
  core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(&this_ptr->base,damage_info);
  return;
}
