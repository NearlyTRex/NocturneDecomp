// Name: core_bugs.cpp_CBugs_processDamage_FUN_004219d0
// Address: 004219d0
// Address Range: [[004219d0, 004219e9]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_004219d0(CBugs *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_004219d0(CBugs *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
