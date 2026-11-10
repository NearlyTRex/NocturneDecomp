// Name: core_twigzomb.cpp_CTwigZombie_processDamage_FUN_005a2e90
// Address: 005a2e90
// Address Range: [[005a2e90, 005a2ea9]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_processDamage_FUN_005a2e90(CTwigZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_processDamage_FUN_005a2e90(CTwigZombie *this_ptr,SDamageInfo *damage_info)

{
  *(uint *)(damage_info + 8) = 0;
  core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800((CBasicEnemy *)this_ptr,damage_info);
  return;
}
