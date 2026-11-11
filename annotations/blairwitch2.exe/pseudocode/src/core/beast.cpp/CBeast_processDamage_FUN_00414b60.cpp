// Name: core_beast.cpp_CBeast_processDamage_FUN_00414b60
// Address: 00414b60
// Address Range: [[00414b60, 00414b79]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00414b60(CBeast *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00414b60(CBeast *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
