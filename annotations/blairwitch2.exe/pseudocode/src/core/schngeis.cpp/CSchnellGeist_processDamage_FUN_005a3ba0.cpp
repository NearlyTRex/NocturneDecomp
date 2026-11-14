// Name: core_schngeis.cpp_CSchnellGeist_processDamage_FUN_005a3ba0
// Address: 005a3ba0
// Address Range: [[005a3ba0, 005a3be7]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processDamage_FUN_005a3ba0(CSchnellGeist *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_schngeis_cpp_CSchnellGeist_processDamage_FUN_005a3ba0(CSchnellGeist *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.base.hit_points - damage_info->damage_amount <= (float)_DAT_005f01fe) {
    (this_ptr->base).base.base.hit_points = 10.0;
    core_event_cpp_FUN_00490f80(0x01C38BC0,"schnell_death",1);
    return;
  }
  core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(&this_ptr->base,damage_info);
  return;
}
