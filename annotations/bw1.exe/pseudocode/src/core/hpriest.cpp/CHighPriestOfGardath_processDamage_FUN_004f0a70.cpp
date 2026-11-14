// Name: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004f0a70
// Address: 004f0a70
// Address Range: [[004f0a70, 004f0a8d]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004f0a70(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004f0a70(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  damage_info->damage_type = DAMAGE_TYPE_ATTACK_GENERIC;
  damage_info->damage_amount = 0.0;
  return;
}
