// Name: FUN_00547b30
// Address: 00547b30
// Address Range: [[00547b30, 005480f6]]
// Convention: unknown
// Signature: void FUN_00547b30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547b30(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte local_b8 [24];
  byte local_a0 [24];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  byte auStack_64 [12];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float *local_20;
  float local_1c;
  int iStack_18;
  
  local_34 = 0;
  *(uint *)(param_1 + 0x2f4) = 0;
  switch(*(uint *)(param_1 + 0x16c)) {
  case 0:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (param_1 + 0x20,*(uint *)(param_1 + 0x150));
    if (iVar6 != 0) {
      iVar6 = 0;
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_a0);
      if (0 < _DAT_01cae0d4) {
        iVar8 = 0;
        do {
          iVar7 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0
                            (param_1,*(uint *)(iVar8 + 0x1cae0d8));
          if (iVar7 != 0) {
            uVar4 = *(uint *)(iVar8 + 0x1cae0d8);
            goto LAB_00547bbc;
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar6 < _DAT_01cae0d4);
      }
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x360) == 0) {
      uVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                        (0x01CC9450,param_1 + 0x170);
      *(uint *)(param_1 + 0x360) = uVar4;
    }
    iVar6 = *(int *)(param_1 + 0x360);
    if ((((iVar6 != 0) && (*(int *)(iVar6 + 0x70) == 1)) &&
        (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar6 + 0x20),
        fVar3 = *(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24),
        fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28),
        fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150))) &&
       (iVar6 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(param_1,iVar6), iVar6 != 0)) {
      uVar4 = *(uint *)(param_1 + 0x360);
LAB_00547bbc:
      local_34 = 1;
      *(uint *)(param_1 + 0x2f4) = uVar4;
    }
    break;
  case 2:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (param_1 + 0x20,*(uint *)(param_1 + 0x150));
    if (iVar6 != 0) {
      pfVar5 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_b8);
      fStack_88 = *pfVar5 + pfVar5[3];
      fStack_84 = pfVar5[1] + pfVar5[4];
      fStack_70 = fStack_88 * 0.5f;
      fStack_6c = fStack_84 * 0.5f;
      fStack_80 = pfVar5[2] + pfVar5[5];
      fStack_68 = fStack_80 * 0.5f;
      pfVar5 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  (param_1,auStack_64,&fStack_70);
      if (&fStack_58 != pfVar5) {
        fStack_58 = *pfVar5;
        fStack_54 = pfVar5[1];
        fStack_50 = pfVar5[2];
      }
      iStack_7c = (int)ROUND(fStack_58 * _DAT_005a3640);
      iStack_78 = (int)ROUND(fStack_54 * _DAT_005a3640);
      iStack_74 = (int)ROUND(fStack_50 * _DAT_005a3640);
      iStack_18 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
                            (0x01E57284,&iStack_7c,0);
      if ((*(float *)(param_1 + 0x214) * (float)65536 <= (float)iStack_18) &&
         ((float)iStack_18 <= *(float *)(param_1 + 0x218) * (float)65536)) {
        local_34 = 1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    local_34 = *(int *)(param_1 + 0x2e8);
    *(uint *)(param_1 + 0x2e8) = 0;
    break;
  case 6:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (param_1 + 0x20,*(uint *)(param_1 + 0x150));
    if (iVar6 != 0) {
      local_1c = *(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x160) +
                 *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x15c) +
                 *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158);
      local_34 = core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160
                           (0x01C08D04,param_1 + 0x20,((int)local_1c >> 1) + _DAT_01c7070c,0,0);
    }
    break;
  case 7:
    param_2 = *(float *)(param_1 + 0x364) - param_2;
    *(float *)(param_1 + 0x364) = param_2;
    if (param_2 < 0.0) {
      *(uint *)(param_1 + 0x364) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x2f0)) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
    break;
  case 8:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      (param_1 + 0x20,*(uint *)(param_1 + 0x150));
    if (iVar6 != 0) {
      local_28 = 0;
      for (iVar6 = 0; iVar6 < *(int *)(0x01E57284 + 0x14cd6c); iVar6 = iVar6 + 1) {
        iVar8 = *(int *)(0x01E57284 + local_28 + 0x14cd70);
        iVar7 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x54))(iVar8);
        if ((iVar7 != 0) &&
           (iVar7 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(param_1,iVar8), iVar7 != 0)
           ) {
          *(int *)(param_1 + 0x2f4) = iVar8;
          local_34 = 1;
          break;
        }
        local_28 = local_28 + 4;
      }
    }
    break;
  case 9:
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0
                      ((float *)(param_1 + 0x20),*(uint *)(param_1 + 0x150));
    if (iVar6 != 0) {
      local_30 = param_1 + 0x170;
      local_2c = param_1 + 0x1c0;
      local_24 = 0;
      local_20 = (float *)(param_1 + 0x20);
      for (iVar6 = 0; iVar6 < *(int *)(0x01E57284 + 0x14cd6c); iVar6 = iVar6 + 1) {
        iVar8 = *(int *)(0x01E57284 + local_24 + 0x14cd70);
        fVar1 = *(float *)(iVar8 + 0x20) - *local_20;
        fVar3 = *(float *)(iVar8 + 0x24) - local_20[1];
        fVar2 = *(float *)(iVar8 + 0x28) - local_20[2];
        if ((((fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
               *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150)) && (iVar8 != param_1)) &&
            (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar8,local_2c), iVar7 != 0)) &&
           ((iVar7 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(local_30,iVar8,0),
            iVar7 != 0 &&
            (iVar7 = core_trigger_cpp_CTrigger_containsActor_FUN_005487b0(param_1,iVar8), iVar7 != 0
            )))) {
          *(int *)(param_1 + 0x2f4) = iVar8;
          local_34 = 1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
  }
  switch(*(uint *)(param_1 + 0x154)) {
  case 0:
  case 1:
    if (local_34 == 0) {
      if (*(int *)(param_1 + 0x154) == 0) {
        *(uint *)(param_1 + 0x164) = 0;
      }
      goto switchD_00547bd4_default;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x2e4) != 0) || (local_34 == 0)) goto LAB_005480a6;
    break;
  case 3:
    if ((*(int *)(param_1 + 0x2e4) == 1) && (local_34 == 0)) {
      *(uint *)(param_1 + 0x164) = 1;
      goto switchD_00547bd4_default;
    }
LAB_005480a6:
    *(uint *)(param_1 + 0x164) = 0;
  default:
    goto switchD_00547bd4_default;
  }
  *(uint *)(param_1 + 0x164) = 1;
switchD_00547bd4_default:
  *(int *)(param_1 + 0x2e4) = local_34;
  if (*(int *)(param_1 + 0x164) == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x280);
    *(uint *)(param_1 + 0x2f4) = 0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x21c);
  return;
}
