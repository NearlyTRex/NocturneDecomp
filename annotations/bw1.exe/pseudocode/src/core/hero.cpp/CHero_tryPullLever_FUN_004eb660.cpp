// Name: core_hero.cpp_CHero_tryPullLever_FUN_004eb660
// Address: 004eb660
// Address Range: [[004eb660, 004eb7e4]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryPullLever_FUN_004eb660(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryPullLever_FUN_004eb660(CHero *this_ptr)

{
  CLever *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1040 [1014];
  CVector3f local_58;
  float local_4c;
  float local_48 [2];
  CVector3f local_40;
  CVector3f local_34;
  CVector3f *local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  local_24 = 1e+30;
  local_28 = &(this_ptr->base).base.location.position;
  local_14 = 0;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    this_ptr_00 = (CLever *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_14),
                             g_CLeverClassInfo.name_hash);
    if (this_ptr_00 != (CLever *)0x0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&(this_ptr_00->base).location.position,&local_34);
      local_40.x = local_34.x;
      *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if ((((ABS(local_40.y) <= (float)_DAT_005e485d) && (0.0 <= (double)local_40.z)) &&
          ((double)local_40.z <= _DAT_005e4865)) && (ABS(local_40.x) <= (float)_DAT_005e4865)) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_40,&local_58);
        local_4c = local_58.x;
        local_48[(uint)bVar2 * -2] = *(float *)((int)&local_58 + (uint)bVar2 * -8 + 4);
        local_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             *(float *)((int)&local_58 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
        local_20 = ABS(local_48[0]);
        if ((int)local_20 < 0x3f860a93) {
          iVar1 = core_lever_cpp_CLever_isAccessibleFrom_FUN_004ff970(this_ptr_00,local_28);
          if ((iVar1 != 0) && (local_1c = -local_20, local_1c <= local_24)) {
            this_ptr->hero_action = 7;
            this_ptr->hero_action_range = 0.0;
            this_ptr->hero_action_actor = (CDemonActor *)this_ptr_00;
            this_ptr->hero_action_target = (CDemonActor *)this_ptr_00;
            local_24 = local_1c;
          }
        }
      }
    }
    local_14 = local_14 + 4;
  }
  return (uint)(this_ptr->hero_action == 7);
}
