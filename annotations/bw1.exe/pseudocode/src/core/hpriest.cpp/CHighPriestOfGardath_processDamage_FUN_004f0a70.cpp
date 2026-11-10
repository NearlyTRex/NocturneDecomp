// Name: core_hpriest.cpp_CHighPriestOfGardath_processDamage_FUN_004f0a70
// Address: 004f0a70
// Address Range: [[004f0a70, 004f0a8d]]
// Convention: __cdecl
// Signature: void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004f0a70(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hpriest_cpp_CHighPriestOfGardath_processDamage_FUN_004f0a70(CHighPriestOfGardath *this_ptr,SDamageInfo *damage_info)

{
  if (*(int *)&(this_ptr->base).base.field_0x27b0 != 0) {
    return;
  }
  *(uint *)(damage_info + 0x30) = 100;
  *(uint *)(damage_info + 4) = 0;
  return;
}
