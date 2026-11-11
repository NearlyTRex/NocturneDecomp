// Name: core_bugs.cpp_CBugs_processDamage_FUN_00421ad0
// Address: 00421ad0
// Address Range: [[00421ad0, 00421af0]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_00421ad0(CBugs *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_00421ad0(CBugs *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
