// Name: core_baron.cpp_CBaron_processDamage_FUN_00413cd0
// Address: 00413cd0
// Address Range: [[00413cd0, 00413cef]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_processDamage_FUN_00413cd0(CBaron *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_baron_cpp_CBaron_processDamage_FUN_00413cd0(CBaron *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_amount = 0.0;
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
  return;
}
