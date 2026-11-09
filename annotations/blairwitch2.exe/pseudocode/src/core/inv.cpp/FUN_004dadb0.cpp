// Name: core_inv.cpp_FUN_004dadb0
// Address: 004dadb0
// Address Range: [[004dadb0, 004db759]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004dadb0(int param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_inv_cpp_FUN_004dadb0(int param_1,CDemonActor *param_2,int param_3)

{
  char cVar1;
  CConsole *pCVar2;
  CDemonMission *pCVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  CDemonActor *actor;
  int iVar8;
  int iVar9;
  byte *str1;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
  char acStack_32c [256];
  char acStack_22c [256];
  char acStack_12c [256];
  int iStack_2c;
  char *pcStack_28;
  uint local_24;
  char *pcStack_20;
  CAmmo *pCStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar15 = 0;
  local_24 = *(uint *)(param_1 + 0x468);
  if (99 < *(int *)(param_1 + 0x10)) {
    return 0;
  }
  iVar5 = (**(code **)(*(int *)&param_2->field_0x2b0 + 0x9c))(param_2);
  if (iVar5 != *(int *)(param_1 + 4)) {
    (**(code **)(*(int *)&param_2->field_0x2b0 + 0x94))(param_2,0);
    if (*(int *)(param_1 + 4) != 0) {
      (**(code **)(*(int *)&param_2->field_0x2b0 + 0x90))(param_2,*(int *)(param_1 + 4));
    }
  }
  pcVar13 = acStack_32c;
  pcVar14 = acStack_32c;
  pcVar10 = acStack_32c;
  if (((*(int *)(param_1 + 4) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) && (param_3 != 0)) &&
     (*(int *)&g_CGamePtr->field_0x244 == 0)) {
    pcStack_28 = (char *)core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_2);
    core_inv_cpp_getItemDescription_FUN_004d9f80(param_2);
    iVar5 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CAmmoClassInfo.name_hash);
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You've found : ");
    pcVar11 = acStack_12c;
    do {
      cVar1 = *pcVar6;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (iVar5 != 0) {
      FUN_005b7790(acStack_22c,&DAT_005db537,*(uint *)(iVar5 + 0x470));
      pcVar11 = acStack_22c;
      iVar5 = -1;
      pcVar6 = acStack_12c;
      do {
        pcVar12 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar6 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar5 = -1;
    pcVar11 = acStack_12c;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    pcVar11 = pcStack_28;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    acStack_32c[0] = '\0';
    core_actor_cpp_FUN_0040c840(param_2,"CHealthItem");
    iVar5 = core_actor_cpp_FUN_0040c840(param_2,"CGasMask");
    if (iVar5 != 0) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Press ");
      do {
        cVar1 = *pcVar11;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar11 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960
                                  (*(uint *)&g_CGamePtr->field_0x98);
      iVar5 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar6 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(" and ");
      iVar5 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar6 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar11 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960
                                  (*(uint *)&g_CGamePtr->field_0x9c);
      iVar5 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar6 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          (" to cycle through your inventory.  Press ");
      iVar5 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar6 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar11 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960
                                  (*(uint *)&g_CGamePtr->field_0x4c);
      iVar5 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar6 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          (" to put on and off the mask.");
      iVar5 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar6 = pcVar13;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    iVar5 = core_actor_cpp_FUN_0040c840(param_2,"CKeyActor");
    if (iVar5 != 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          ("With your guns put away, press ");
      do {
        cVar1 = *pcVar13;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar13 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960
                                  (*(uint *)&g_CGamePtr->field_0x48);
      iVar5 = -1;
      pcVar14 = acStack_32c;
      do {
        pcVar11 = pcVar14;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar14 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          (" to open a previously locked door.");
      iVar5 = -1;
      pcVar14 = acStack_32c;
      do {
        pcVar11 = pcVar14;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar14 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    core_actor_cpp_FUN_0040c840(param_2,"CBoxActor");
    core_actor_cpp_FUN_0040c840(param_2,"CAmmo");
    core_actor_cpp_FUN_0040c840(param_2,"CWeapon");
    core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,acStack_12c,10.0);
    pcVar14 = (char *)(param_1 + 0x354);
    do {
      cVar1 = *pcVar10;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    iStack_14 = engine_font_cpp_FUN_004aaf00(_DAT_01511cc4,(char *)(param_1 + 0x354));
    *(float *)(param_1 + 0x34c) = (float)iStack_14 * (float)_DAT_005db702;
  }
  pCStack_1c = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (param_2,g_CAmmoClassInfo.name_hash);
  if (pCStack_1c != (CAmmo *)0x0) {
    pcVar14 = &pCStack_1c->field_0x430;
    iVar9 = 0;
    core_ammo_cpp_FUN_0040e240(pCStack_1c,pcVar14);
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        pcStack_20 = pcVar14;
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(iVar5 + 0x14),g_CAmmoClassInfo.name_hash);
        if (((*(int *)(iVar5 + 0x46c) == *(int *)(param_1 + 0x468)) && (iVar7 != 0)) &&
           ((iVar8 = _strcmp(pcStack_20,(char *)(iVar7 + 0x430)),
            pCVar2 = g_CConsolePtr, iVar8 == 0 &&
            (*(int *)(iVar7 + 0x474) == *(int *)&pCStack_1c->field_0x474)))) {
          *(int *)(iVar7 + 0x470) = *(int *)(iVar7 + 0x470) + *(int *)&pCStack_1c->field_0x470;
          engine_console_cpp_FUN_00436710(pCVar2,"Found existing ammo... adding count");
          core_mission_cpp_FUN_004fc7b0(0x01D182F0,param_2,1);
          return 1;
        }
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + 4;
        pcVar14 = pcStack_20;
      } while (iVar9 < *(int *)(param_1 + 0x10));
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      str1 = &pCStack_1c->field_0x430;
      iVar9 = param_1;
      do {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(iVar9 + 0x14),g_CWeaponClassInfo.name_hash);
        if (iVar7 != 0) {
          pcVar14 = (char *)core_actor_cpp_FUN_00408a50(iVar7);
          iVar7 = _stricmp(str1,pcVar14);
          if (iVar7 == 0) break;
        }
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar5 < *(int *)(param_1 + 0x10));
    }
    iVar5 = _strcmp(&pCStack_1c->field_0x430,"CDynamite");
    if (iVar5 == 0) {
      actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c5a0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,actor);
      (**(code **)(*(int *)&actor->field_0x2b0 + 8))(actor);
      *(uint *)&actor[2].field_0x15c = *(uint *)&pCStack_1c->field_0x470;
      (**(code **)(*(int *)&actor->field_0x2b0 + 0x90))(actor,*(uint *)(param_1 + 4));
      core_actor_cpp_FUN_00408730(param_2);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_FUN_004dadb0(param_1,actor,1,0);
      return 1;
    }
  }
  iStack_2c = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CHealthItemClassInfo.name_hash);
  if ((iStack_2c != 0) && (iVar9 = 0, iVar5 = param_1, 0 < *(int *)(param_1 + 0x10))) {
    do {
      iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(iVar5 + 0x14),g_CHealthItemClassInfo.name_hash);
      pCVar3 = 0x01D182F0;
      if ((*(int *)(iVar5 + 0x46c) == *(int *)(param_1 + 0x468)) && (iVar7 != 0)) {
        *(int *)(iVar7 + 0x430) = *(int *)(iVar7 + 0x430) + *(int *)(iStack_2c + 0x430);
        core_mission_cpp_FUN_004fc7b0(pCVar3,param_2,1);
        return 1;
      }
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar9 < *(int *)(param_1 + 0x10));
  }
  iStack_18 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CWeaponClassInfo.name_hash);
  if (iStack_18 != 0) {
    iVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iStack_18,g_CMeleeClassInfo.name_hash);
    if (iVar5 != 0) {
      *(CDemonActor **)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
      *(uint *)(param_1 + 0x46c + *(int *)(param_1 + 0x10) * 4) = local_24;
      pCVar3 = 0x01D182F0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      core_mission_cpp_FUN_004fc7b0(pCVar3,param_2,0);
      (**(code **)(*(int *)&param_2->field_0x2b0 + 0x74))(param_2,param_1);
      return 1;
    }
    iVar9 = 0;
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(iVar5 + 0x14),g_CWeaponClassInfo.name_hash);
        if ((*(int *)(iVar5 + 0x46c) == *(int *)(param_1 + 0x468)) && (iVar7 != 0)) {
          pcVar14 = (char *)core_actor_cpp_FUN_00408a50(iVar7);
          pcVar13 = (char *)core_actor_cpp_FUN_00408a50(iStack_18);
          iVar8 = _strcmp(pcVar13,pcVar14);
          uVar4 = g_CTommyGunClassInfo.name_hash;
          if ((iVar8 == 0) && (*(int *)(iVar7 + 0x6c8) == *(int *)(iStack_18 + 0x6c8))) {
            *(int *)(iVar7 + 0x6c4) = *(int *)(iVar7 + 0x6c4) + *(int *)(iStack_18 + 0x6c4);
            iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar7,uVar4);
            if ((iVar5 != 0) && (200 < *(int *)(iVar5 + 0x6c4))) {
              *(uint *)(iVar5 + 0x6c4) = 200;
            }
            engine_console_cpp_FUN_00436710(g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_004fc7b0(0x01D182F0,param_2,1);
            return 1;
          }
        }
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar9 < *(int *)(param_1 + 0x10));
    }
  }
  *(CDemonActor **)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
  *(uint *)(param_1 + 0x46c + *(int *)(param_1 + 0x10) * 4) = *(uint *)(param_1 + 0x468)
  ;
  pCVar3 = 0x01D182F0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  core_mission_cpp_FUN_004fc270(pCVar3,param_2);
  (**(code **)(*(int *)&param_2->field_0x2b0 + 0x74))(param_2,param_1);
  if ((iStack_18 != 0) && (*(int *)(param_1 + 0x610 + *(int *)(param_1 + 0x468) * 4) == 0)) {
    core_inv_cpp_FUN_004db9d0(param_1,iStack_18,5,1);
  }
  return 1;
}
