// Name: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0
// Address: 004b9bd0
// Address Range: [[004b9bd0, 004b9be2]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004b9bd0(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

{
  damage_info->damage_type = DAMAGE_TYPE_IMMUNE;
  damage_info->damage_amount = 0.0;
  return;
}
