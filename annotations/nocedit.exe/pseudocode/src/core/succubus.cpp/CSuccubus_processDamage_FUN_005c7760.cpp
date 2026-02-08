// Name: core_succubus.cpp_CSuccubus_processDamage_FUN_005c7760
// Address: 005c7760
// Address Range: [[005c7760, 005c7779]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_005c7760(CSuccubus *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_succubus_cpp_CSuccubus_processDamage_FUN_005c7760(CSuccubus *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
