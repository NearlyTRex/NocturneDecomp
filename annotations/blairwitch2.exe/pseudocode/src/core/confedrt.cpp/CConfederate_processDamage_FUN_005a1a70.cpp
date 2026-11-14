// Name: core_confedrt.cpp_CConfederate_processDamage_FUN_005a1a70
// Address: 005a1a70
// Address Range: [[005a1a70, 005a1aa2]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processDamage_FUN_005a1a70(CConfederate *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_processDamage_FUN_005a1a70(CConfederate *this_ptr,SDamageInfo *damage_info)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (damage_info->wielder,g_CConfederateClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    return;
  }
  core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800(&this_ptr->base,damage_info);
  return;
}
