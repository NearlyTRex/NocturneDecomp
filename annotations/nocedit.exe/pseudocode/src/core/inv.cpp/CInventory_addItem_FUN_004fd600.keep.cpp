// Name: core_inv.cpp_CInventory_addItem_FUN_004fd600
// Address: 004fd600
// MANUAL RECONSTRUCTION
// Address Range: [[004fd600, 004fe8f4]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

{
  bool bVar2;
  CConsole *this_ptr_00;
  CDemonMission *pCVar3;
  uint uVar4;
  CDemonActor *pCVar5_02;
  CAmmo *pCVar13;
  char *pcVar16;
  CAmmo *pCVar15;
  CWeapon *pCVar5_01;
  CAmmo *pCVar7;
  CWeapon *pCVar14;
  CWeapon *pCVar5;
  int iVar17;
  CTommyGun *pCVar5_00;
  CWeapon *pCVar8;
  CDynamite *pCVar12;
  CMelee *pCVar11;
  CWeapon *pCVar9;
  CAmmo *pCVar10;
  CTommyGun *pCVar6;
  int iVar18;
  CInventory *pCVar19;
  char *pcVar20;
  char acStack_334 [256];
  char acStack_234 [256];
  char acStack_134 [256];
  char *pcStack_34;
  int iStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  CAmmo *pCStack_24;
  CInventory *pCStack_20;
  int iStack_1c;
  CInventory *pCStack_18;
  int iStack_14;

  if (99 < this_ptr->item_count) {
    return 0;
  }
  pCVar5_02 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
  if (pCVar5_02 != this_ptr->owner) {
    (*((item_actor->vtable)._ub)->onDropped)(item_actor,(CVector3f *)0x0);
    if (this_ptr->owner != (CDemonActor *)0x0) {
      (*((item_actor->vtable)._ub)->pickup)(item_actor,this_ptr->owner);
    }
  }
  if ((((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) && (show_tutorial_message != 0))
     && (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_34 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(item_actor);
    core_inv_cpp_getItemIconName_FUN_004fcf70(item_actor);
    pCVar13 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                 (item_actor,g_CAmmoClassInfo.name_hash);
    strcpy(acStack_334, support_newmsg_cpp_getLocalizedString_FUN_005441f0("You've found : "));
    if (pCVar13 != (CAmmo *)0x0) {
      _sprintf(acStack_134,"%d ",pCVar13->ammo_count);
      strcat(acStack_334, acStack_134);
    }
    strcat(acStack_334, pcStack_34);
    acStack_234[0] = '\0';
    iVar18 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CHealthItem");
    if (iVar18 != 0) {
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      strcpy(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to cycle through your inventory.  Press ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to use this item to restore some health.");
      strcat(acStack_234, pcVar16);
    }
    iVar18 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CGasMask");
    if (iVar18 != 0) {
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      strcpy(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to cycle through your inventory.  Press ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to put on and off the mask.");
      strcat(acStack_234, pcVar16);
    }
    iVar18 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CKeyActor");
    if (iVar18 != 0) {
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("With your guns put away, press ");
      strcpy(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_fire);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to open a previously locked door.");
      strcat(acStack_234, pcVar16);
    }
    iVar18 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CBoxActor");
    if (iVar18 != 0) {
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      strcpy(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to cycle through your inventory.  Press ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" to use this item.");
      strcat(acStack_234, pcVar16);
    }
    iVar18 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CAmmo");
    if (iVar18 != 0) {
      pCVar15 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (item_actor,g_CAmmoClassInfo.name_hash);
      pCVar5_02 = core_actor_cpp_createActorByName_FUN_0040c430(pCVar15->weapon_class_name);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("This ammo is for your ")
      ;
      strcpy(acStack_234, pcVar16);
      pcVar16 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5_02);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".  Select your ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5_02);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" with ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_weapon);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_weapon);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      strcat(acStack_234, pcVar16);
      g_CurrentDebugFilename = "..\\core\\inv.cpp";
      g_CurrentDebugLine = 0x219;
      if (pCVar5_02 != (CDemonActor *)0x0) {
        (*((pCVar5_02->vtable)._ub)->dtor)(pCVar5_02,2);
      }
    }
    iVar18 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CWeapon");
    if (iVar18 != 0) {
      pCVar5_01 = (CWeapon *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (item_actor,g_CWeaponClassInfo.name_hash);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select your ");
      strcpy(acStack_234, pcVar16);
      pcVar16 = core_inv_cpp_getItemDisplayName_FUN_004fcf00((CDemonActor *)pCVar5_01);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" with ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_weapon);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      strcat(acStack_234, pcVar16);
      pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_weapon);
      strcat(acStack_234, pcVar16);
      pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      strcat(acStack_234, pcVar16);
    }
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,acStack_334,10.0);
    strcpy(this_ptr->message_text, acStack_234);
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                          (g_SmallEditorFont,this_ptr->message_text);
    this_ptr->message_display_timer = (float)iStack_14 * (float)0.025000000000000001;
  }
  pCStack_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (item_actor,g_CAmmoClassInfo.name_hash);
  if (pCStack_24 != (CAmmo *)0x0) {
    pcVar20 = pCStack_24->weapon_class_name;
    iVar18 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(pCStack_24,pcVar20);
    pCVar19 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pcStack_2c = pcVar20;
        pCVar7 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                    (pCVar19->items[0],g_CAmmoClassInfo.name_hash);
        if (((pCVar7 != (CAmmo *)0x0) &&
            (iVar17 = _strcmp(pcStack_2c,pCVar7->weapon_class_name),
            this_ptr_00 = g_CConsolePtr, iVar17 == 0)) &&
           (pCVar7->ammo_type == pCStack_24->ammo_type)) {
          pCVar7->ammo_count = pCVar7->ammo_count + pCStack_24->ammo_count;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"Found existing ammo, but no weapon\n");
          core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                    (g_CDemonMissionPtr,item_actor,1);
          return 1;
        }
        iVar18 = iVar18 + 1;
        pCVar19 = (CInventory *)&pCVar19->owner;
        pcVar20 = pcStack_2c;
      } while (iVar18 < this_ptr->item_count);
    }
    iVar18 = 0;
    pcVar20 = pCStack_24->weapon_class_name;
    iStack_30 = 0;
    pCVar19 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar14 = (CWeapon *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (pCVar19->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar14 != (CWeapon *)0x0) {
          pcVar16 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                              ((CDemonActor *)pCVar14);
          iVar17 = _stricmp(pcVar20,pcVar16);
          if (iVar17 == 0) goto LAB_004fe2af;
        }
        iVar18 = iVar18 + 1;
        pCVar19 = (CInventory *)&pCVar19->owner;
      } while (iVar18 < this_ptr->item_count);
    }
    if (iStack_30 != 0) {
LAB_004fe2af:
      pcStack_28 = pCStack_24->weapon_class_name;
      iVar18 = 0;
      pCVar19 = this_ptr;
      if (0 < this_ptr->item_count) {
        do {
          pCVar5 = (CWeapon *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCVar19->items[0],g_CWeaponClassInfo.name_hash);
          if (pCVar5 != (CWeapon *)0x0) {
            pcVar20 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                                ((CDemonActor *)pCVar5);
            iVar17 = _stricmp(pcStack_28,pcVar20);
            uVar4 = g_CTommyGunClassInfo.name_hash;
            if ((iVar17 == 0) && (pCVar5->ammo_type == pCStack_24->ammo_type)) {
              pCVar5->ammo_count = pCVar5->ammo_count + pCStack_24->ammo_count;
              pCVar5_00 = (CTommyGun *)
                          core_actor_cpp_castToClassHash_FUN_0040c790((CDemonActor *)pCVar5,uVar4);
              if ((pCVar5_00 != (CTommyGun *)0x0) && (200 < (pCVar5_00->base).ammo_count)) {
                (pCVar5_00->base).ammo_count = 200;
              }
              core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                        (g_CDemonMissionPtr,item_actor,1);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar18 = iVar18 + 1;
          pCVar19 = (CInventory *)&pCVar19->owner;
        } while (iVar18 < this_ptr->item_count);
      }
      pCVar5_02 = core_actor_cpp_createActorByName_FUN_0040c430(pcStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,pCVar5_02);
      (*((pCVar5_02->vtable)._ub)->setup)(pCVar5_02);
      *(int *)(pCVar5_02[4].actor_name + 8) = pCStack_24->ammo_count;
      *(EAmmoType *)(pCVar5_02[4].actor_name + 0xc) = pCStack_24->ammo_type;
      (*((pCVar5_02->vtable)._ub)->pickup)(pCVar5_02,this_ptr->owner);
      this_ptr->items[this_ptr->item_count] = pCVar5_02;
      pCVar3 = g_CDemonMissionPtr;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3,item_actor,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar18 = _strcmp(pcVar20,"CDynamite");
    if (iVar18 == 0) {
      pCVar12 = (CDynamite *)core_actor_cpp_createActorByName_FUN_0040c430("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
                (g_CDemonMissionPtr,(CDemonActor *)pCVar12);
      (*((pCVar12->base).base.vtable._ub)->setup)((CDemonActor *)pCVar12);
      (pCVar12->base).ammo_count = pCStack_24->ammo_count;
      (*((pCVar12->base).base.vtable._ub)->pickup)((CDemonActor *)pCVar12,this_ptr->owner);
      core_actor_cpp_deleteActor_FUN_00408820(item_actor);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr,(CDemonActor *)pCVar12,1);
      return 1;
    }
  }
  pCVar8 = (CWeapon *)
           core_actor_cpp_castToClassHash_FUN_0040c790(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar8 != (CWeapon *)0x0) {
    pCVar11 = (CMelee *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        ((CDemonActor *)pCVar8,g_CMeleeClassInfo.name_hash);
    if (pCVar11 != (CMelee *)0x0) {
      this_ptr->items[this_ptr->item_count] = item_actor;
      pCVar3 = g_CDemonMissionPtr;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar18 = 0;
    if (0 < this_ptr->item_count) {
      pCStack_20 = this_ptr;
      do {
        pCVar9 = (CWeapon *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCStack_20->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar9 != (CWeapon *)0x0) {
          pcVar20 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)pCVar9)
          ;
          pcVar16 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)pCVar8)
          ;
          iVar17 = _strcmp(pcVar16,pcVar20);
          uVar4 = g_CTommyGunClassInfo.name_hash;
          if ((iVar17 == 0) && (pCVar9->ammo_type == pCVar8->ammo_type)) {
            pCVar9->ammo_count = pCVar9->ammo_count + pCVar8->ammo_count;
            pCVar6 = (CTommyGun *)
                     core_actor_cpp_castToClassHash_FUN_0040c790((CDemonActor *)pCVar9,uVar4);
            if ((pCVar6 != (CTommyGun *)0x0) && (200 < (pCVar6->base).ammo_count)) {
              (pCVar6->base).ammo_count = 200;
            }
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                      (g_CDemonMissionPtr,item_actor,1);
            return 1;
          }
        }
        iVar18 = iVar18 + 1;
        pCStack_20 = (CInventory *)&pCStack_20->owner;
      } while (iVar18 < this_ptr->item_count);
    }
    bVar2 = false;
    iStack_1c = 0;
    if (0 < this_ptr->item_count) {
      pCStack_18 = this_ptr;
      do {
        pCVar10 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (pCStack_18->items[0],g_CAmmoClassInfo.name_hash);
        if (pCVar10 != (CAmmo *)0x0) {
          pcVar20 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)pCVar8)
          ;
          iVar18 = _strcmp(pCVar10->weapon_class_name,pcVar20);
          if (iVar18 == 0) {
            pcVar20 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                                ((CDemonActor *)pCVar8);
            pCVar5_02 = core_actor_cpp_createActorByName_FUN_0040c430(pcVar20);
            core_mission_cpp_CDemonMission_generateActorName_FUN_00524700
                      (g_CDemonMissionPtr,pCVar5_02);
            (*((pCVar5_02->vtable)._ub)->setup)(pCVar5_02);
            *(int *)(pCVar5_02[4].actor_name + 8) = pCVar10->ammo_count;
            *(EAmmoType *)(pCVar5_02[4].actor_name + 0xc) = pCVar10->ammo_type;
            (*((pCVar5_02->vtable)._ub)->pickup)(pCVar5_02,this_ptr->owner);
            (*((pCVar5_02->vtable)._ub)->onPickup)(pCVar5_02,(CDemonActor *)this_ptr);
            core_actor_cpp_deleteActor_FUN_00408820(pCStack_18->items[0]);
            pCStack_18->items[0] = pCVar5_02;
            pcVar20 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                                ((CDemonActor *)pCVar8);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n",pcVar20);
          }
        }
        pCStack_18 = (CInventory *)&pCStack_18->owner;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                (g_CDemonMissionPtr,(CDemonActor *)pCVar8,1);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = item_actor;
  pCVar3 = g_CDemonMissionPtr;
  this_ptr->item_count = this_ptr->item_count + 1;
  core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(pCVar3,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar8 != (CWeapon *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,(CDemonActor *)pCVar8,5,1);
  }
  return 1;
}
