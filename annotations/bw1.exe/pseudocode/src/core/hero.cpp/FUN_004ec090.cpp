// Name: core_hero.cpp_FUN_004ec090
// Address: 004ec090
// Address Range: [[004ec090, 004ec1ac]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004ec090(CDemonActor *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004ec090(CDemonActor *param_1,char *param_2)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  uint local_20;
  int local_1c;
  int local_18;
  
  local_20 = 0x7149f2ca;
  local_1c = 0;
  for (local_18 = 0; local_18 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_18 = local_18 + 1) {
    actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_1c);
    if ((((ABS(*(float *)&actor_ptr->field_0x20 - *(float *)&param_1->field_0x20) <=
           (float)_DAT_005e492d) &&
         (ABS(*(float *)&actor_ptr->field_0x24 - *(float *)&param_1->field_0x24) <=
          (float)_DAT_005e492d)) &&
        (ABS(*(float *)&actor_ptr->field_0x28 - *(float *)&param_1->field_0x28) <=
         (float)_DAT_005e492d)) && (actor_ptr != param_1)) {
      iVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x84))(actor_ptr,param_1);
        if (iVar1 != 0) {
          iVar2 = core_actor_cpp_FUN_0040c550(actor_ptr,param_2);
          if (iVar2 != 0) {
            iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x154))
                              (param_1,actor_ptr,iVar1,&local_20);
            if (iVar1 != 0) {
              *(uint *)&param_1[0x17c].field_0xc0 = 4;
              *(CDemonActor **)&param_1[0x17c].field_0xc4 = actor_ptr;
              *(CDemonActor **)&param_1[0x17c].field_0xc8 = actor_ptr;
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return *(int *)&param_1[0x17c].field_0xc0 == 4;
}
