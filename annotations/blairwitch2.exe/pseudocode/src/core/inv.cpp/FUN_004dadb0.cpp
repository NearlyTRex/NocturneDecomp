// Name: core_inv.cpp_FUN_004dadb0
// Address: 004dadb0
// Address Range: [[004dadb0, 004db759]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004dadb0(CInventory *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_inv_cpp_FUN_004dadb0(CInventory *param_1,CDemonActor *param_2,int param_3)

{
  char cVar1;
  CConsole *this_ptr;
  CDemonMission *pCVar2;
  uint class_name_hash;
  CDemonActor *pCVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  CInventory *pCVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  char acStack_32c [256];
  char acStack_22c [256];
  char acStack_12c [256];
  CDemonActor *pCStack_2c;
  char *pcStack_28;
  int local_24;
  char *pcStack_20;
  CAmmo *pCStack_1c;
  CDemonActor *pCStack_18;
  int iStack_14;
  
  bVar13 = 0;
  local_24 = param_1->current_group;
  if (99 < param_1->item_count) {
    return 0;
  }
  pCVar3 = (*((param_2->vtable)._ub)->getCarrier)(param_2);
  if (pCVar3 != param_1->owner) {
    (*((param_2->vtable)._ub)->onDropped)(param_2,(CVector3f *)0x0);
    if (param_1->owner != (CDemonActor *)0x0) {
      (*((param_2->vtable)._ub)->pickup)(param_2,param_1->owner);
    }
  }
  pcVar11 = acStack_32c;
  pcVar12 = acStack_32c;
  pcVar7 = acStack_32c;
  if (((param_1->owner == *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4)) && (param_3 != 0)) &&
     (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_28 = core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_2);
    core_inv_cpp_getItemDescription_FUN_004d9f80(param_2);
    pCVar3 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CAmmoClassInfo.name_hash);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You've found : ");
    pcVar9 = acStack_12c;
    do {
      cVar1 = *pcVar4;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (pCVar3 != (CDemonActor *)0x0) {
      _sprintf(acStack_22c,&DAT_005db537);
      pcVar9 = acStack_22c;
      iVar6 = -1;
      pcVar4 = acStack_12c;
      do {
        pcVar10 = pcVar4;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar10 = pcVar4 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = -1;
    pcVar9 = acStack_12c;
    do {
      pcVar4 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar4 = pcVar9 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + -1;
    pcVar9 = pcStack_28;
    do {
      cVar1 = *pcVar9;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    acStack_32c[0] = '\0';
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CHealthItem");
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CGasMask");
    if (iVar6 != 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Press ");
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar9 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_next_item);
      iVar6 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(" and ");
      iVar6 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_prev_item);
      iVar6 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_use_item);
      iVar6 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         (" to put on and off the mask.");
      iVar6 = -1;
      pcVar11 = acStack_32c;
      do {
        pcVar4 = pcVar11;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar4;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CKeyActor");
    if (iVar6 != 0) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          ("With your guns put away, press ");
      do {
        cVar1 = *pcVar11;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004ee960(g_CGamePtr->key_fire);
      iVar6 = -1;
      pcVar12 = acStack_32c;
      do {
        pcVar9 = pcVar12;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar9 = pcVar12 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                          (" to open a previously locked door.");
      iVar6 = -1;
      pcVar12 = acStack_32c;
      do {
        pcVar9 = pcVar12;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar9 = pcVar12 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CBoxActor");
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CAmmo");
    core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CWeapon");
    core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,acStack_12c,10.0);
    pcVar12 = param_1->message_text;
    do {
      cVar1 = *pcVar7;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00
                          (_DAT_01511cc4,param_1->message_text);
    param_1->message_display_timer = (float)iStack_14 * (float)_DAT_005db702;
  }
  pCStack_1c = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (param_2,g_CAmmoClassInfo.name_hash);
  if (pCStack_1c != (CAmmo *)0x0) {
    pcVar12 = pCStack_1c->weapon_class_name;
    iVar6 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(pCStack_1c,pcVar12);
    pCVar8 = param_1;
    if (0 < param_1->item_count) {
      do {
        pcStack_20 = pcVar12;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar8->items[0],g_CAmmoClassInfo.name_hash);
        if (((pCVar8->item_groups[0] == param_1->current_group) && (pCVar3 != (CDemonActor *)0x0))
           && ((iVar5 = _strcmp
                                  (pcStack_20,(char *)&pCVar3[1].particle_systems[0].fade_end),
               this_ptr = g_CConsolePtr, iVar5 == 0 &&
               (pCVar3[1].particle_systems[1].fade_end == (float)pCStack_1c->ammo_type)))) {
          pCVar3[1].particle_systems[1].fade_start =
               (float)((int)pCVar3[1].particle_systems[1].fade_start + pCStack_1c->ammo_count);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (this_ptr,"Found existing ammo... adding count");
          core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(0x01D182F0,param_2,1);
          return 1;
        }
        iVar6 = iVar6 + 1;
        pCVar8 = (CInventory *)&pCVar8->owner;
        pcVar12 = pcStack_20;
      } while (iVar6 < param_1->item_count);
    }
    iVar6 = 0;
    if (0 < param_1->item_count) {
      pcVar12 = pCStack_1c->weapon_class_name;
      pCVar8 = param_1;
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar8->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          pcVar11 = (char *)core_actor_cpp_FUN_00408a50(pCVar3);
          iVar5 = _stricmp(pcVar12,pcVar11);
          if (iVar5 == 0) break;
        }
        iVar6 = iVar6 + 1;
        pCVar8 = (CInventory *)&pCVar8->owner;
      } while (iVar6 < param_1->item_count);
    }
    iVar6 = _strcmp(pCStack_1c->weapon_class_name,"CDynamite");
    if (iVar6 == 0) {
      pCVar3 = core_actor_cpp_createActorByName_FUN_0040c5a0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,pCVar3);
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      pCVar3[2].particle_systems[0].position.z = (float)pCStack_1c->ammo_count;
      (*((pCVar3->vtable)._ub)->pickup)(pCVar3,param_1->owner);
      core_actor_cpp_FUN_00408730(param_2);
      engine_console_cpp_CConsole_printf_FUN_00436710
                (g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_FUN_004dadb0(param_1,pCVar3,1,0);
      return 1;
    }
  }
  pCStack_2c = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CHealthItemClassInfo.name_hash)
  ;
  if ((pCStack_2c != (CDemonActor *)0x0) && (iVar6 = 0, pCVar8 = param_1, 0 < param_1->item_count))
  {
    do {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (pCVar8->items[0],g_CHealthItemClassInfo.name_hash);
      pCVar2 = 0x01D182F0;
      if ((pCVar8->item_groups[0] == param_1->current_group) && (pCVar3 != (CDemonActor *)0x0)) {
        pCVar3[1].particle_systems[0].fade_end =
             (float)((int)pCVar3[1].particle_systems[0].fade_end +
                    (int)pCStack_2c[1].particle_systems[0].fade_end);
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(pCVar2,param_2,1);
        return 1;
      }
      iVar6 = iVar6 + 1;
      pCVar8 = (CInventory *)&pCVar8->owner;
    } while (iVar6 < param_1->item_count);
  }
  pCStack_18 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CWeaponClassInfo.name_hash);
  if (pCStack_18 != (CDemonActor *)0x0) {
    pCVar3 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCStack_18,g_CMeleeClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      param_1->items[param_1->item_count] = param_2;
      param_1->item_groups[param_1->item_count] = local_24;
      pCVar2 = 0x01D182F0;
      param_1->item_count = param_1->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(pCVar2,param_2,0);
      (*((param_2->vtable)._ub)->onPickup)(param_2,(CDemonActor *)param_1);
      return 1;
    }
    iVar6 = 0;
    pCVar8 = param_1;
    if (0 < param_1->item_count) {
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar8->items[0],g_CWeaponClassInfo.name_hash);
        if ((pCVar8->item_groups[0] == param_1->current_group) && (pCVar3 != (CDemonActor *)0x0)) {
          pcVar12 = (char *)core_actor_cpp_FUN_00408a50(pCVar3);
          pcVar11 = (char *)core_actor_cpp_FUN_00408a50(pCStack_18);
          iVar5 = _strcmp(pcVar11,pcVar12);
          class_name_hash = g_CTommyGunClassInfo.name_hash;
          if ((iVar5 == 0) &&
             (pCVar3[2].particle_systems[0].fade_current ==
              pCStack_18[2].particle_systems[0].fade_current)) {
            pCVar3[2].particle_systems[0].position.z =
                 (float)((int)pCVar3[2].particle_systems[0].position.z +
                        (int)pCStack_18[2].particle_systems[0].position.z);
            pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar3,class_name_hash);
            if ((pCVar3 != (CDemonActor *)0x0) &&
               (200 < (int)pCVar3[2].particle_systems[0].position.z)) {
              pCVar3[2].particle_systems[0].position.z = 2.8026e-43;
            }
            engine_console_cpp_CConsole_printf_FUN_00436710
                      (g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(0x01D182F0,param_2,1);
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        pCVar8 = (CInventory *)&pCVar8->owner;
      } while (iVar6 < param_1->item_count);
    }
  }
  param_1->items[param_1->item_count] = param_2;
  param_1->item_groups[param_1->item_count] = param_1->current_group;
  pCVar2 = 0x01D182F0;
  param_1->item_count = param_1->item_count + 1;
  core_mission_cpp_CDemonMission_removeActorFromList_FUN_004fc270(pCVar2,param_2);
  (*((param_2->vtable)._ub)->onPickup)(param_2,(CDemonActor *)param_1);
  if ((pCStack_18 != (CDemonActor *)0x0) &&
     (param_1->selected_weapons[param_1->current_group] == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0(param_1,pCStack_18,5,1);
  }
  return 1;
}
