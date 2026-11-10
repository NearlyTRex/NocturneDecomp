// Name: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004d4860
// Address: 004d4860
// Address Range: [[004d4860, 004d487d]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004d4860(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004d4860(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

{
  if (*(int *)&(this_ptr->base).base.field_0x281c != 0) {
    return;
  }
  *(uint *)(damage_info + 0x30) = 100;
  *(uint *)(damage_info + 4) = 0;
  return;
}
