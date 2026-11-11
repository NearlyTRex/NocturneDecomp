// Name: core_bugs.cpp_CBugs_processDamage_FUN_0041f910
// Address: 0041f910
// Address Range: [[0041f910, 0041f930]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_0041f910(CBugs *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_0041f910(CBugs *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
