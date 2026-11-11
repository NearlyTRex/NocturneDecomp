// Name: core_union.cpp_CUnion_processDamage_FUN_005a59f0
// Address: 005a59f0
// Address Range: [[005a59f0, 005a5a30]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processDamage_FUN_005a59f0(CUnion *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_union_cpp_CUnion_processDamage_FUN_005a59f0(CUnion *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (damage_info->wielder,g_CUnionClassInfo.name_hash);
  if ((iVar1 == 0) && (damage_info->wielder != *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    core_basicene_cpp_CBasicEnemy_processDamage_FUN_0059f800((CBasicEnemy *)this_ptr,damage_info);
    return;
  }
  return;
}
