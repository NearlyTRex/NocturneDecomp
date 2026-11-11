// Name: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004d4860
// Address: 004d4860
// Address Range: [[004d4860, 004d487d]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004d4860(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004d4860(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  damage_info->damage_type = DAMAGE_TYPE_ATTACK_GENERIC;
  damage_info->damage_amount = 0.0;
  return;
}
