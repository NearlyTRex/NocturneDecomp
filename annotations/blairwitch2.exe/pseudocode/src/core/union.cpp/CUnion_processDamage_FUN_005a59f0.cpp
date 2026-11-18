// Name: core_union.cpp_CUnion_processDamage_FUN_005a59f0
// Address: 005a59f0
// Address Range: [[005a59f0, 005a5a30]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processDamage_FUN_005a59f0(CUnion *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_union_cpp_CUnion_processDamage_FUN_005a59f0(CUnion *this_ptr,SDamageInfo *damage_info)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (damage_info->wielder,g_CUnionClassInfo.name_hash);
  if ((pCVar1 == (CDemonActor *)0x0) &&
     ((CHero *)damage_info->wielder != g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4])) {
    core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800((CBasicEnemy *)this_ptr,damage_info);
    return;
  }
  return;
}
