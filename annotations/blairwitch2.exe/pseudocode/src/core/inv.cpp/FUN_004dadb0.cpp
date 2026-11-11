// Name: core_inv.cpp_FUN_004dadb0
// Address: 004dadb0
// Address Range: [[004dadb0, 004db759]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004dadb0(CDemonActor *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_inv_cpp_FUN_004dadb0(CDemonActor *param_1,CDemonActor *param_2,int param_3)

{
  char cVar1;
  CConsole *pCVar2;
  CDemonMission *pCVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
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
  int local_24;
  char *pcStack_20;
  CAmmo *pCStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar15 = 0;
  local_24 = param_1[1].particle_systems[1].next_particle;
  if (99 < *(int *)(param_1->actor_name + 0x10)) {
    return 0;
  }
  pCVar5 = (*((param_2->vtable)._ub)->getCarrier)(param_2);
  if (pCVar5 != *(CDemonActor **)(param_1->actor_name + 4)) {
    (*((param_2->vtable)._ub)->onDropped)(param_2,(CVector3f *)0x0);
    if (*(CDemonActor **)(param_1->actor_name + 4) != (CDemonActor *)0x0) {
      (*((param_2->vtable)._ub)->pickup)(param_2,*(CDemonActor **)(param_1->actor_name + 4));
    }
  }
  pcVar13 = acStack_32c;
  pcVar14 = acStack_32c;
  pcVar10 = acStack_32c;
  if (((*(int *)(param_1->actor_name + 4) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) &&
      (param_3 != 0)) && (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_28 = (char *)core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_2);
    core_inv_cpp_getItemDescription_FUN_004d9f80(param_2);
    iVar6 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CAmmoClassInfo.name_hash);
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You've found : ");
    pcVar11 = acStack_12c;
    do {
      cVar1 = *pcVar7;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (iVar6 != 0) {
      _sprintf(acStack_22c,&DAT_005db537);
      pcVar11 = acStack_22c;
      iVar6 = -1;
      pcVar7 = acStack_12c;
      do {
        pcVar12 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar12 = pcVar7 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar12;
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
    iVar6 = -1;
    pcVar11 = acStack_12c;
    do {
      pcVar7 = pcVar11;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar11 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    pcVar11 = pcStack_28;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    acStack_32c[0] = '\0';
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CHealthItem");
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CGasMask");
    if (iVar6 != 0) {
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
      pcVar11 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_next_item);
      iVar6 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar7 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(" and ");
      iVar6 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar7 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar11 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_prev_item);
      iVar6 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar7 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar7 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar11 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_use_item);
      iVar6 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar7 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          (" to put on and off the mask.");
      iVar6 = -1;
      pcVar13 = acStack_32c;
      do {
        pcVar7 = pcVar13;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CKeyActor");
    if (iVar6 != 0) {
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
      pcVar13 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_fire);
      iVar6 = -1;
      pcVar14 = acStack_32c;
      do {
        pcVar11 = pcVar14;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
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
      iVar6 = -1;
      pcVar14 = acStack_32c;
      do {
        pcVar11 = pcVar14;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
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
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CBoxActor");
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CAmmo");
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CWeapon");
    core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,acStack_12c,10.0);
    pcVar14 = param_1[1].create_event + 0x28;
    do {
      cVar1 = *pcVar10;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    iStack_14 = engine_font_cpp_FUN_004aaf00(_DAT_01511cc4,param_1[1].create_event + 0x28);
    *(float *)(param_1[1].create_event + 0x20) = (float)iStack_14 * (float)_DAT_005db702;
  }
  pCStack_1c = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (param_2,g_CAmmoClassInfo.name_hash);
  if (pCStack_1c != (CAmmo *)0x0) {
    pcVar14 = pCStack_1c->weapon_class_name;
    iVar6 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(pCStack_1c,pcVar14);
    pCVar5 = param_1;
    if (0 < *(int *)(param_1->actor_name + 0x10)) {
      do {
        pcStack_20 = pcVar14;
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(pCVar5->actor_name + 0x14),g_CAmmoClassInfo.name_hash);
        if (((*(int *)&pCVar5[1].particle_systems[1].field_0x20 ==
              param_1[1].particle_systems[1].next_particle) && (iVar8 != 0)) &&
           ((iVar9 = _strcmp(pcStack_20,(char *)(iVar8 + 0x430)),
            pCVar2 = g_CConsolePtr, iVar9 == 0 &&
            (*(EAmmoType *)(iVar8 + 0x474) == pCStack_1c->ammo_type)))) {
          *(int *)(iVar8 + 0x470) = *(int *)(iVar8 + 0x470) + pCStack_1c->ammo_count;
          engine_console_cpp_FUN_00436710(pCVar2,"Found existing ammo... adding count");
          core_mission_cpp_FUN_004fc7b0(0x01D182F0,param_2,1);
          return 1;
        }
        iVar6 = iVar6 + 1;
        pCVar5 = (CDemonActor *)(pCVar5->actor_name + 4);
        pcVar14 = pcStack_20;
      } while (iVar6 < *(int *)(param_1->actor_name + 0x10));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1->actor_name + 0x10)) {
      pcVar14 = pCStack_1c->weapon_class_name;
      pCVar5 = param_1;
      do {
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(pCVar5->actor_name + 0x14),g_CWeaponClassInfo.name_hash);
        if (iVar8 != 0) {
          pcVar13 = (char *)core_actor_cpp_FUN_00408a50(iVar8);
          iVar8 = _stricmp(pcVar14,pcVar13);
          if (iVar8 == 0) break;
        }
        iVar6 = iVar6 + 1;
        pCVar5 = (CDemonActor *)(pCVar5->actor_name + 4);
      } while (iVar6 < *(int *)(param_1->actor_name + 0x10));
    }
    iVar6 = _strcmp(pCStack_1c->weapon_class_name,"CDynamite");
    if (iVar6 == 0) {
      pCVar5 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c5a0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      pCVar5[2].particle_systems[0].position.z = (float)pCStack_1c->ammo_count;
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,*(CDemonActor **)(param_1->actor_name + 4));
      core_actor_cpp_FUN_00408730(param_2);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_FUN_004dadb0(param_1,pCVar5,1,0);
      return 1;
    }
  }
  iStack_2c = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CHealthItemClassInfo.name_hash);
  if ((iStack_2c != 0) && (iVar6 = 0, pCVar5 = param_1, 0 < *(int *)(param_1->actor_name + 0x10))) {
    do {
      iVar8 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(pCVar5->actor_name + 0x14),g_CHealthItemClassInfo.name_hash
                        );
      pCVar3 = 0x01D182F0;
      if ((*(int *)&pCVar5[1].particle_systems[1].field_0x20 ==
           param_1[1].particle_systems[1].next_particle) && (iVar8 != 0)) {
        *(int *)(iVar8 + 0x430) = *(int *)(iVar8 + 0x430) + *(int *)(iStack_2c + 0x430);
        core_mission_cpp_FUN_004fc7b0(pCVar3,param_2,1);
        return 1;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 4);
    } while (iVar6 < *(int *)(param_1->actor_name + 0x10));
  }
  iStack_18 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CWeaponClassInfo.name_hash);
  if (iStack_18 != 0) {
    iVar6 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iStack_18,g_CMeleeClassInfo.name_hash);
    if (iVar6 != 0) {
      *(CDemonActor **)(param_1->actor_name + *(int *)(param_1->actor_name + 0x10) * 4 + 0x14) =
           param_2;
      *(int *)(&param_1[1].particle_systems[1].field_0x20 + *(int *)(param_1->actor_name + 0x10) * 4
              ) = local_24;
      pCVar3 = 0x01D182F0;
      *(int *)(param_1->actor_name + 0x10) = *(int *)(param_1->actor_name + 0x10) + 1;
      core_mission_cpp_FUN_004fc7b0(pCVar3,param_2,0);
      (*((param_2->vtable)._ub)->onPickup)(param_2,param_1);
      return 1;
    }
    iVar6 = 0;
    pCVar5 = param_1;
    if (0 < *(int *)(param_1->actor_name + 0x10)) {
      do {
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(pCVar5->actor_name + 0x14),g_CWeaponClassInfo.name_hash);
        if ((*(int *)&pCVar5[1].particle_systems[1].field_0x20 ==
             param_1[1].particle_systems[1].next_particle) && (iVar8 != 0)) {
          pcVar14 = (char *)core_actor_cpp_FUN_00408a50(iVar8);
          pcVar13 = (char *)core_actor_cpp_FUN_00408a50(iStack_18);
          iVar9 = _strcmp(pcVar13,pcVar14);
          uVar4 = g_CTommyGunClassInfo.name_hash;
          if ((iVar9 == 0) && (*(int *)(iVar8 + 0x6c8) == *(int *)(iStack_18 + 0x6c8))) {
            *(int *)(iVar8 + 0x6c4) = *(int *)(iVar8 + 0x6c4) + *(int *)(iStack_18 + 0x6c4);
            iVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0(iVar8,uVar4);
            if ((iVar6 != 0) && (200 < *(int *)(iVar6 + 0x6c4))) {
              *(uint *)(iVar6 + 0x6c4) = 200;
            }
            engine_console_cpp_FUN_00436710(g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_004fc7b0(0x01D182F0,param_2,1);
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        pCVar5 = (CDemonActor *)(pCVar5->actor_name + 4);
      } while (iVar6 < *(int *)(param_1->actor_name + 0x10));
    }
  }
  *(CDemonActor **)(param_1->actor_name + *(int *)(param_1->actor_name + 0x10) * 4 + 0x14) = param_2
  ;
  *(int *)(&param_1[1].particle_systems[1].field_0x20 + *(int *)(param_1->actor_name + 0x10) * 4) =
       param_1[1].particle_systems[1].next_particle;
  pCVar3 = 0x01D182F0;
  *(int *)(param_1->actor_name + 0x10) = *(int *)(param_1->actor_name + 0x10) + 1;
  core_mission_cpp_FUN_004fc270(pCVar3,param_2);
  (*((param_2->vtable)._ub)->onPickup)(param_2,param_1);
  if ((iStack_18 != 0) &&
     (*(int *)(param_1[2].create_event + param_1[1].particle_systems[1].next_particle * 4 + 0x30) ==
      0)) {
    core_inv_cpp_FUN_004db9d0(param_1,iStack_18,5,1);
  }
  return 1;
}
