// Name: core_schngeis.cpp_CSchnellGeist_processDamage_FUN_005a3ba0
// Address: 005a3ba0
// Address Range: [[005a3ba0, 005a3be7]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processDamage_FUN_005a3ba0(CSchnellGeist *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_schngeis_cpp_CSchnellGeist_processDamage_FUN_005a3ba0(CSchnellGeist *this_ptr,SDamageInfo *damage_info)

{
  if ((this_ptr->base).base.base.hit_points - damage_info->damage_amount <= (float)10
     ) {
    (this_ptr->base).base.base.hit_points = 10.0;
    core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
              (g_CEventListPtr,"schnell_death",1);
    return;
  }
  core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(&this_ptr->base,damage_info);
  return;
}
