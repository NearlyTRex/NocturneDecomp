// Name: core_inv.cpp_CInventory_addItem_FUN_004dadb0
// Address: 004dadb0
// Address Range: [[004dadb0, 004db759]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_addItem_FUN_004dadb0(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message,int unused_flag)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_addItem_FUN_004dadb0(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message,int unused_flag)

{
  char cVar1;
  CConsole *this_ptr_00;
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
  local_24 = this_ptr->current_group;
  if (99 < this_ptr->item_count) {
    return 0;
  }
  pCVar3 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
  if (pCVar3 != this_ptr->owner) {
    (*((item_actor->vtable)._ub)->onDropped)(item_actor,(CVector3f *)0x0);
    if (this_ptr->owner != (CDemonActor *)0x0) {
      (*((item_actor->vtable)._ub)->pickup)(item_actor,this_ptr->owner);
    }
  }
  pcVar11 = acStack_32c;
  pcVar12 = acStack_32c;
  pcVar7 = acStack_32c;
  if ((((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) &&
      (show_tutorial_message != 0)) && (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_28 = core_inv_cpp_getItemDisplayName_FUN_004d9f10(item_actor);
    core_inv_cpp_getItemDescription_FUN_004d9f80(item_actor);
    pCVar3 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(item_actor,g_CAmmoClassInfo.name_hash);
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
      _sprintf(acStack_22c,"%d ");
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
    core_actor_cpp_isOfClass_FUN_0040c840(item_actor,"CHealthItem");
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(item_actor,"CGasMask");
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
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c840(item_actor,"CKeyActor");
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
    core_actor_cpp_isOfClass_FUN_0040c840(item_actor,"CBoxActor");
    core_actor_cpp_isOfClass_FUN_0040c840(item_actor,"CAmmo");
    core_actor_cpp_isOfClass_FUN_0040c840(item_actor,"CWeapon");
    core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,acStack_12c,10.0);
    pcVar12 = this_ptr->message_text;
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
                          (g_SmallEditorFont,this_ptr->message_text);
    this_ptr->message_display_timer = (float)iStack_14 * (float)0.025000000000000001;
  }
  pCStack_1c = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (item_actor,g_CAmmoClassInfo.name_hash);
  if (pCStack_1c != (CAmmo *)0x0) {
    pcVar12 = pCStack_1c->weapon_class_name;
    iVar6 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(pCStack_1c,pcVar12);
    pCVar8 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pcStack_20 = pcVar12;
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar8->items[0],g_CAmmoClassInfo.name_hash);
        if (((pCVar8->item_groups[0] == this_ptr->current_group) && (pCVar3 != (CDemonActor *)0x0))
           && ((iVar5 = _strcmp
                                  (pcStack_20,(char *)&pCVar3[1].particle_systems[0].fade_end),
               this_ptr_00 = g_CConsolePtr, iVar5 == 0 &&
               (pCVar3[1].particle_systems[1].fade_end == (float)pCStack_1c->ammo_type)))) {
          pCVar3[1].particle_systems[1].fade_start =
               (float)((int)pCVar3[1].particle_systems[1].fade_start + pCStack_1c->ammo_count);
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (this_ptr_00,"Found existing ammo... adding count");
          core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0
                    (g_CDemonMission_PTR_00618170,item_actor,1);
          return 1;
        }
        iVar6 = iVar6 + 1;
        pCVar8 = (CInventory *)&pCVar8->owner;
        pcVar12 = pcStack_20;
      } while (iVar6 < this_ptr->item_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->item_count) {
      pcVar12 = pCStack_1c->weapon_class_name;
      pCVar8 = this_ptr;
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar8->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(pCVar3);
          iVar5 = _stricmp(pcVar12,pcVar11);
          if (iVar5 == 0) break;
        }
        iVar6 = iVar6 + 1;
        pCVar8 = (CInventory *)&pCVar8->owner;
      } while (iVar6 < this_ptr->item_count);
    }
    iVar6 = _strcmp(pCStack_1c->weapon_class_name,"CDynamite");
    if (iVar6 == 0) {
      pCVar3 = core_actor_cpp_createActorByName_FUN_0040c5a0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
                (g_CDemonMission_PTR_00618170,pCVar3);
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      pCVar3[2].particle_systems[0].position.z = (float)pCStack_1c->ammo_count;
      (*((pCVar3->vtable)._ub)->pickup)(pCVar3,this_ptr->owner);
      core_actor_cpp_deleteActor_FUN_00408730(item_actor);
      engine_console_cpp_CConsole_printf_FUN_00436710
                (g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_CInventory_addItem_FUN_004dadb0(this_ptr,pCVar3,1,0);
      return 1;
    }
  }
  pCStack_2c = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (item_actor,g_CHealthItemClassInfo.name_hash);
  if ((pCStack_2c != (CDemonActor *)0x0) && (iVar6 = 0, pCVar8 = this_ptr, 0 < this_ptr->item_count)
     ) {
    do {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (pCVar8->items[0],g_CHealthItemClassInfo.name_hash);
      pCVar2 = g_CDemonMission_PTR_00618170;
      if ((pCVar8->item_groups[0] == this_ptr->current_group) && (pCVar3 != (CDemonActor *)0x0)) {
        pCVar3[1].particle_systems[0].fade_end =
             (float)((int)pCVar3[1].particle_systems[0].fade_end +
                    (int)pCStack_2c[1].particle_systems[0].fade_end);
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(pCVar2,item_actor,1);
        return 1;
      }
      iVar6 = iVar6 + 1;
      pCVar8 = (CInventory *)&pCVar8->owner;
    } while (iVar6 < this_ptr->item_count);
  }
  pCStack_18 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c8f0(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCStack_18 != (CDemonActor *)0x0) {
    pCVar3 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCStack_18,g_CMeleeClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      this_ptr->items[this_ptr->item_count] = item_actor;
      this_ptr->item_groups[this_ptr->item_count] = local_24;
      pCVar2 = g_CDemonMission_PTR_00618170;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(pCVar2,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar6 = 0;
    pCVar8 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCVar8->items[0],g_CWeaponClassInfo.name_hash);
        if ((pCVar8->item_groups[0] == this_ptr->current_group) && (pCVar3 != (CDemonActor *)0x0)) {
          pcVar12 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(pCVar3);
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(pCStack_18);
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
            core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0
                      (g_CDemonMission_PTR_00618170,item_actor,1);
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        pCVar8 = (CInventory *)&pCVar8->owner;
      } while (iVar6 < this_ptr->item_count);
    }
  }
  this_ptr->items[this_ptr->item_count] = item_actor;
  this_ptr->item_groups[this_ptr->item_count] = this_ptr->current_group;
  pCVar2 = g_CDemonMission_PTR_00618170;
  this_ptr->item_count = this_ptr->item_count + 1;
  core_mission_cpp_CDemonMission_removeActorFromList_FUN_004fc270(pCVar2,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCStack_18 != (CDemonActor *)0x0) &&
     (this_ptr->selected_weapons[this_ptr->current_group] == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0(this_ptr,pCStack_18,5,1);
  }
  return 1;
}
