// Name: core_bugs.cpp_CBugs_processDamage_FUN_00425940
// Address: 00425940
// Address Range: [[00425940, 00425960]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_00425940(CBugs *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_processDamage_FUN_00425940(CBugs *this_ptr,SDamageInfo *damage_info)

{
  if (*(int *)&(this_ptr->base).base.field_0x27b0 != 0) {
    return;
  }
  *(uint *)(damage_info + 4) = 0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
