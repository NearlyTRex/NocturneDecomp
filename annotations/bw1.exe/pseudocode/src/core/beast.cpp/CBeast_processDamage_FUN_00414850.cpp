// Name: core_beast.cpp_CBeast_processDamage_FUN_00414850
// Address: 00414850
// Address Range: [[00414850, 00414869]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00414850(CBeast *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_processDamage_FUN_00414850(CBeast *this_ptr,SDamageInfo *damage_info)

{
  *(uint *)(damage_info + 4) = 0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
