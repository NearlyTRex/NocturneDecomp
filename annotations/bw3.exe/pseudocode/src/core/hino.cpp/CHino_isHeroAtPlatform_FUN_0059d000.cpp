// Name: core_hino.cpp_CHino_isHeroAtPlatform_FUN_0059d000
// Address: 0059d000
// Address Range: [[0059d000, 0059d110]]
// Convention: __cdecl
// Signature: int __cdecl core_hino_cpp_CHino_isHeroAtPlatform_FUN_0059d000(CHino *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_hino_cpp_CHino_isHeroAtPlatform_FUN_0059d000(CHino *this_ptr)

{
  CHero *pCVar1;
  char *pcVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_102c [1016];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CDemonActor *local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  iVar5 = 0;
  local_18 = 100.0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar5),
                        g_CWayPointClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      pCVar1 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      local_44 = (pCVar1->base).base.location.position.x - (pCVar3->location).position.x;
      local_40 = (pCVar1->base).base.location.position.y - (pCVar3->location).position.y;
      local_3c = (pCVar1->base).base.location.position.z - (pCVar3->location).position.z;
      local_2c = local_44;
      (&stack0xffffffd8)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (&stack0xffffffc8 != &stack0xffffffd4) {
        local_38 = local_2c;
        local_34 = local_28;
        local_30 = local_24;
      }
      local_20 = local_30 * local_30 + local_38 * local_38 + local_34 * local_34;
      local_14 = (float)(((int)local_20 >> 1) + g_FastSqrtMagic);
      if (local_14 < local_18) {
        local_1c = pCVar3;
        local_18 = local_14;
      }
    }
    iVar5 = iVar5 + 4;
  }
  pcVar2 = strstr(local_1c->actor_name,"Platform");
  return (uint)(pcVar2 != (char *)0x0);
}
