// Name: core_beast.cpp_CBeast_processDamage_FUN_00418380
// Address: 00418380
// Address Range: [[00418380, 00418399]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00418380(CBeast *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00418380(CBeast *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
