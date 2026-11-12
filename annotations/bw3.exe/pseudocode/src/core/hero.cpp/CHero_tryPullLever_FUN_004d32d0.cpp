// Name: core_hero.cpp_CHero_tryPullLever_FUN_004d32d0
// Address: 004d32d0
// Address Range: [[004d32d0, 004d3454]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryPullLever_FUN_004d32d0(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryPullLever_FUN_004d32d0(CHero *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1040 [1014];
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CLocation *local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  local_24 = 1e+30;
  local_28 = &(this_ptr->base).base.location;
  local_14 = 0;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_14),
                        g_CLeverClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) {
      core_actor_cpp_FUN_00408bf0(this_ptr,&pCVar1->location);
      local_40 = local_34;
      (&stack0xffffffc4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if ((((ABS(local_3c) <= (float)_DAT_005c4d2d) && (0.0 <= (double)local_38)) &&
          ((double)local_38 <= _DAT_005c4d35)) && (ABS(local_40) <= (float)_DAT_005c4d35)) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffffc0);
        *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffac + (uint)bVar3 * -8);
        *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_20 = ABS(local_48);
        if ((int)local_20 < 0x3f860a93) {
          iVar2 = core_lever_cpp_FUN_004e0a30(pCVar1,local_28);
          if ((iVar2 != 0) && (local_1c = -local_20, local_1c <= local_24)) {
            this_ptr->hero_action = 8;
            this_ptr->hero_action_range = 0.0;
            this_ptr->hero_action_actor = pCVar1;
            this_ptr->hero_action_target = pCVar1;
            local_24 = local_1c;
          }
        }
      }
    }
    local_14 = local_14 + 4;
  }
  return (uint)(this_ptr->hero_action == 8);
}
