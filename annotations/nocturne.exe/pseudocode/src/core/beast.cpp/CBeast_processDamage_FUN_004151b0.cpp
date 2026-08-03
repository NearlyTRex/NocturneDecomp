// Name: core_beast.cpp_CBeast_processDamage_FUN_004151b0
// Address: 004151b0
// Address Range: [[004151b0, 004151c9]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_processDamage_FUN_004151b0(CBeast *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_processDamage_FUN_004151b0(CBeast *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
