// Name: core_baron.cpp_CBaron_processDamage_FUN_00410880
// Address: 00410880
// Address Range: [[00410880, 0041089f]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00410880(CBaron *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00410880(CBaron *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  damage_info->damage_amount = 0.0;
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
