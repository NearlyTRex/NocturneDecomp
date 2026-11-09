// Name: core_succubus.cpp_CSuccubus_processDamage_FUN_00592c90
// Address: 00592c90
// Address Range: [[00592c90, 00592ca9]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00592c90(CSuccubus *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_00592c90(CSuccubus *this_ptr,SDamageInfo *damage_info)

{
  *(uint *)(damage_info + 4) = 0;
  core_enemy_cpp_FUN_004a0f00(this_ptr,damage_info);
  return;
}
