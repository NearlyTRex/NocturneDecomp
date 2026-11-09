// Name: core_trigger.cpp_FUN_005779d0
// Address: 005779d0
// Address Range: [[005779d0, 00577a06] [00577a7b, 00577ae6] [00577fb5, 00578044]]
// Convention: unknown
// Signature: void core_trigger_cpp_FUN_005779d0(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_trigger_cpp_FUN_005779d0(CDemonActor *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  byte bVar12;
  float afStackY_1070 [987];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_34;
  int iStack_24;
  char *pcStack_20;
  char *pcStack_1c;
  float *pfStack_18;
  int iStack_14;
  
  bVar12 = 0;
  *(uint *)&param_1[1].field_0x1a8 = 0;
  iStack_24 = 0;
  switch(*(uint *)&param_1[1].field_0x1c) {
  case 0:
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&param_1->field_0x20,*(uint *)(param_1 + 1));
    if (iVar7 != 0) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
      iVar7 = 0;
      if (0 < _DAT_01cedee0) {
        iVar11 = 0;
        do {
          iVar8 = core_trigger_cpp_FUN_00578800(param_1,*(uint *)(iVar11 + 0x1cedee4));
          if (iVar8 != 0) {
            uVar4 = *(uint *)(iVar11 + 0x1cedee4);
            goto LAB_00577a75;
          }
          iVar7 = iVar7 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar7 < _DAT_01cedee0);
      }
    }
    break;
  case 1:
    if (*(int *)&param_1[1].field_0x214 == 0) {
      pCVar5 = core_mission_cpp_FUN_004fc740(0x01D182F0,&param_1[1].field_0x20);
      *(CDemonActor **)&param_1[1].field_0x214 = pCVar5;
    }
    iVar7 = *(int *)&param_1[1].field_0x214;
    if ((((iVar7 != 0) && (*(int *)(iVar7 + 0x70) == 1)) &&
        (fVar1 = *(float *)&param_1->field_0x20 - *(float *)(iVar7 + 0x20),
        fVar3 = *(float *)&param_1->field_0x24 - *(float *)(iVar7 + 0x24),
        fVar2 = *(float *)&param_1->field_0x28 - *(float *)(iVar7 + 0x28),
        fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)(param_1 + 1) * *(float *)(param_1 + 1))) &&
       (iVar7 = core_trigger_cpp_FUN_00578800(param_1,iVar7), iVar7 != 0)) {
      uVar4 = *(uint *)&param_1[1].field_0x214;
LAB_00577a75:
      iStack_24 = 1;
      *(uint *)&param_1[1].field_0x1a8 = uVar4;
    }
    break;
  case 2:
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&param_1->field_0x20,*(uint *)(param_1 + 1));
    if (iVar7 != 0) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
      puVar9 = (uint *)&stack0xffffff48;
      puVar10 = &stack0xffffff30;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
      }
      fStack_64 = fStack_d0 + fStack_c4;
      fStack_60 = fStack_cc + fStack_c0;
      fStack_5c = fStack_c8 + fStack_bc;
      fStack_88 = fStack_d0 + fStack_c4;
      afStack_84[(uint)bVar12 * -2] = afStack_84[(uint)bVar12 * -2 + 9];
      afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
      afStack_84[2] = fStack_88 * _DAT_005ecd82;
      afStack_84[3] = afStack_84[0] * _DAT_005ecd82;
      fStack_74 = afStack_84[1] * _DAT_005ecd82;
      afStack_70[0] = fStack_88 * _DAT_005ecd82;
      afStack_84[(uint)bVar12 * -2 + 6] = afStack_84[(uint)bVar12 * -2 + 3];
      afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      core_actor_cpp_FUN_00408d70(param_1,afStack_84 + 5);
      fStack_4c = fStack_58;
      afStack_84[(uint)bVar12 * -2 + 0xf] = afStack_84[(uint)bVar12 * -2 + 0xc];
      afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
           afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
      if (&stack0xffffff60 != afStack_84 + 0xe) {
        fStack_a0 = fStack_4c;
        fStack_9c = fStack_48;
        fStack_98 = fStack_44;
      }
      iStack_94 = (int)ROUND(fStack_a0 * _DAT_005fd200);
      iStack_90 = (int)ROUND(fStack_9c * _DAT_005fd200);
      iStack_8c = (int)ROUND(fStack_98 * _DAT_005fd200);
      iStack_14 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                            (g_CDemonSetPtr,(CVector3i *)&iStack_94,(CVector3i *)0x0);
      if ((*(float *)&param_1[1].field_0xc4 * (float)_DAT_005ecd8a <= (float)iStack_14) &&
         ((float)iStack_14 <= *(float *)&param_1[1].field_0xc8 * (float)_DAT_005ecd8a)) {
        iStack_24 = 1;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    iStack_24 = *(int *)&param_1[1].field_0x198;
    *(uint *)&param_1[1].field_0x198 = 0;
    break;
  case 6:
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&param_1->field_0x20,*(uint *)(param_1 + 1));
    if (iVar7 != 0) {
      fStack_34 = *(float *)&param_1[1].field_0x10 * *(float *)&param_1[1].field_0x10 +
                  *(float *)&param_1[1].field_0xc * *(float *)&param_1[1].field_0xc +
                  *(float *)&param_1[1].field_0x8 * *(float *)&param_1[1].field_0x8;
      iStack_24 = core_fire_cpp_FUN_0049e3e0
                            (0x01C3DEB4,(CVector3f *)&param_1->field_0x20,
                             (float)(((int)fStack_34 >> 1) + _DAT_01caf5b4),(CVector3f *)0x0,
                             (float *)0x0);
    }
    break;
  case 7:
    param_2 = *(float *)&param_1[1].field_0x218 - param_2;
    *(float *)&param_1[1].field_0x218 = param_2;
    if (param_2 < 0.0) {
      *(uint *)&param_1[1].field_0x218 = 0;
    }
    if (0.0 < *(float *)&param_1[1].field_0x1a0) {
      iStack_24 = 0;
    }
    else {
      iStack_24 = 1;
    }
    break;
  case 8:
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&param_1->field_0x20,*(uint *)(param_1 + 1));
    if (iVar7 != 0) {
      iVar11 = 0;
      for (iVar7 = 0; iVar7 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar7 = iVar7 + 1) {
        iVar8 = *(int *)(&g_CDemonSetPtr->field_0x14d168 + iVar11);
        iVar6 = (**(code **)(*(int *)(iVar8 + 0x2b0) + 100))(iVar8);
        if ((iVar6 != 0) && (iVar6 = core_trigger_cpp_FUN_00578800(param_1,iVar8), iVar6 != 0)) {
          iStack_24 = 1;
          *(int *)&param_1[1].field_0x1a8 = iVar8;
          break;
        }
        iVar11 = iVar11 + 4;
      }
    }
    break;
  case 9:
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100
                      (&param_1->field_0x20,*(uint *)(param_1 + 1));
    if (iVar7 != 0) {
      pcStack_1c = &param_1[1].field_0x20;
      iVar11 = 0;
      pcStack_20 = &param_1[1].field_0x70;
      pfStack_18 = (float *)&param_1->field_0x20;
      for (iVar7 = 0; iVar7 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar7 = iVar7 + 1) {
        pCVar5 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + iVar11);
        fVar1 = *(float *)&pCVar5->field_0x20 - *pfStack_18;
        fVar2 = *(float *)&pCVar5->field_0x24 - pfStack_18[1];
        fVar3 = *(float *)&pCVar5->field_0x28 - pfStack_18[2];
        if ((((fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 <=
               *(float *)(param_1 + 1) * *(float *)(param_1 + 1)) && (pCVar5 != param_1)) &&
            (iVar8 = core_actor_cpp_FUN_0040c840(pCVar5,pcStack_20), iVar8 != 0)) &&
           ((iVar8 = shape_edittool_cpp_wildcardStringMatch_FUN_00485840
                               (pcStack_1c,(char *)pCVar5,0), iVar8 != 0 &&
            (iVar8 = core_trigger_cpp_FUN_00578800(param_1,pCVar5), iVar8 != 0)))) {
          iStack_24 = 1;
          *(CDemonActor **)&param_1[1].field_0x1a8 = pCVar5;
          break;
        }
        iVar11 = iVar11 + 4;
      }
    }
  }
  switch(*(uint *)&param_1[1].field_0x4) {
  case 0:
  case 1:
    if (iStack_24 == 0) {
      if (*(int *)&param_1[1].field_0x4 == 0) {
        *(uint *)&param_1[1].field_0x14 = 0;
      }
      goto switchD_00577a89_default;
    }
    break;
  case 2:
    if ((*(int *)&param_1[1].field_0x194 != 0) || (iStack_24 == 0)) goto LAB_00577fea;
    break;
  case 3:
    if ((*(int *)&param_1[1].field_0x194 == 1) && (iStack_24 == 0)) {
      *(uint *)&param_1[1].field_0x14 = 1;
      goto switchD_00577a89_default;
    }
LAB_00577fea:
    *(uint *)&param_1[1].field_0x14 = 0;
  default:
    goto switchD_00577a89_default;
  }
  *(uint *)&param_1[1].field_0x14 = 1;
switchD_00577a89_default:
  *(int *)&param_1[1].field_0x194 = iStack_24;
  if (*(int *)&param_1[1].field_0x14 == 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,&param_1[1].field_0x130);
    *(uint *)&param_1[1].field_0x1a8 = 0;
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,&param_1[1].field_0xcc);
  return;
}
