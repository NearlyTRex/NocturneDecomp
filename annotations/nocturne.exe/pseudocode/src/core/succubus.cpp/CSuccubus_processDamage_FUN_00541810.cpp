// Name: core_succubus.cpp_CSuccubus_processDamage_FUN_00541810
// Address: 00541810
// Address Range: [[00541810, 00541829]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00541810(CSuccubus *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00541810(CSuccubus *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
