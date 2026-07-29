// Name: core_baron.cpp_CBaron_processDamage_FUN_004112f0
// Address: 004112f0
// Address Range: [[004112f0, 0041130f]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_processDamage_FUN_004112f0(CBaron *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_processDamage_FUN_004112f0(CBaron *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)this_ptr,damage_info);
  return;
}
