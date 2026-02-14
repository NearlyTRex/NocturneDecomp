// Name: core_bugs.cpp_CBugs_processDamage_FUN_00425640
// Address: 00425640
// Address Range: [[00425640, 00425659]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_00425640(CBugs *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_00425640(CBugs *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
