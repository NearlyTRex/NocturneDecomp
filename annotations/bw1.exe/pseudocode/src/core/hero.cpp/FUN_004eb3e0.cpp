// Name: core_hero.cpp_FUN_004eb3e0
// Address: 004eb3e0
// Address Range: [[004eb3e0, 004eb5ad]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004eb3e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004eb3e0(CDemonActor *param_1)

{
  CDoor *this_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1015];
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  uint local_2c;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  local_20 = 4.0;
  local_18 = 0;
  for (local_14 = 0; local_14 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_14 = local_14 + 1) {
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600
                                  (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_18),
                                   g_CDoorClassInfo.name_hash);
    if ((((this_ptr != (CDoor *)0x0) &&
         (ABS(*(float *)&this_ptr->field_0x20 - *(float *)&param_1->field_0x20) <=
          (float)_DAT_005e4845)) &&
        (ABS(*(float *)&this_ptr->field_0x24 - *(float *)&param_1->field_0x24) <=
         (float)_DAT_005e4845)) &&
       ((ABS(*(float *)&this_ptr->field_0x28 - *(float *)&param_1->field_0x28) <=
         (float)_DAT_005e4845 && (*(int *)&this_ptr->field_0x2e0 == 0)))) {
      core_actor_cpp_FUN_00408bb0(param_1,&this_ptr->field_0x9bc);
      local_44 = local_50;
      (&stack0xffffffc0)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (0.0 < local_3c) {
        core_vecdir_cpp_FUN_005a7520(&stack0xffffffbc);
        local_38 = local_2c;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
        *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        if ((ABS(local_34) <= _DAT_005e484d) && (ABS(local_40) <= (float)_DAT_005e4855)) {
          local_40 = 0.0;
          local_1c = SQRT(local_3c * local_3c + local_44 * local_44);
          if (local_1c < local_20) {
            iVar1 = core_door_cpp_CDoor_getMoveType_FUN_00478b40(this_ptr,param_1);
            if ((iVar1 != 0) && (*(int *)&this_ptr->field_0x9d8 != 0)) {
              local_20 = local_1c;
              *(uint *)&param_1[0x17c].field_0xc0 = 3;
              *(uint *)&param_1[0x17c].field_0xd0 = 0;
              *(CDoor **)&param_1[0x17c].field_0xc4 = this_ptr;
              *(CDoor **)&param_1[0x17c].field_0xc8 = this_ptr;
              *(int *)&param_1[0x17c].field_0xcc = iVar1;
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  return *(int *)&param_1[0x17c].field_0xc0 == 3;
}
