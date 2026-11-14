// Name: core_baron.cpp_CBaron_processDamage_FUN_00410400
// Address: 00410400
// Address Range: [[00410400, 0041041f]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00410400(CBaron *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00410400(CBaron *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  damage_info->damage_amount = 0.0;
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
