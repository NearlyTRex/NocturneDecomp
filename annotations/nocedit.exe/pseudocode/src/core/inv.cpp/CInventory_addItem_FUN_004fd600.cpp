// Name: core_inv.cpp_CInventory_addItem_FUN_004fd600
// Address: 004fd600
// Address Range: [[004fd600, 004fe8f4]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
// Cross-references:
//   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 (00411700) at 00411724 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e036d [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd930 (004dd930) at 004dd9ba [UNCONDITIONAL_CALL]
//   core_game.cpp_giveHeroWeapon_FUN_004dd870 (004dd870) at 004dd8f4 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f2a30 (004f2a30) at 004f2a97 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f38d0 (004f38d0) at 004f38fc [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4ec8 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 (004fe900) at 004fe9c1 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557150 (00557150) at 0055719a [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bcd8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_You_ve_found_006304d2
//   TerminatedCString s_d_006304e2
//   TerminatedCString s_CHealthItem_006304e6
//   TerminatedCString s_Press_006304f2
//   TerminatedCString s_and_006304f9
//   TerminatedCString s_to_cycle_through_your_in_006304ff
//   TerminatedCString s_to_use_this_item_to_rest_00630529
//   TerminatedCString s_CGasMask_00630553
//   TerminatedCString s_Press_0063055c
//   TerminatedCString s_and_00630563
//   TerminatedCString s_to_cycle_through_your_in_00630569
//   TerminatedCString s_to_put_on_and_off_the_ma_00630593
//   TerminatedCString s_CKeyActor_006305b0
//   TerminatedCString s_With_your_guns_put_away__006305ba
//   TerminatedCString s_to_open_a_previously_loc_006305da
//   TerminatedCString s_CBoxActor_006305fd
//   TerminatedCString s_Press_00630607
//   TerminatedCString s_and_0063060e
//   TerminatedCString s_to_cycle_through_your_in_00630614
//   TerminatedCString s_to_use_this_item_0063063e
//   TerminatedCString s_CAmmo_00630651
//   TerminatedCString s_This_ammo_is_for_your_00630657
//   TerminatedCString s_Select_your_0063066e
//   TerminatedCString s_with_0063067e
//   TerminatedCString s_and_00630685
//   TerminatedCString s_anon_0063068b
//   TerminatedCString s_core_inv_cpp_0063068d
//   TerminatedCString s_CWeapon_0063069d
//   TerminatedCString s_Select_your_006306a5
//   TerminatedCString s_with_006306b2
//   TerminatedCString s_and_006306b9
//   TerminatedCString s_anon_006306bf
//   TerminatedCString s_Found_existing_ammo_but__006306c1
//   TerminatedCString s_Found_weapon_to_put_this_006306e5
//   TerminatedCString s_Found_new_type_of_ammo_f_00630709
//   TerminatedCString s_CDynamite_00630750
//   TerminatedCString s_CDynamite_0063075a
//   TerminatedCString s_Found_dynamite_Creating__00630764
//   TerminatedCString s_Found_same_weapon_increa_0063078e
//   TerminatedCString s_Converting_existing_ammo_006307b7
//   double DOUBLE_006307e2 = 0.0250000000000000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   char* g_CurrentDebugFilename = 0067d200
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 g_CAmmoClassInfo.name_hash
//   CConsole g_ConsolePtr
//   CBitFont* g_SmallEditorFont
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.key_fire
//   undefined4 g_CGameInstance.key_use_item
//   undefined4 g_CGameInstance.key_next_weapon
//   undefined4 g_CGameInstance.key_prev_weapon
//   undefined4 g_CGameInstance.key_next_item
//   undefined4 g_CGameInstance.key_prev_item
//   undefined4 DAT_02d81cc4
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 g_CMeleeClassInfo.name_hash
//   int g_CurrentDebugLine
//   CDemonMission g_CDemonMissionInstance
//   undefined4 g_CTommyGunClassInfo.name_hash
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_actor.cpp_deleteActor_FUN_00408820
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_ammo.cpp_CAmmo_FUN_00410fd0
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   core_inv.cpp_getItemIconName_FUN_004fcf70
//   core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

int __cdecl
core_inv_cpp_CInventory_addItem_FUN_004fd600
          (CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

{
  char cVar1;
  bool bVar2;
  CConsole *this_ptr_00;
  CDemonMission *pCVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  char *pcVar6;
  CDemonActor *pCVar7;
  int iVar8;
  CDemonActor *pCVar9;
  int iVar10;
  CInventory *pCVar11;
  BADSPACEBASE *in_ESP;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  CDemonActor *in_stack_00000010;
  CDemonActor *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_00000024;
  CInventory *in_stack_00000028;
  int in_stack_0000002c;
  CInventory *in_stack_00000030;
  CDemonActor *in_stack_0000003c;
  int in_stack_00000040;
  CDemonActor *in_stack_00000048;
  CDemonActor *in_stack_00000050;
  CDemonActor *in_stack_00000054;
  CDemonActor *in_stack_00000070;
  uint in_stack_fffffc8c;
  uint in_stack_fffffc90;
  uint in_stack_fffffc94;
  uint in_stack_fffffc98;
  uint in_stack_fffffc9c;
  uint in_stack_fffffca0;
  uint in_stack_fffffcd4;
  char acStack_2c0 [8];
  char acStack_2b8 [4];
  char acStack_2b4 [4];
  char acStack_2b0 [4];
  char acStack_2ac [4];
  char acStack_2a8 [16];
  char acStack_298 [8];
  char acStack_290 [4];
  char acStack_28c [4];
  char acStack_288 [4];
  char acStack_284 [4];
  char acStack_280 [4];
  char acStack_27c [4];
  char acStack_278 [88];
  char acStack_220 [8];
  char acStack_218 [8];
  char acStack_210 [4];
  char acStack_20c [4];
  char acStack_208 [4];
  char acStack_204 [220];
  char *pcStack_128;
  char *pcStack_118;
  CDemonActor *pCStack_ec;
  CDemonActor *pCStack_dc;
  CDemonActor *pCStack_bc;
  CDemonActor *pCStack_9c;
  CDemonActor *pCStack_8c;
  CDemonActor *pCStack_6c;
  
  bVar14 = 0;
  if (99 < this_ptr->item_count) {
    return 0;
  }
  pCVar5 = (*item_actor->vtable->getCarrier)(item_actor);
  if (pCVar5 != this_ptr->owner) {
    in_stack_fffffcd4 = 0;
    (*in_stack_00000014->vtable->onDropped)(in_stack_00000014,(CVector3f *)0x0);
    if (this_ptr->owner != (CDemonActor *)0x0) {
      (*in_stack_00000014->vtable->pickup)(in_stack_00000014,this_ptr->owner);
    }
  }
  if ((((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) && (in_stack_00000040 != 0)) &&
     (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_128 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(in_stack_0000003c);
    core_inv_cpp_getItemIconName_FUN_004fcf70(pCStack_ec);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCStack_ec,g_CAmmoClassInfo.name_hash);
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You've found : ");
    pcVar12 = &stack0xfffffbe8;
    do {
      cVar1 = *pcVar6;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    if (pCVar5 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_220 + 4,"%d ",pCVar5[2].health);
      pcVar6 = acStack_218;
      iVar10 = -1;
      pcVar12 = &stack0xfffffbe8;
      do {
        pcVar13 = pcVar12;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar12 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar10 = -1;
    pcVar6 = &stack0xfffffbe8;
    do {
      pcVar12 = pcVar6;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar12 = pcVar6 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    pcVar6 = pcStack_118;
    do {
      cVar1 = *pcVar6;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_dc,"CHealthItem");
    if (iVar10 != 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar6 = &stack0xfffffcf0;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      iVar10 = -1;
      pcVar6 = &stack0xfffffcf4;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar10 = -1;
      pcVar6 = &stack0xfffffcf8;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      iVar10 = -1;
      pcVar6 = &stack0xfffffcfc;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to cycle through your inventory.  Press ");
      iVar10 = -1;
      pcVar6 = &stack0xfffffd00;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      iVar10 = -1;
      pcVar6 = &stack0xfffffd04;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to use this item to restore some health.");
      iVar10 = -1;
      pcVar6 = &stack0xfffffd08;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_bc,"CGasMask");
    if (iVar10 != 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar6 = &stack0xfffffd10;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      iVar10 = -1;
      pcVar6 = &stack0xfffffd14;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar10 = -1;
      pcVar6 = &stack0xfffffd18;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      iVar10 = -1;
      pcVar6 = &stack0xfffffd1c;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to cycle through your inventory.  Press ");
      iVar10 = -1;
      pcVar6 = &stack0xfffffd20;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      iVar10 = -1;
      pcVar6 = &stack0xfffffd24;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to put on and off the mask.");
      iVar10 = -1;
      pcVar6 = &stack0xfffffd28;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_9c,"CKeyActor");
    if (iVar10 != 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("With your guns put away, press ");
      pcVar6 = &stack0xfffffd30;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_fire);
      iVar10 = -1;
      pcVar6 = &stack0xfffffd34;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to open a previously locked door.");
      iVar10 = -1;
      pcVar6 = &stack0xfffffd38;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_8c,"CBoxActor");
    if (iVar10 != 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar6 = acStack_2c0;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      iVar10 = -1;
      pcVar6 = acStack_2c0 + 4;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar10 = -1;
      pcVar6 = acStack_2b8;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      iVar10 = -1;
      pcVar6 = acStack_2b4;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          (" to cycle through your inventory.  Press ");
      iVar10 = -1;
      pcVar6 = acStack_2b0;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      iVar10 = -1;
      pcVar6 = acStack_2ac;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" to use this item.");
      iVar10 = -1;
      pcVar6 = acStack_2a8;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCStack_6c,"CAmmo");
    if (iVar10 != 0) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCStack_6c,g_CAmmoClassInfo.name_hash);
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430((char *)&pCVar5[2].location.position.y)
      ;
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("This ammo is for your ")
      ;
      pcVar6 = acStack_298;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5);
      iVar10 = -1;
      pcVar6 = acStack_298 + 4;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".  Select your ");
      iVar10 = -1;
      pcVar6 = acStack_290;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5);
      iVar10 = -1;
      pcVar6 = acStack_28c;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" with ");
      iVar10 = -1;
      pcVar6 = acStack_288;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_weapon);
      iVar10 = -1;
      pcVar6 = acStack_284;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar10 = -1;
      pcVar6 = acStack_280;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_weapon);
      iVar10 = -1;
      pcVar6 = acStack_27c;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      iVar10 = -1;
      pcVar6 = acStack_278;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      g_CurrentDebugFilename = "..\\core\\inv.cpp";
      g_CurrentDebugLine = 0x219;
      if (pCVar5 != (CDemonActor *)0x0) {
        (*pCVar5->vtable->dtor)
                  (pCVar5,2,in_stack_fffffcd4,in_stack_fffffc8c,in_stack_fffffc90,in_stack_fffffc94,
                   in_stack_fffffc98,in_stack_fffffc9c,in_stack_fffffca0);
      }
    }
    iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000010,"CWeapon");
    if (iVar10 != 0) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (in_stack_00000014,g_CWeaponClassInfo.name_hash);
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select your ");
      pcVar6 = acStack_220;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5);
      iVar10 = -1;
      pcVar6 = acStack_220 + 4;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" with ");
      iVar10 = -1;
      pcVar6 = acStack_218;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_weapon);
      iVar10 = -1;
      pcVar6 = acStack_218 + 4;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar10 = -1;
      pcVar6 = acStack_210;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_weapon);
      iVar10 = -1;
      pcVar6 = acStack_20c;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      iVar10 = -1;
      pcVar6 = acStack_208;
      do {
        pcVar13 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar6 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,&stack0xfffffcf8,10.0);
    pcVar6 = acStack_204;
    pcVar12 = this_ptr->message_text;
    do {
      cVar1 = *pcVar6;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar10 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                       (g_SmallEditorFont,this_ptr->message_text);
    this_ptr->message_display_timer = (float)iVar10 * (float)DOUBLE_006307e2;
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_0000003c,g_CAmmoClassInfo.name_hash)
  ;
  if (pCVar5 != (CDemonActor *)0x0) {
    iVar10 = 0;
    core_ammo_cpp_CAmmo_FUN_00410fd0();
    pCVar11 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar11->items[0],g_CAmmoClassInfo.name_hash);
        if (((pCVar7 != (CDemonActor *)0x0) &&
            (iVar8 = crt_string_c_strcmp_FUN_005fef20
                               ((char *)show_tutorial_message,(char *)&pCVar7[2].location.position.y
                               ), this_ptr_00 = g_CConsolePtr, iVar8 == 0)) &&
           (pCVar7[2].field6_0x68 == *(int *)(in_stack_00000018 + 0x318))) {
          pCVar7[2].health = pCVar7[2].health + *(int *)(in_stack_00000018 + 0x314);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"Found existing ammo, but no weapon\n");
          core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
          return 1;
        }
        iVar10 = iVar10 + 1;
        pCVar11 = (CInventory *)&pCVar11->owner;
        in_stack_00000010 = (CDemonActor *)&pCVar5[2].location.position.y;
      } while (iVar10 < this_ptr->item_count);
    }
    iVar10 = 0;
    pCVar11 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar11->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar8 = crt_string_c_stricmp_FUN_005fe7f0((char *)(in_stack_00000018 + 0x2d4),pcVar6);
          if (iVar8 == 0) {
            iVar10 = 0;
            pCVar11 = this_ptr;
            if (0 < this_ptr->item_count) {
              do {
                pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                                   (pCVar11->items[0],g_CWeaponClassInfo.name_hash);
                if (pCVar5 != (CDemonActor *)0x0) {
                  pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
                  iVar8 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000010->actor_name,pcVar6);
                  uVar4 = g_CTommyGunClassInfo.name_hash;
                  if ((iVar8 == 0) &&
                     (*(int *)(pCVar5[4].actor_name + 0xc) == *(int *)(in_stack_00000018 + 0x318)))
                  {
                    *(int *)(pCVar5[4].actor_name + 8) =
                         *(int *)(pCVar5[4].actor_name + 8) + *(int *)(in_stack_00000018 + 0x314);
                    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,uVar4);
                    if ((pCVar5 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar5[4].actor_name + 8))
                       ) {
                      pCVar5[4].actor_name[8] = -0x38;
                      pCVar5[4].actor_name[9] = '\0';
                      pCVar5[4].actor_name[10] = '\0';
                      pCVar5[4].actor_name[0xb] = '\0';
                    }
                    core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                              (g_CDemonMissionPtr);
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"Found weapon to put this ammo into\n");
                    return 1;
                  }
                }
                iVar10 = iVar10 + 1;
                pCVar11 = (CInventory *)&pCVar11->owner;
              } while (iVar10 < this_ptr->item_count);
            }
            pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430
                               ((char *)(in_stack_00000018 + 0x2d4));
            core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
            (*pCVar5->vtable->setup)(pCVar5);
            *(undefined4 *)(pCVar5[4].actor_name + 8) = *(undefined4 *)(in_stack_0000002c + 0x314);
            *(undefined4 *)(pCVar5[4].actor_name + 0xc) = *(undefined4 *)(in_stack_0000002c + 0x318)
            ;
            (*pCVar5->vtable->pickup)(pCVar5,this_ptr->owner);
            this_ptr->items[this_ptr->item_count] = pCVar5;
            pCVar3 = g_CDemonMissionPtr;
            this_ptr->item_count = this_ptr->item_count + 1;
            core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3);
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
            return 1;
          }
        }
        iVar10 = iVar10 + 1;
        pCVar11 = (CInventory *)&pCVar11->owner;
      } while (iVar10 < this_ptr->item_count);
    }
    iVar10 = crt_string_c_strcmp_FUN_005fef20
                       ((char *)(in_stack_00000018 + 0x2d4),"CDynamite");
    if (iVar10 == 0) {
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430("CDynamite");
      core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
      (*pCVar5->vtable->setup)(pCVar5);
      *(undefined4 *)(pCVar5[4].actor_name + 8) = *(undefined4 *)((int)in_stack_00000030 + 0x314);
      (*pCVar5->vtable->pickup)(pCVar5,this_ptr->owner);
      core_actor_cpp_deleteActor_FUN_00408820(in_stack_00000070);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr,pCVar5,1);
      return 1;
    }
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000048,g_CWeaponClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,g_CMeleeClassInfo.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      this_ptr->items[this_ptr->item_count] = in_stack_00000048;
      pCVar3 = g_CDemonMissionPtr;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3);
      (*in_stack_00000054->vtable->onPickup)(in_stack_00000054,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar10 = 0;
    if (0 < this_ptr->item_count) {
      in_stack_00000028 = this_ptr;
      do {
        pCVar7 = in_stack_00000028->items[0];
        pCVar9 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar7,g_CWeaponClassInfo.name_hash);
        if (pCVar9 != (CDemonActor *)0x0) {
          core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar9);
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar8 = crt_string_c_strcmp_FUN_005fef20(pcVar6,pCVar7->actor_name);
          uVar4 = g_CTommyGunClassInfo.name_hash;
          if ((iVar8 == 0) &&
             (*(int *)(pCVar9[4].actor_name + 0xc) == *(int *)(pCVar5[4].actor_name + 0xc))) {
            *(int *)(pCVar9[4].actor_name + 8) =
                 *(int *)(pCVar9[4].actor_name + 8) + *(int *)(pCVar5[4].actor_name + 8);
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar9,uVar4);
            if ((pCVar5 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar5[4].actor_name + 8))) {
              pCVar5[4].actor_name[8] = -0x38;
              pCVar5[4].actor_name[9] = '\0';
              pCVar5[4].actor_name[10] = '\0';
              pCVar5[4].actor_name[0xb] = '\0';
            }
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
            return 1;
          }
        }
        iVar10 = iVar10 + 1;
        in_stack_00000028 = (CInventory *)&in_stack_00000028->owner;
      } while (iVar10 < this_ptr->item_count);
    }
    bVar2 = false;
    in_stack_0000002c = 0;
    if (0 < this_ptr->item_count) {
      in_stack_00000030 = this_ptr;
      do {
        pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000030->items[0],g_CAmmoClassInfo.name_hash);
        if (pCVar7 != (CDemonActor *)0x0) {
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar10 = crt_string_c_strcmp_FUN_005fef20((char *)&pCVar7[2].location.position.y,pcVar6);
          if (iVar10 == 0) {
            pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            pCVar9 = core_actor_cpp_createActorByName_FUN_0040c430(pcVar6);
            core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
            (*pCVar9->vtable->setup)(pCVar9);
            *(int *)(pCVar9[4].actor_name + 8) = pCVar7[2].health;
            *(int *)(pCVar9[4].actor_name + 0xc) = pCVar7[2].field6_0x68;
            (*pCVar9->vtable->pickup)(pCVar9,this_ptr->owner);
            (*pCVar9->vtable->onPickup)(pCVar9,(CDemonActor *)this_ptr);
            core_actor_cpp_deleteActor_FUN_00408820(*(CDemonActor **)(in_stack_00000024 + 0xc));
            *(CDemonActor **)((int)in_stack_00000028 + 0xc) = pCVar9;
            core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n");
          }
        }
        in_stack_00000030 = (CInventory *)&in_stack_00000030->owner;
        in_stack_0000002c = in_stack_0000002c + 1;
      } while (in_stack_0000002c < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = in_stack_00000050;
  pCVar3 = g_CDemonMissionPtr;
  this_ptr->item_count = this_ptr->item_count + 1;
  core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(pCVar3,in_stack_00000050);
  (*in_stack_00000050->vtable->onPickup)(in_stack_00000050,(CDemonActor *)this_ptr);
  if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,pCVar5,5,1);
  }
  return 1;
}


// Assembly code:
// 004fd600: PUSH EBX
//   Label: core_inv.cpp_CInventory_addItem_FUN_004fd600
// 004fd601: PUSH ESI
// 004fd602: PUSH EDI
// 004fd603: PUSH EBP
// 004fd604: SUB ESP,0x324
// 004fd60a: MOV EBP,dword ptr [ESP + 0x338]
//   XREF to: Stack[0x4] (READ)
// 004fd611: CMP dword ptr [EBP + 0x8],0x64
// 004fd615: JL 0x004fd624
//   XREF to: 004fd624 (CONDITIONAL_JUMP)
// 004fd617: XOR EAX,EAX
// 004fd619: ADD ESP,0x324
// 004fd61f: POP EBP
// 004fd620: POP EDI
// 004fd621: POP ESI
// 004fd622: POP EBX
// 004fd623: RET
// 004fd624: MOV ECX,dword ptr [ESP + 0x33c]
//   Label: LAB_004fd624
//   XREF to: Stack[0x8] (READ)
// 004fd62b: MOV EAX,dword ptr [ESP + 0x33c]
//   XREF to: Stack[0x8] (READ)
// 004fd632: PUSH ECX
// 004fd633: MOV EAX,dword ptr [EAX + 0x154]
// 004fd639: CALL dword ptr [EAX + 0x8c]
// 004fd63f: MOV EBX,dword ptr [EBP + 0x4]
// 004fd642: ADD ESP,0x4
// 004fd645: CMP EAX,EBX
// 004fd647: JZ 0x004fd681
//   XREF to: 004fd681 (CONDITIONAL_JUMP)
// 004fd649: PUSH 0x0
// 004fd64b: MOV ESI,dword ptr [ESP + 0x340]
// 004fd652: MOV EAX,dword ptr [ESP + 0x340]
// 004fd659: PUSH ESI
// 004fd65a: MOV EAX,dword ptr [EAX + 0x154]
// 004fd660: CALL dword ptr [EAX + 0x84]
// 004fd666: MOV EDI,dword ptr [EBP + 0x4]
// 004fd669: ADD ESP,0x8
// 004fd66c: TEST EDI,EDI
// 004fd66e: JZ 0x004fd681
//   XREF to: 004fd681 (CONDITIONAL_JUMP)
// 004fd670: PUSH EDI
// 004fd671: MOV EAX,dword ptr [ESI + 0x154]
// 004fd677: PUSH ESI
// 004fd678: CALL dword ptr [EAX + 0x80]
// 004fd67e: ADD ESP,0x8
// 004fd681: MOV EBX,dword ptr [0x02db87d0]
//   Label: LAB_004fd681
//   XREF to: 02db87d0 (READ)
// 004fd687: MOV EAX,dword ptr [EBP + 0x4]
// 004fd68a: CMP EAX,dword ptr [EBX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004fd691: JNZ 0x004fe1ea
//   XREF to: 004fe1ea (CONDITIONAL_JUMP)
// 004fd697: CMP dword ptr [ESP + 0x340],0x0
// 004fd69f: JZ 0x004fe1ea
//   XREF to: 004fe1ea (CONDITIONAL_JUMP)
// 004fd6a5: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fd6aa: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 004fd6b1: JNZ 0x004fe1ea
//   XREF to: 004fe1ea (CONDITIONAL_JUMP)
// 004fd6b7: MOV ECX,dword ptr [ESP + 0x33c]
// 004fd6be: PUSH ECX
// 004fd6bf: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 004fd6c4: ADD ESP,0x4
// 004fd6c7: MOV EBX,dword ptr [ESP + 0x33c]
// 004fd6ce: PUSH EBX
// 004fd6cf: MOV dword ptr [ESP + 0x304],EAX
// 004fd6d6: CALL core_inv.cpp_getItemIconName_FUN_004fcf70
//   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
// 004fd6db: ADD ESP,0x4
// 004fd6de: MOV ESI,dword ptr [0x008223a4]
//   XREF to: 008223a4 (READ)
// 004fd6e4: PUSH ESI
// 004fd6e5: PUSH EBX
// 004fd6e6: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fd6eb: ADD ESP,0x8
// 004fd6ee: PUSH 0x6304d2
//   XREF to: 006304d2 (DATA)
// 004fd6f3: MOV EBX,EAX
// 004fd6f5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fd6fa: ADD ESP,0x4
// 004fd6fd: MOV EDI,ESP
// 004fd6ff: MOV ESI,EAX
// 004fd701: PUSH EDI
// 004fd702: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd702
// 004fd704: MOV byte ptr [EDI],AL
// 004fd706: CMP AL,0x0
// 004fd708: JZ 0x004fd71a
//   XREF to: 004fd71a (CONDITIONAL_JUMP)
// 004fd70a: MOV AL,byte ptr [ESI + 0x1]
// 004fd70d: ADD ESI,0x2
// 004fd710: MOV byte ptr [EDI + 0x1],AL
// 004fd713: ADD EDI,0x2
// 004fd716: CMP AL,0x0
// 004fd718: JNZ 0x004fd702
//   XREF to: 004fd702 (CONDITIONAL_JUMP)
// 004fd71a: POP EDI
//   Label: LAB_004fd71a
// 004fd71b: TEST EBX,EBX
// 004fd71d: JZ 0x004fd766
//   XREF to: 004fd766 (CONDITIONAL_JUMP)
// 004fd71f: MOV EAX,dword ptr [EBX + 0x314]
// 004fd725: PUSH EAX
// 004fd726: PUSH 0x6304e2
//   XREF to: 006304e2 (DATA)
// 004fd72b: LEA EAX,[ESP + 0x208]
// 004fd732: PUSH EAX
// 004fd733: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fd738: ADD ESP,0xc
// 004fd73b: LEA ESI,[ESP + 0x200]
// 004fd742: MOV EDI,ESP
// 004fd744: PUSH EDI
// 004fd745: SUB ECX,ECX
// 004fd747: DEC ECX
// 004fd748: MOV AL,0x0
// 004fd74a: SCASB.REPNE ES:EDI
// 004fd74c: DEC EDI
// 004fd74d: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd74d
// 004fd74f: MOV byte ptr [EDI],AL
// 004fd751: CMP AL,0x0
// 004fd753: JZ 0x004fd765
//   XREF to: 004fd765 (CONDITIONAL_JUMP)
// 004fd755: MOV AL,byte ptr [ESI + 0x1]
// 004fd758: ADD ESI,0x2
// 004fd75b: MOV byte ptr [EDI + 0x1],AL
// 004fd75e: ADD EDI,0x2
// 004fd761: CMP AL,0x0
// 004fd763: JNZ 0x004fd74d
//   XREF to: 004fd74d (CONDITIONAL_JUMP)
// 004fd765: POP EDI
//   Label: LAB_004fd765
// 004fd766: MOV ESI,dword ptr [ESP + 0x300]
//   Label: LAB_004fd766
// 004fd76d: MOV EDI,ESP
// 004fd76f: PUSH EDI
// 004fd770: SUB ECX,ECX
// 004fd772: DEC ECX
// 004fd773: MOV AL,0x0
// 004fd775: SCASB.REPNE ES:EDI
// 004fd777: DEC EDI
// 004fd778: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd778
// 004fd77a: MOV byte ptr [EDI],AL
// 004fd77c: CMP AL,0x0
// 004fd77e: JZ 0x004fd790
//   XREF to: 004fd790 (CONDITIONAL_JUMP)
// 004fd780: MOV AL,byte ptr [ESI + 0x1]
// 004fd783: ADD ESI,0x2
// 004fd786: MOV byte ptr [EDI + 0x1],AL
// 004fd789: ADD EDI,0x2
// 004fd78c: CMP AL,0x0
// 004fd78e: JNZ 0x004fd778
//   XREF to: 004fd778 (CONDITIONAL_JUMP)
// 004fd790: POP EDI
//   Label: LAB_004fd790
// 004fd791: PUSH 0x6304e6
//   XREF to: 006304e6 (DATA)
// 004fd796: MOV EDX,dword ptr [ESP + 0x340]
// 004fd79d: XOR AH,AH
// 004fd79f: PUSH EDX
// 004fd7a0: MOV byte ptr [ESP + 0x108],AH
// 004fd7a7: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fd7ac: ADD ESP,0x8
// 004fd7af: TEST EAX,EAX
// 004fd7b1: JZ 0x004fd949
//   XREF to: 004fd949 (CONDITIONAL_JUMP)
// 004fd7b7: PUSH 0x6304f2
//   XREF to: 006304f2 (DATA)
// 004fd7bc: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fd7c1: ADD ESP,0x4
// 004fd7c4: LEA EDI,[ESP + 0x100]
// 004fd7cb: MOV ESI,EAX
// 004fd7cd: PUSH EDI
// 004fd7ce: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd7ce
// 004fd7d0: MOV byte ptr [EDI],AL
// 004fd7d2: CMP AL,0x0
// 004fd7d4: JZ 0x004fd7e6
//   XREF to: 004fd7e6 (CONDITIONAL_JUMP)
// 004fd7d6: MOV AL,byte ptr [ESI + 0x1]
// 004fd7d9: ADD ESI,0x2
// 004fd7dc: MOV byte ptr [EDI + 0x1],AL
// 004fd7df: ADD EDI,0x2
// 004fd7e2: CMP AL,0x0
// 004fd7e4: JNZ 0x004fd7ce
//   XREF to: 004fd7ce (CONDITIONAL_JUMP)
// 004fd7e6: POP EDI
//   Label: LAB_004fd7e6
// 004fd7e7: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fd7ec: MOV ECX,dword ptr [EAX + 0x84]
//   XREF to: 02d81b20 (READ)
// 004fd7f2: PUSH ECX
// 004fd7f3: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fd7f8: ADD ESP,0x4
// 004fd7fb: LEA EDI,[ESP + 0x100]
// 004fd802: MOV ESI,EAX
// 004fd804: PUSH EDI
// 004fd805: SUB ECX,ECX
// 004fd807: DEC ECX
// 004fd808: MOV AL,0x0
// 004fd80a: SCASB.REPNE ES:EDI
// 004fd80c: DEC EDI
// 004fd80d: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd80d
// 004fd80f: MOV byte ptr [EDI],AL
// 004fd811: CMP AL,0x0
// 004fd813: JZ 0x004fd825
//   XREF to: 004fd825 (CONDITIONAL_JUMP)
// 004fd815: MOV AL,byte ptr [ESI + 0x1]
// 004fd818: ADD ESI,0x2
// 004fd81b: MOV byte ptr [EDI + 0x1],AL
// 004fd81e: ADD EDI,0x2
// 004fd821: CMP AL,0x0
// 004fd823: JNZ 0x004fd80d
//   XREF to: 004fd80d (CONDITIONAL_JUMP)
// 004fd825: POP EDI
//   Label: LAB_004fd825
// 004fd826: PUSH 0x6304f9
//   XREF to: 006304f9 (DATA)
// 004fd82b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fd830: ADD ESP,0x4
// 004fd833: LEA EDI,[ESP + 0x100]
// 004fd83a: MOV ESI,EAX
// 004fd83c: PUSH EDI
// 004fd83d: SUB ECX,ECX
// 004fd83f: DEC ECX
// 004fd840: MOV AL,0x0
// 004fd842: SCASB.REPNE ES:EDI
// 004fd844: DEC EDI
// 004fd845: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd845
// 004fd847: MOV byte ptr [EDI],AL
// 004fd849: CMP AL,0x0
// 004fd84b: JZ 0x004fd85d
//   XREF to: 004fd85d (CONDITIONAL_JUMP)
// 004fd84d: MOV AL,byte ptr [ESI + 0x1]
// 004fd850: ADD ESI,0x2
// 004fd853: MOV byte ptr [EDI + 0x1],AL
// 004fd856: ADD EDI,0x2
// 004fd859: CMP AL,0x0
// 004fd85b: JNZ 0x004fd845
//   XREF to: 004fd845 (CONDITIONAL_JUMP)
// 004fd85d: POP EDI
//   Label: LAB_004fd85d
// 004fd85e: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fd863: MOV EBX,dword ptr [EAX + 0x88]
//   XREF to: 02d81b24 (READ)
// 004fd869: PUSH EBX
// 004fd86a: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fd86f: ADD ESP,0x4
// 004fd872: LEA EDI,[ESP + 0x100]
// 004fd879: MOV ESI,EAX
// 004fd87b: PUSH EDI
// 004fd87c: SUB ECX,ECX
// 004fd87e: DEC ECX
// 004fd87f: MOV AL,0x0
// 004fd881: SCASB.REPNE ES:EDI
// 004fd883: DEC EDI
// 004fd884: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd884
// 004fd886: MOV byte ptr [EDI],AL
// 004fd888: CMP AL,0x0
// 004fd88a: JZ 0x004fd89c
//   XREF to: 004fd89c (CONDITIONAL_JUMP)
// 004fd88c: MOV AL,byte ptr [ESI + 0x1]
// 004fd88f: ADD ESI,0x2
// 004fd892: MOV byte ptr [EDI + 0x1],AL
// 004fd895: ADD EDI,0x2
// 004fd898: CMP AL,0x0
// 004fd89a: JNZ 0x004fd884
//   XREF to: 004fd884 (CONDITIONAL_JUMP)
// 004fd89c: POP EDI
//   Label: LAB_004fd89c
// 004fd89d: PUSH 0x6304ff
//   XREF to: 006304ff (DATA)
// 004fd8a2: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fd8a7: ADD ESP,0x4
// 004fd8aa: LEA EDI,[ESP + 0x100]
// 004fd8b1: MOV ESI,EAX
// 004fd8b3: PUSH EDI
// 004fd8b4: SUB ECX,ECX
// 004fd8b6: DEC ECX
// 004fd8b7: MOV AL,0x0
// 004fd8b9: SCASB.REPNE ES:EDI
// 004fd8bb: DEC EDI
// 004fd8bc: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd8bc
// 004fd8be: MOV byte ptr [EDI],AL
// 004fd8c0: CMP AL,0x0
// 004fd8c2: JZ 0x004fd8d4
//   XREF to: 004fd8d4 (CONDITIONAL_JUMP)
// 004fd8c4: MOV AL,byte ptr [ESI + 0x1]
// 004fd8c7: ADD ESI,0x2
// 004fd8ca: MOV byte ptr [EDI + 0x1],AL
// 004fd8cd: ADD EDI,0x2
// 004fd8d0: CMP AL,0x0
// 004fd8d2: JNZ 0x004fd8bc
//   XREF to: 004fd8bc (CONDITIONAL_JUMP)
// 004fd8d4: POP EDI
//   Label: LAB_004fd8d4
// 004fd8d5: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fd8da: MOV ESI,dword ptr [EAX + 0x4c]
//   XREF to: 02d81ae8 (READ)
// 004fd8dd: PUSH ESI
// 004fd8de: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fd8e3: ADD ESP,0x4
// 004fd8e6: LEA EDI,[ESP + 0x100]
// 004fd8ed: MOV ESI,EAX
// 004fd8ef: PUSH EDI
// 004fd8f0: SUB ECX,ECX
// 004fd8f2: DEC ECX
// 004fd8f3: MOV AL,0x0
// 004fd8f5: SCASB.REPNE ES:EDI
// 004fd8f7: DEC EDI
// 004fd8f8: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd8f8
// 004fd8fa: MOV byte ptr [EDI],AL
// 004fd8fc: CMP AL,0x0
// 004fd8fe: JZ 0x004fd910
//   XREF to: 004fd910 (CONDITIONAL_JUMP)
// 004fd900: MOV AL,byte ptr [ESI + 0x1]
// 004fd903: ADD ESI,0x2
// 004fd906: MOV byte ptr [EDI + 0x1],AL
// 004fd909: ADD EDI,0x2
// 004fd90c: CMP AL,0x0
// 004fd90e: JNZ 0x004fd8f8
//   XREF to: 004fd8f8 (CONDITIONAL_JUMP)
// 004fd910: POP EDI
//   Label: LAB_004fd910
// 004fd911: PUSH 0x630529
//   XREF to: 00630529 (DATA)
// 004fd916: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fd91b: ADD ESP,0x4
// 004fd91e: LEA EDI,[ESP + 0x100]
// 004fd925: MOV ESI,EAX
// 004fd927: PUSH EDI
// 004fd928: SUB ECX,ECX
// 004fd92a: DEC ECX
// 004fd92b: MOV AL,0x0
// 004fd92d: SCASB.REPNE ES:EDI
// 004fd92f: DEC EDI
// 004fd930: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd930
// 004fd932: MOV byte ptr [EDI],AL
// 004fd934: CMP AL,0x0
// 004fd936: JZ 0x004fd948
//   XREF to: 004fd948 (CONDITIONAL_JUMP)
// 004fd938: MOV AL,byte ptr [ESI + 0x1]
// 004fd93b: ADD ESI,0x2
// 004fd93e: MOV byte ptr [EDI + 0x1],AL
// 004fd941: ADD EDI,0x2
// 004fd944: CMP AL,0x0
// 004fd946: JNZ 0x004fd930
//   XREF to: 004fd930 (CONDITIONAL_JUMP)
// 004fd948: POP EDI
//   Label: LAB_004fd948
// 004fd949: PUSH 0x630553
//   Label: LAB_004fd949
//   XREF to: 00630553 (DATA)
// 004fd94e: MOV EDI,dword ptr [ESP + 0x340]
// 004fd955: PUSH EDI
// 004fd956: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fd95b: ADD ESP,0x8
// 004fd95e: TEST EAX,EAX
// 004fd960: JZ 0x004fdaf8
//   XREF to: 004fdaf8 (CONDITIONAL_JUMP)
// 004fd966: PUSH 0x63055c
//   XREF to: 0063055c (DATA)
// 004fd96b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fd970: ADD ESP,0x4
// 004fd973: LEA EDI,[ESP + 0x100]
// 004fd97a: MOV ESI,EAX
// 004fd97c: PUSH EDI
// 004fd97d: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd97d
// 004fd97f: MOV byte ptr [EDI],AL
// 004fd981: CMP AL,0x0
// 004fd983: JZ 0x004fd995
//   XREF to: 004fd995 (CONDITIONAL_JUMP)
// 004fd985: MOV AL,byte ptr [ESI + 0x1]
// 004fd988: ADD ESI,0x2
// 004fd98b: MOV byte ptr [EDI + 0x1],AL
// 004fd98e: ADD EDI,0x2
// 004fd991: CMP AL,0x0
// 004fd993: JNZ 0x004fd97d
//   XREF to: 004fd97d (CONDITIONAL_JUMP)
// 004fd995: POP EDI
//   Label: LAB_004fd995
// 004fd996: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fd99b: MOV EDX,dword ptr [EAX + 0x84]
//   XREF to: 02d81b20 (READ)
// 004fd9a1: PUSH EDX
// 004fd9a2: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fd9a7: ADD ESP,0x4
// 004fd9aa: LEA EDI,[ESP + 0x100]
// 004fd9b1: MOV ESI,EAX
// 004fd9b3: PUSH EDI
// 004fd9b4: SUB ECX,ECX
// 004fd9b6: DEC ECX
// 004fd9b7: MOV AL,0x0
// 004fd9b9: SCASB.REPNE ES:EDI
// 004fd9bb: DEC EDI
// 004fd9bc: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd9bc
// 004fd9be: MOV byte ptr [EDI],AL
// 004fd9c0: CMP AL,0x0
// 004fd9c2: JZ 0x004fd9d4
//   XREF to: 004fd9d4 (CONDITIONAL_JUMP)
// 004fd9c4: MOV AL,byte ptr [ESI + 0x1]
// 004fd9c7: ADD ESI,0x2
// 004fd9ca: MOV byte ptr [EDI + 0x1],AL
// 004fd9cd: ADD EDI,0x2
// 004fd9d0: CMP AL,0x0
// 004fd9d2: JNZ 0x004fd9bc
//   XREF to: 004fd9bc (CONDITIONAL_JUMP)
// 004fd9d4: POP EDI
//   Label: LAB_004fd9d4
// 004fd9d5: PUSH 0x630563
//   XREF to: 00630563 (DATA)
// 004fd9da: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fd9df: ADD ESP,0x4
// 004fd9e2: LEA EDI,[ESP + 0x100]
// 004fd9e9: MOV ESI,EAX
// 004fd9eb: PUSH EDI
// 004fd9ec: SUB ECX,ECX
// 004fd9ee: DEC ECX
// 004fd9ef: MOV AL,0x0
// 004fd9f1: SCASB.REPNE ES:EDI
// 004fd9f3: DEC EDI
// 004fd9f4: MOV AL,byte ptr [ESI]
//   Label: LAB_004fd9f4
// 004fd9f6: MOV byte ptr [EDI],AL
// 004fd9f8: CMP AL,0x0
// 004fd9fa: JZ 0x004fda0c
//   XREF to: 004fda0c (CONDITIONAL_JUMP)
// 004fd9fc: MOV AL,byte ptr [ESI + 0x1]
// 004fd9ff: ADD ESI,0x2
// 004fda02: MOV byte ptr [EDI + 0x1],AL
// 004fda05: ADD EDI,0x2
// 004fda08: CMP AL,0x0
// 004fda0a: JNZ 0x004fd9f4
//   XREF to: 004fd9f4 (CONDITIONAL_JUMP)
// 004fda0c: POP EDI
//   Label: LAB_004fda0c
// 004fda0d: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fda12: MOV ECX,dword ptr [EAX + 0x88]
//   XREF to: 02d81b24 (READ)
// 004fda18: PUSH ECX
// 004fda19: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fda1e: ADD ESP,0x4
// 004fda21: LEA EDI,[ESP + 0x100]
// 004fda28: MOV ESI,EAX
// 004fda2a: PUSH EDI
// 004fda2b: SUB ECX,ECX
// 004fda2d: DEC ECX
// 004fda2e: MOV AL,0x0
// 004fda30: SCASB.REPNE ES:EDI
// 004fda32: DEC EDI
// 004fda33: MOV AL,byte ptr [ESI]
//   Label: LAB_004fda33
// 004fda35: MOV byte ptr [EDI],AL
// 004fda37: CMP AL,0x0
// 004fda39: JZ 0x004fda4b
//   XREF to: 004fda4b (CONDITIONAL_JUMP)
// 004fda3b: MOV AL,byte ptr [ESI + 0x1]
// 004fda3e: ADD ESI,0x2
// 004fda41: MOV byte ptr [EDI + 0x1],AL
// 004fda44: ADD EDI,0x2
// 004fda47: CMP AL,0x0
// 004fda49: JNZ 0x004fda33
//   XREF to: 004fda33 (CONDITIONAL_JUMP)
// 004fda4b: POP EDI
//   Label: LAB_004fda4b
// 004fda4c: PUSH 0x630569
//   XREF to: 00630569 (DATA)
// 004fda51: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fda56: ADD ESP,0x4
// 004fda59: LEA EDI,[ESP + 0x100]
// 004fda60: MOV ESI,EAX
// 004fda62: PUSH EDI
// 004fda63: SUB ECX,ECX
// 004fda65: DEC ECX
// 004fda66: MOV AL,0x0
// 004fda68: SCASB.REPNE ES:EDI
// 004fda6a: DEC EDI
// 004fda6b: MOV AL,byte ptr [ESI]
//   Label: LAB_004fda6b
// 004fda6d: MOV byte ptr [EDI],AL
// 004fda6f: CMP AL,0x0
// 004fda71: JZ 0x004fda83
//   XREF to: 004fda83 (CONDITIONAL_JUMP)
// 004fda73: MOV AL,byte ptr [ESI + 0x1]
// 004fda76: ADD ESI,0x2
// 004fda79: MOV byte ptr [EDI + 0x1],AL
// 004fda7c: ADD EDI,0x2
// 004fda7f: CMP AL,0x0
// 004fda81: JNZ 0x004fda6b
//   XREF to: 004fda6b (CONDITIONAL_JUMP)
// 004fda83: POP EDI
//   Label: LAB_004fda83
// 004fda84: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fda89: MOV EBX,dword ptr [EAX + 0x4c]
//   XREF to: 02d81ae8 (READ)
// 004fda8c: PUSH EBX
// 004fda8d: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fda92: ADD ESP,0x4
// 004fda95: LEA EDI,[ESP + 0x100]
// 004fda9c: MOV ESI,EAX
// 004fda9e: PUSH EDI
// 004fda9f: SUB ECX,ECX
// 004fdaa1: DEC ECX
// 004fdaa2: MOV AL,0x0
// 004fdaa4: SCASB.REPNE ES:EDI
// 004fdaa6: DEC EDI
// 004fdaa7: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdaa7
// 004fdaa9: MOV byte ptr [EDI],AL
// 004fdaab: CMP AL,0x0
// 004fdaad: JZ 0x004fdabf
//   XREF to: 004fdabf (CONDITIONAL_JUMP)
// 004fdaaf: MOV AL,byte ptr [ESI + 0x1]
// 004fdab2: ADD ESI,0x2
// 004fdab5: MOV byte ptr [EDI + 0x1],AL
// 004fdab8: ADD EDI,0x2
// 004fdabb: CMP AL,0x0
// 004fdabd: JNZ 0x004fdaa7
//   XREF to: 004fdaa7 (CONDITIONAL_JUMP)
// 004fdabf: POP EDI
//   Label: LAB_004fdabf
// 004fdac0: PUSH 0x630593
//   XREF to: 00630593 (DATA)
// 004fdac5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdaca: ADD ESP,0x4
// 004fdacd: LEA EDI,[ESP + 0x100]
// 004fdad4: MOV ESI,EAX
// 004fdad6: PUSH EDI
// 004fdad7: SUB ECX,ECX
// 004fdad9: DEC ECX
// 004fdada: MOV AL,0x0
// 004fdadc: SCASB.REPNE ES:EDI
// 004fdade: DEC EDI
// 004fdadf: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdadf
// 004fdae1: MOV byte ptr [EDI],AL
// 004fdae3: CMP AL,0x0
// 004fdae5: JZ 0x004fdaf7
//   XREF to: 004fdaf7 (CONDITIONAL_JUMP)
// 004fdae7: MOV AL,byte ptr [ESI + 0x1]
// 004fdaea: ADD ESI,0x2
// 004fdaed: MOV byte ptr [EDI + 0x1],AL
// 004fdaf0: ADD EDI,0x2
// 004fdaf3: CMP AL,0x0
// 004fdaf5: JNZ 0x004fdadf
//   XREF to: 004fdadf (CONDITIONAL_JUMP)
// 004fdaf7: POP EDI
//   Label: LAB_004fdaf7
// 004fdaf8: PUSH 0x6305b0
//   Label: LAB_004fdaf8
//   XREF to: 006305b0 (DATA)
// 004fdafd: MOV ESI,dword ptr [ESP + 0x340]
// 004fdb04: PUSH ESI
// 004fdb05: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fdb0a: ADD ESP,0x8
// 004fdb0d: TEST EAX,EAX
// 004fdb0f: JZ 0x004fdbb9
//   XREF to: 004fdbb9 (CONDITIONAL_JUMP)
// 004fdb15: PUSH 0x6305ba
//   XREF to: 006305ba (DATA)
// 004fdb1a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdb1f: ADD ESP,0x4
// 004fdb22: LEA EDI,[ESP + 0x100]
// 004fdb29: MOV ESI,EAX
// 004fdb2b: PUSH EDI
// 004fdb2c: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdb2c
// 004fdb2e: MOV byte ptr [EDI],AL
// 004fdb30: CMP AL,0x0
// 004fdb32: JZ 0x004fdb44
//   XREF to: 004fdb44 (CONDITIONAL_JUMP)
// 004fdb34: MOV AL,byte ptr [ESI + 0x1]
// 004fdb37: ADD ESI,0x2
// 004fdb3a: MOV byte ptr [EDI + 0x1],AL
// 004fdb3d: ADD EDI,0x2
// 004fdb40: CMP AL,0x0
// 004fdb42: JNZ 0x004fdb2c
//   XREF to: 004fdb2c (CONDITIONAL_JUMP)
// 004fdb44: POP EDI
//   Label: LAB_004fdb44
// 004fdb45: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fdb4a: MOV EDI,dword ptr [EAX + 0x48]
//   XREF to: 02d81ae4 (READ)
// 004fdb4d: PUSH EDI
// 004fdb4e: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fdb53: ADD ESP,0x4
// 004fdb56: LEA EDI,[ESP + 0x100]
// 004fdb5d: MOV ESI,EAX
// 004fdb5f: PUSH EDI
// 004fdb60: SUB ECX,ECX
// 004fdb62: DEC ECX
// 004fdb63: MOV AL,0x0
// 004fdb65: SCASB.REPNE ES:EDI
// 004fdb67: DEC EDI
// 004fdb68: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdb68
// 004fdb6a: MOV byte ptr [EDI],AL
// 004fdb6c: CMP AL,0x0
// 004fdb6e: JZ 0x004fdb80
//   XREF to: 004fdb80 (CONDITIONAL_JUMP)
// 004fdb70: MOV AL,byte ptr [ESI + 0x1]
// 004fdb73: ADD ESI,0x2
// 004fdb76: MOV byte ptr [EDI + 0x1],AL
// 004fdb79: ADD EDI,0x2
// 004fdb7c: CMP AL,0x0
// 004fdb7e: JNZ 0x004fdb68
//   XREF to: 004fdb68 (CONDITIONAL_JUMP)
// 004fdb80: POP EDI
//   Label: LAB_004fdb80
// 004fdb81: PUSH 0x6305da
//   XREF to: 006305da (DATA)
// 004fdb86: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdb8b: ADD ESP,0x4
// 004fdb8e: LEA EDI,[ESP + 0x100]
// 004fdb95: MOV ESI,EAX
// 004fdb97: PUSH EDI
// 004fdb98: SUB ECX,ECX
// 004fdb9a: DEC ECX
// 004fdb9b: MOV AL,0x0
// 004fdb9d: SCASB.REPNE ES:EDI
// 004fdb9f: DEC EDI
// 004fdba0: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdba0
// 004fdba2: MOV byte ptr [EDI],AL
// 004fdba4: CMP AL,0x0
// 004fdba6: JZ 0x004fdbb8
//   XREF to: 004fdbb8 (CONDITIONAL_JUMP)
// 004fdba8: MOV AL,byte ptr [ESI + 0x1]
// 004fdbab: ADD ESI,0x2
// 004fdbae: MOV byte ptr [EDI + 0x1],AL
// 004fdbb1: ADD EDI,0x2
// 004fdbb4: CMP AL,0x0
// 004fdbb6: JNZ 0x004fdba0
//   XREF to: 004fdba0 (CONDITIONAL_JUMP)
// 004fdbb8: POP EDI
//   Label: LAB_004fdbb8
// 004fdbb9: PUSH 0x6305fd
//   Label: LAB_004fdbb9
//   XREF to: 006305fd (DATA)
// 004fdbbe: MOV EAX,dword ptr [ESP + 0x340]
// 004fdbc5: PUSH EAX
// 004fdbc6: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fdbcb: ADD ESP,0x8
// 004fdbce: TEST EAX,EAX
// 004fdbd0: JZ 0x004fdd68
//   XREF to: 004fdd68 (CONDITIONAL_JUMP)
// 004fdbd6: PUSH 0x630607
//   XREF to: 00630607 (DATA)
// 004fdbdb: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdbe0: ADD ESP,0x4
// 004fdbe3: LEA EDI,[ESP + 0x100]
// 004fdbea: MOV ESI,EAX
// 004fdbec: PUSH EDI
// 004fdbed: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdbed
// 004fdbef: MOV byte ptr [EDI],AL
// 004fdbf1: CMP AL,0x0
// 004fdbf3: JZ 0x004fdc05
//   XREF to: 004fdc05 (CONDITIONAL_JUMP)
// 004fdbf5: MOV AL,byte ptr [ESI + 0x1]
// 004fdbf8: ADD ESI,0x2
// 004fdbfb: MOV byte ptr [EDI + 0x1],AL
// 004fdbfe: ADD EDI,0x2
// 004fdc01: CMP AL,0x0
// 004fdc03: JNZ 0x004fdbed
//   XREF to: 004fdbed (CONDITIONAL_JUMP)
// 004fdc05: POP EDI
//   Label: LAB_004fdc05
// 004fdc06: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fdc0b: MOV EDX,dword ptr [EAX + 0x84]
//   XREF to: 02d81b20 (READ)
// 004fdc11: PUSH EDX
// 004fdc12: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fdc17: ADD ESP,0x4
// 004fdc1a: LEA EDI,[ESP + 0x100]
// 004fdc21: MOV ESI,EAX
// 004fdc23: PUSH EDI
// 004fdc24: SUB ECX,ECX
// 004fdc26: DEC ECX
// 004fdc27: MOV AL,0x0
// 004fdc29: SCASB.REPNE ES:EDI
// 004fdc2b: DEC EDI
// 004fdc2c: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdc2c
// 004fdc2e: MOV byte ptr [EDI],AL
// 004fdc30: CMP AL,0x0
// 004fdc32: JZ 0x004fdc44
//   XREF to: 004fdc44 (CONDITIONAL_JUMP)
// 004fdc34: MOV AL,byte ptr [ESI + 0x1]
// 004fdc37: ADD ESI,0x2
// 004fdc3a: MOV byte ptr [EDI + 0x1],AL
// 004fdc3d: ADD EDI,0x2
// 004fdc40: CMP AL,0x0
// 004fdc42: JNZ 0x004fdc2c
//   XREF to: 004fdc2c (CONDITIONAL_JUMP)
// 004fdc44: POP EDI
//   Label: LAB_004fdc44
// 004fdc45: PUSH 0x63060e
//   XREF to: 0063060e (DATA)
// 004fdc4a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdc4f: ADD ESP,0x4
// 004fdc52: LEA EDI,[ESP + 0x100]
// 004fdc59: MOV ESI,EAX
// 004fdc5b: PUSH EDI
// 004fdc5c: SUB ECX,ECX
// 004fdc5e: DEC ECX
// 004fdc5f: MOV AL,0x0
// 004fdc61: SCASB.REPNE ES:EDI
// 004fdc63: DEC EDI
// 004fdc64: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdc64
// 004fdc66: MOV byte ptr [EDI],AL
// 004fdc68: CMP AL,0x0
// 004fdc6a: JZ 0x004fdc7c
//   XREF to: 004fdc7c (CONDITIONAL_JUMP)
// 004fdc6c: MOV AL,byte ptr [ESI + 0x1]
// 004fdc6f: ADD ESI,0x2
// 004fdc72: MOV byte ptr [EDI + 0x1],AL
// 004fdc75: ADD EDI,0x2
// 004fdc78: CMP AL,0x0
// 004fdc7a: JNZ 0x004fdc64
//   XREF to: 004fdc64 (CONDITIONAL_JUMP)
// 004fdc7c: POP EDI
//   Label: LAB_004fdc7c
// 004fdc7d: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fdc82: MOV ECX,dword ptr [EAX + 0x88]
//   XREF to: 02d81b24 (READ)
// 004fdc88: PUSH ECX
// 004fdc89: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fdc8e: ADD ESP,0x4
// 004fdc91: LEA EDI,[ESP + 0x100]
// 004fdc98: MOV ESI,EAX
// 004fdc9a: PUSH EDI
// 004fdc9b: SUB ECX,ECX
// 004fdc9d: DEC ECX
// 004fdc9e: MOV AL,0x0
// 004fdca0: SCASB.REPNE ES:EDI
// 004fdca2: DEC EDI
// 004fdca3: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdca3
// 004fdca5: MOV byte ptr [EDI],AL
// 004fdca7: CMP AL,0x0
// 004fdca9: JZ 0x004fdcbb
//   XREF to: 004fdcbb (CONDITIONAL_JUMP)
// 004fdcab: MOV AL,byte ptr [ESI + 0x1]
// 004fdcae: ADD ESI,0x2
// 004fdcb1: MOV byte ptr [EDI + 0x1],AL
// 004fdcb4: ADD EDI,0x2
// 004fdcb7: CMP AL,0x0
// 004fdcb9: JNZ 0x004fdca3
//   XREF to: 004fdca3 (CONDITIONAL_JUMP)
// 004fdcbb: POP EDI
//   Label: LAB_004fdcbb
// 004fdcbc: PUSH 0x630614
//   XREF to: 00630614 (DATA)
// 004fdcc1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdcc6: ADD ESP,0x4
// 004fdcc9: LEA EDI,[ESP + 0x100]
// 004fdcd0: MOV ESI,EAX
// 004fdcd2: PUSH EDI
// 004fdcd3: SUB ECX,ECX
// 004fdcd5: DEC ECX
// 004fdcd6: MOV AL,0x0
// 004fdcd8: SCASB.REPNE ES:EDI
// 004fdcda: DEC EDI
// 004fdcdb: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdcdb
// 004fdcdd: MOV byte ptr [EDI],AL
// 004fdcdf: CMP AL,0x0
// 004fdce1: JZ 0x004fdcf3
//   XREF to: 004fdcf3 (CONDITIONAL_JUMP)
// 004fdce3: MOV AL,byte ptr [ESI + 0x1]
// 004fdce6: ADD ESI,0x2
// 004fdce9: MOV byte ptr [EDI + 0x1],AL
// 004fdcec: ADD EDI,0x2
// 004fdcef: CMP AL,0x0
// 004fdcf1: JNZ 0x004fdcdb
//   XREF to: 004fdcdb (CONDITIONAL_JUMP)
// 004fdcf3: POP EDI
//   Label: LAB_004fdcf3
// 004fdcf4: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fdcf9: MOV EBX,dword ptr [EAX + 0x4c]
//   XREF to: 02d81ae8 (READ)
// 004fdcfc: PUSH EBX
// 004fdcfd: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fdd02: ADD ESP,0x4
// 004fdd05: LEA EDI,[ESP + 0x100]
// 004fdd0c: MOV ESI,EAX
// 004fdd0e: PUSH EDI
// 004fdd0f: SUB ECX,ECX
// 004fdd11: DEC ECX
// 004fdd12: MOV AL,0x0
// 004fdd14: SCASB.REPNE ES:EDI
// 004fdd16: DEC EDI
// 004fdd17: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdd17
// 004fdd19: MOV byte ptr [EDI],AL
// 004fdd1b: CMP AL,0x0
// 004fdd1d: JZ 0x004fdd2f
//   XREF to: 004fdd2f (CONDITIONAL_JUMP)
// 004fdd1f: MOV AL,byte ptr [ESI + 0x1]
// 004fdd22: ADD ESI,0x2
// 004fdd25: MOV byte ptr [EDI + 0x1],AL
// 004fdd28: ADD EDI,0x2
// 004fdd2b: CMP AL,0x0
// 004fdd2d: JNZ 0x004fdd17
//   XREF to: 004fdd17 (CONDITIONAL_JUMP)
// 004fdd2f: POP EDI
//   Label: LAB_004fdd2f
// 004fdd30: PUSH 0x63063e
//   XREF to: 0063063e (DATA)
// 004fdd35: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdd3a: ADD ESP,0x4
// 004fdd3d: LEA EDI,[ESP + 0x100]
// 004fdd44: MOV ESI,EAX
// 004fdd46: PUSH EDI
// 004fdd47: SUB ECX,ECX
// 004fdd49: DEC ECX
// 004fdd4a: MOV AL,0x0
// 004fdd4c: SCASB.REPNE ES:EDI
// 004fdd4e: DEC EDI
// 004fdd4f: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdd4f
// 004fdd51: MOV byte ptr [EDI],AL
// 004fdd53: CMP AL,0x0
// 004fdd55: JZ 0x004fdd67
//   XREF to: 004fdd67 (CONDITIONAL_JUMP)
// 004fdd57: MOV AL,byte ptr [ESI + 0x1]
// 004fdd5a: ADD ESI,0x2
// 004fdd5d: MOV byte ptr [EDI + 0x1],AL
// 004fdd60: ADD EDI,0x2
// 004fdd63: CMP AL,0x0
// 004fdd65: JNZ 0x004fdd4f
//   XREF to: 004fdd4f (CONDITIONAL_JUMP)
// 004fdd67: POP EDI
//   Label: LAB_004fdd67
// 004fdd68: PUSH 0x630651
//   Label: LAB_004fdd68
//   XREF to: 00630651 (DATA)
// 004fdd6d: MOV ESI,dword ptr [ESP + 0x340]
// 004fdd74: PUSH ESI
// 004fdd75: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fdd7a: ADD ESP,0x8
// 004fdd7d: TEST EAX,EAX
// 004fdd7f: JZ 0x004fdfc4
//   XREF to: 004fdfc4 (CONDITIONAL_JUMP)
// 004fdd85: MOV EDI,dword ptr [0x008223a4]
//   XREF to: 008223a4 (READ)
// 004fdd8b: PUSH EDI
// 004fdd8c: PUSH ESI
// 004fdd8d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fdd92: ADD ESP,0x8
// 004fdd95: ADD EAX,0x2d4
// 004fdd9a: PUSH EAX
// 004fdd9b: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004fdda0: ADD ESP,0x4
// 004fdda3: PUSH 0x630657
//   XREF to: 00630657 (DATA)
// 004fdda8: MOV EBX,EAX
// 004fddaa: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fddaf: ADD ESP,0x4
// 004fddb2: LEA EDI,[ESP + 0x100]
// 004fddb9: MOV ESI,EAX
// 004fddbb: PUSH EDI
// 004fddbc: MOV AL,byte ptr [ESI]
//   Label: LAB_004fddbc
// 004fddbe: MOV byte ptr [EDI],AL
// 004fddc0: CMP AL,0x0
// 004fddc2: JZ 0x004fddd4
//   XREF to: 004fddd4 (CONDITIONAL_JUMP)
// 004fddc4: MOV AL,byte ptr [ESI + 0x1]
// 004fddc7: ADD ESI,0x2
// 004fddca: MOV byte ptr [EDI + 0x1],AL
// 004fddcd: ADD EDI,0x2
// 004fddd0: CMP AL,0x0
// 004fddd2: JNZ 0x004fddbc
//   XREF to: 004fddbc (CONDITIONAL_JUMP)
// 004fddd4: POP EDI
//   Label: LAB_004fddd4
// 004fddd5: PUSH EBX
// 004fddd6: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 004fdddb: ADD ESP,0x4
// 004fddde: LEA EDI,[ESP + 0x100]
// 004fdde5: MOV ESI,EAX
// 004fdde7: PUSH EDI
// 004fdde8: SUB ECX,ECX
// 004fddea: DEC ECX
// 004fddeb: MOV AL,0x0
// 004fdded: SCASB.REPNE ES:EDI
// 004fddef: DEC EDI
// 004fddf0: MOV AL,byte ptr [ESI]
//   Label: LAB_004fddf0
// 004fddf2: MOV byte ptr [EDI],AL
// 004fddf4: CMP AL,0x0
// 004fddf6: JZ 0x004fde08
//   XREF to: 004fde08 (CONDITIONAL_JUMP)
// 004fddf8: MOV AL,byte ptr [ESI + 0x1]
// 004fddfb: ADD ESI,0x2
// 004fddfe: MOV byte ptr [EDI + 0x1],AL
// 004fde01: ADD EDI,0x2
// 004fde04: CMP AL,0x0
// 004fde06: JNZ 0x004fddf0
//   XREF to: 004fddf0 (CONDITIONAL_JUMP)
// 004fde08: POP EDI
//   Label: LAB_004fde08
// 004fde09: PUSH 0x63066e
//   XREF to: 0063066e (DATA)
// 004fde0e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fde13: ADD ESP,0x4
// 004fde16: LEA EDI,[ESP + 0x100]
// 004fde1d: MOV ESI,EAX
// 004fde1f: PUSH EDI
// 004fde20: SUB ECX,ECX
// 004fde22: DEC ECX
// 004fde23: MOV AL,0x0
// 004fde25: SCASB.REPNE ES:EDI
// 004fde27: DEC EDI
// 004fde28: MOV AL,byte ptr [ESI]
//   Label: LAB_004fde28
// 004fde2a: MOV byte ptr [EDI],AL
// 004fde2c: CMP AL,0x0
// 004fde2e: JZ 0x004fde40
//   XREF to: 004fde40 (CONDITIONAL_JUMP)
// 004fde30: MOV AL,byte ptr [ESI + 0x1]
// 004fde33: ADD ESI,0x2
// 004fde36: MOV byte ptr [EDI + 0x1],AL
// 004fde39: ADD EDI,0x2
// 004fde3c: CMP AL,0x0
// 004fde3e: JNZ 0x004fde28
//   XREF to: 004fde28 (CONDITIONAL_JUMP)
// 004fde40: POP EDI
//   Label: LAB_004fde40
// 004fde41: PUSH EBX
// 004fde42: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 004fde47: ADD ESP,0x4
// 004fde4a: LEA EDI,[ESP + 0x100]
// 004fde51: MOV ESI,EAX
// 004fde53: PUSH EDI
// 004fde54: SUB ECX,ECX
// 004fde56: DEC ECX
// 004fde57: MOV AL,0x0
// 004fde59: SCASB.REPNE ES:EDI
// 004fde5b: DEC EDI
// 004fde5c: MOV AL,byte ptr [ESI]
//   Label: LAB_004fde5c
// 004fde5e: MOV byte ptr [EDI],AL
// 004fde60: CMP AL,0x0
// 004fde62: JZ 0x004fde74
//   XREF to: 004fde74 (CONDITIONAL_JUMP)
// 004fde64: MOV AL,byte ptr [ESI + 0x1]
// 004fde67: ADD ESI,0x2
// 004fde6a: MOV byte ptr [EDI + 0x1],AL
// 004fde6d: ADD EDI,0x2
// 004fde70: CMP AL,0x0
// 004fde72: JNZ 0x004fde5c
//   XREF to: 004fde5c (CONDITIONAL_JUMP)
// 004fde74: POP EDI
//   Label: LAB_004fde74
// 004fde75: PUSH 0x63067e
//   XREF to: 0063067e (DATA)
// 004fde7a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fde7f: ADD ESP,0x4
// 004fde82: LEA EDI,[ESP + 0x100]
// 004fde89: MOV ESI,EAX
// 004fde8b: PUSH EDI
// 004fde8c: SUB ECX,ECX
// 004fde8e: DEC ECX
// 004fde8f: MOV AL,0x0
// 004fde91: SCASB.REPNE ES:EDI
// 004fde93: DEC EDI
// 004fde94: MOV AL,byte ptr [ESI]
//   Label: LAB_004fde94
// 004fde96: MOV byte ptr [EDI],AL
// 004fde98: CMP AL,0x0
// 004fde9a: JZ 0x004fdeac
//   XREF to: 004fdeac (CONDITIONAL_JUMP)
// 004fde9c: MOV AL,byte ptr [ESI + 0x1]
// 004fde9f: ADD ESI,0x2
// 004fdea2: MOV byte ptr [EDI + 0x1],AL
// 004fdea5: ADD EDI,0x2
// 004fdea8: CMP AL,0x0
// 004fdeaa: JNZ 0x004fde94
//   XREF to: 004fde94 (CONDITIONAL_JUMP)
// 004fdeac: POP EDI
//   Label: LAB_004fdeac
// 004fdead: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fdeb2: MOV EDX,dword ptr [EAX + 0x7c]
//   XREF to: 02d81b18 (READ)
// 004fdeb5: PUSH EDX
// 004fdeb6: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fdebb: ADD ESP,0x4
// 004fdebe: LEA EDI,[ESP + 0x100]
// 004fdec5: MOV ESI,EAX
// 004fdec7: PUSH EDI
// 004fdec8: SUB ECX,ECX
// 004fdeca: DEC ECX
// 004fdecb: MOV AL,0x0
// 004fdecd: SCASB.REPNE ES:EDI
// 004fdecf: DEC EDI
// 004fded0: MOV AL,byte ptr [ESI]
//   Label: LAB_004fded0
// 004fded2: MOV byte ptr [EDI],AL
// 004fded4: CMP AL,0x0
// 004fded6: JZ 0x004fdee8
//   XREF to: 004fdee8 (CONDITIONAL_JUMP)
// 004fded8: MOV AL,byte ptr [ESI + 0x1]
// 004fdedb: ADD ESI,0x2
// 004fdede: MOV byte ptr [EDI + 0x1],AL
// 004fdee1: ADD EDI,0x2
// 004fdee4: CMP AL,0x0
// 004fdee6: JNZ 0x004fded0
//   XREF to: 004fded0 (CONDITIONAL_JUMP)
// 004fdee8: POP EDI
//   Label: LAB_004fdee8
// 004fdee9: PUSH 0x630685
//   XREF to: 00630685 (DATA)
// 004fdeee: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdef3: ADD ESP,0x4
// 004fdef6: LEA EDI,[ESP + 0x100]
// 004fdefd: MOV ESI,EAX
// 004fdeff: PUSH EDI
// 004fdf00: SUB ECX,ECX
// 004fdf02: DEC ECX
// 004fdf03: MOV AL,0x0
// 004fdf05: SCASB.REPNE ES:EDI
// 004fdf07: DEC EDI
// 004fdf08: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdf08
// 004fdf0a: MOV byte ptr [EDI],AL
// 004fdf0c: CMP AL,0x0
// 004fdf0e: JZ 0x004fdf20
//   XREF to: 004fdf20 (CONDITIONAL_JUMP)
// 004fdf10: MOV AL,byte ptr [ESI + 0x1]
// 004fdf13: ADD ESI,0x2
// 004fdf16: MOV byte ptr [EDI + 0x1],AL
// 004fdf19: ADD EDI,0x2
// 004fdf1c: CMP AL,0x0
// 004fdf1e: JNZ 0x004fdf08
//   XREF to: 004fdf08 (CONDITIONAL_JUMP)
// 004fdf20: POP EDI
//   Label: LAB_004fdf20
// 004fdf21: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fdf26: MOV ECX,dword ptr [EAX + 0x80]
//   XREF to: 02d81b1c (READ)
// 004fdf2c: PUSH ECX
// 004fdf2d: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fdf32: ADD ESP,0x4
// 004fdf35: LEA EDI,[ESP + 0x100]
// 004fdf3c: MOV ESI,EAX
// 004fdf3e: PUSH EDI
// 004fdf3f: SUB ECX,ECX
// 004fdf41: DEC ECX
// 004fdf42: MOV AL,0x0
// 004fdf44: SCASB.REPNE ES:EDI
// 004fdf46: DEC EDI
// 004fdf47: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdf47
// 004fdf49: MOV byte ptr [EDI],AL
// 004fdf4b: CMP AL,0x0
// 004fdf4d: JZ 0x004fdf5f
//   XREF to: 004fdf5f (CONDITIONAL_JUMP)
// 004fdf4f: MOV AL,byte ptr [ESI + 0x1]
// 004fdf52: ADD ESI,0x2
// 004fdf55: MOV byte ptr [EDI + 0x1],AL
// 004fdf58: ADD EDI,0x2
// 004fdf5b: CMP AL,0x0
// 004fdf5d: JNZ 0x004fdf47
//   XREF to: 004fdf47 (CONDITIONAL_JUMP)
// 004fdf5f: POP EDI
//   Label: LAB_004fdf5f
// 004fdf60: PUSH 0x63068b
//   XREF to: 0063068b (DATA)
// 004fdf65: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fdf6a: ADD ESP,0x4
// 004fdf6d: LEA EDI,[ESP + 0x100]
// 004fdf74: MOV ESI,EAX
// 004fdf76: PUSH EDI
// 004fdf77: SUB ECX,ECX
// 004fdf79: DEC ECX
// 004fdf7a: MOV AL,0x0
// 004fdf7c: SCASB.REPNE ES:EDI
// 004fdf7e: DEC EDI
// 004fdf7f: MOV AL,byte ptr [ESI]
//   Label: LAB_004fdf7f
// 004fdf81: MOV byte ptr [EDI],AL
// 004fdf83: CMP AL,0x0
// 004fdf85: JZ 0x004fdf97
//   XREF to: 004fdf97 (CONDITIONAL_JUMP)
// 004fdf87: MOV AL,byte ptr [ESI + 0x1]
// 004fdf8a: ADD ESI,0x2
// 004fdf8d: MOV byte ptr [EDI + 0x1],AL
// 004fdf90: ADD EDI,0x2
// 004fdf93: CMP AL,0x0
// 004fdf95: JNZ 0x004fdf7f
//   XREF to: 004fdf7f (CONDITIONAL_JUMP)
// 004fdf97: POP EDI
//   Label: LAB_004fdf97
// 004fdf98: MOV ESI,0x63068d
//   XREF to: 0063068d (DATA)
// 004fdf9d: MOV EDI,0x219
// 004fdfa2: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 004fdfa8: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 004fdfae: TEST EBX,EBX
// 004fdfb0: JZ 0x004fdfc4
//   XREF to: 004fdfc4 (CONDITIONAL_JUMP)
// 004fdfb2: PUSH 0x2
// 004fdfb4: MOV EAX,dword ptr [EBX + 0x154]
// 004fdfba: PUSH EBX
// 004fdfbb: CALL dword ptr [EAX + 0xe4]
// 004fdfc1: ADD ESP,0x8
// 004fdfc4: PUSH 0x63069d
//   Label: LAB_004fdfc4
//   XREF to: 0063069d (DATA)
// 004fdfc9: MOV EAX,dword ptr [ESP + 0x340]
// 004fdfd0: PUSH EAX
// 004fdfd1: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fdfd6: ADD ESP,0x8
// 004fdfd9: TEST EAX,EAX
// 004fdfdb: JZ 0x004fe181
//   XREF to: 004fe181 (CONDITIONAL_JUMP)
// 004fdfe1: MOV EDX,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004fdfe7: PUSH EDX
// 004fdfe8: MOV ECX,dword ptr [ESP + 0x340]
// 004fdfef: PUSH ECX
// 004fdff0: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fdff5: ADD ESP,0x8
// 004fdff8: PUSH 0x6306a5
//   XREF to: 006306a5 (DATA)
// 004fdffd: MOV EBX,EAX
// 004fdfff: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fe004: ADD ESP,0x4
// 004fe007: LEA EDI,[ESP + 0x100]
// 004fe00e: MOV ESI,EAX
// 004fe010: PUSH EDI
// 004fe011: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe011
// 004fe013: MOV byte ptr [EDI],AL
// 004fe015: CMP AL,0x0
// 004fe017: JZ 0x004fe029
//   XREF to: 004fe029 (CONDITIONAL_JUMP)
// 004fe019: MOV AL,byte ptr [ESI + 0x1]
// 004fe01c: ADD ESI,0x2
// 004fe01f: MOV byte ptr [EDI + 0x1],AL
// 004fe022: ADD EDI,0x2
// 004fe025: CMP AL,0x0
// 004fe027: JNZ 0x004fe011
//   XREF to: 004fe011 (CONDITIONAL_JUMP)
// 004fe029: POP EDI
//   Label: LAB_004fe029
// 004fe02a: PUSH EBX
// 004fe02b: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 004fe030: ADD ESP,0x4
// 004fe033: LEA EDI,[ESP + 0x100]
// 004fe03a: MOV ESI,EAX
// 004fe03c: PUSH EDI
// 004fe03d: SUB ECX,ECX
// 004fe03f: DEC ECX
// 004fe040: MOV AL,0x0
// 004fe042: SCASB.REPNE ES:EDI
// 004fe044: DEC EDI
// 004fe045: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe045
// 004fe047: MOV byte ptr [EDI],AL
// 004fe049: CMP AL,0x0
// 004fe04b: JZ 0x004fe05d
//   XREF to: 004fe05d (CONDITIONAL_JUMP)
// 004fe04d: MOV AL,byte ptr [ESI + 0x1]
// 004fe050: ADD ESI,0x2
// 004fe053: MOV byte ptr [EDI + 0x1],AL
// 004fe056: ADD EDI,0x2
// 004fe059: CMP AL,0x0
// 004fe05b: JNZ 0x004fe045
//   XREF to: 004fe045 (CONDITIONAL_JUMP)
// 004fe05d: POP EDI
//   Label: LAB_004fe05d
// 004fe05e: PUSH 0x6306b2
//   XREF to: 006306b2 (DATA)
// 004fe063: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fe068: ADD ESP,0x4
// 004fe06b: LEA EDI,[ESP + 0x100]
// 004fe072: MOV ESI,EAX
// 004fe074: PUSH EDI
// 004fe075: SUB ECX,ECX
// 004fe077: DEC ECX
// 004fe078: MOV AL,0x0
// 004fe07a: SCASB.REPNE ES:EDI
// 004fe07c: DEC EDI
// 004fe07d: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe07d
// 004fe07f: MOV byte ptr [EDI],AL
// 004fe081: CMP AL,0x0
// 004fe083: JZ 0x004fe095
//   XREF to: 004fe095 (CONDITIONAL_JUMP)
// 004fe085: MOV AL,byte ptr [ESI + 0x1]
// 004fe088: ADD ESI,0x2
// 004fe08b: MOV byte ptr [EDI + 0x1],AL
// 004fe08e: ADD EDI,0x2
// 004fe091: CMP AL,0x0
// 004fe093: JNZ 0x004fe07d
//   XREF to: 004fe07d (CONDITIONAL_JUMP)
// 004fe095: POP EDI
//   Label: LAB_004fe095
// 004fe096: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fe09b: MOV EBX,dword ptr [EAX + 0x7c]
//   XREF to: 02d81b18 (READ)
// 004fe09e: PUSH EBX
// 004fe09f: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fe0a4: ADD ESP,0x4
// 004fe0a7: LEA EDI,[ESP + 0x100]
// 004fe0ae: MOV ESI,EAX
// 004fe0b0: PUSH EDI
// 004fe0b1: SUB ECX,ECX
// 004fe0b3: DEC ECX
// 004fe0b4: MOV AL,0x0
// 004fe0b6: SCASB.REPNE ES:EDI
// 004fe0b8: DEC EDI
// 004fe0b9: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe0b9
// 004fe0bb: MOV byte ptr [EDI],AL
// 004fe0bd: CMP AL,0x0
// 004fe0bf: JZ 0x004fe0d1
//   XREF to: 004fe0d1 (CONDITIONAL_JUMP)
// 004fe0c1: MOV AL,byte ptr [ESI + 0x1]
// 004fe0c4: ADD ESI,0x2
// 004fe0c7: MOV byte ptr [EDI + 0x1],AL
// 004fe0ca: ADD EDI,0x2
// 004fe0cd: CMP AL,0x0
// 004fe0cf: JNZ 0x004fe0b9
//   XREF to: 004fe0b9 (CONDITIONAL_JUMP)
// 004fe0d1: POP EDI
//   Label: LAB_004fe0d1
// 004fe0d2: PUSH 0x6306b9
//   XREF to: 006306b9 (DATA)
// 004fe0d7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fe0dc: ADD ESP,0x4
// 004fe0df: LEA EDI,[ESP + 0x100]
// 004fe0e6: MOV ESI,EAX
// 004fe0e8: PUSH EDI
// 004fe0e9: SUB ECX,ECX
// 004fe0eb: DEC ECX
// 004fe0ec: MOV AL,0x0
// 004fe0ee: SCASB.REPNE ES:EDI
// 004fe0f0: DEC EDI
// 004fe0f1: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe0f1
// 004fe0f3: MOV byte ptr [EDI],AL
// 004fe0f5: CMP AL,0x0
// 004fe0f7: JZ 0x004fe109
//   XREF to: 004fe109 (CONDITIONAL_JUMP)
// 004fe0f9: MOV AL,byte ptr [ESI + 0x1]
// 004fe0fc: ADD ESI,0x2
// 004fe0ff: MOV byte ptr [EDI + 0x1],AL
// 004fe102: ADD EDI,0x2
// 004fe105: CMP AL,0x0
// 004fe107: JNZ 0x004fe0f1
//   XREF to: 004fe0f1 (CONDITIONAL_JUMP)
// 004fe109: POP EDI
//   Label: LAB_004fe109
// 004fe10a: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004fe10f: MOV ESI,dword ptr [EAX + 0x80]
//   XREF to: 02d81b1c (READ)
// 004fe115: PUSH ESI
// 004fe116: CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0
//   XREF to: 005134e0 (UNCONDITIONAL_CALL)
// 004fe11b: ADD ESP,0x4
// 004fe11e: LEA EDI,[ESP + 0x100]
// 004fe125: MOV ESI,EAX
// 004fe127: PUSH EDI
// 004fe128: SUB ECX,ECX
// 004fe12a: DEC ECX
// 004fe12b: MOV AL,0x0
// 004fe12d: SCASB.REPNE ES:EDI
// 004fe12f: DEC EDI
// 004fe130: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe130
// 004fe132: MOV byte ptr [EDI],AL
// 004fe134: CMP AL,0x0
// 004fe136: JZ 0x004fe148
//   XREF to: 004fe148 (CONDITIONAL_JUMP)
// 004fe138: MOV AL,byte ptr [ESI + 0x1]
// 004fe13b: ADD ESI,0x2
// 004fe13e: MOV byte ptr [EDI + 0x1],AL
// 004fe141: ADD EDI,0x2
// 004fe144: CMP AL,0x0
// 004fe146: JNZ 0x004fe130
//   XREF to: 004fe130 (CONDITIONAL_JUMP)
// 004fe148: POP EDI
//   Label: LAB_004fe148
// 004fe149: PUSH 0x6306bf
//   XREF to: 006306bf (DATA)
// 004fe14e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004fe153: ADD ESP,0x4
// 004fe156: LEA EDI,[ESP + 0x100]
// 004fe15d: MOV ESI,EAX
// 004fe15f: PUSH EDI
// 004fe160: SUB ECX,ECX
// 004fe162: DEC ECX
// 004fe163: MOV AL,0x0
// 004fe165: SCASB.REPNE ES:EDI
// 004fe167: DEC EDI
// 004fe168: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe168
// 004fe16a: MOV byte ptr [EDI],AL
// 004fe16c: CMP AL,0x0
// 004fe16e: JZ 0x004fe180
//   XREF to: 004fe180 (CONDITIONAL_JUMP)
// 004fe170: MOV AL,byte ptr [ESI + 0x1]
// 004fe173: ADD ESI,0x2
// 004fe176: MOV byte ptr [EDI + 0x1],AL
// 004fe179: ADD EDI,0x2
// 004fe17c: CMP AL,0x0
// 004fe17e: JNZ 0x004fe168
//   XREF to: 004fe168 (CONDITIONAL_JUMP)
// 004fe180: POP EDI
//   Label: LAB_004fe180
// 004fe181: MOV EAX,ESP
//   Label: LAB_004fe181
// 004fe183: PUSH 0x41200000
// 004fe188: PUSH EAX
// 004fe189: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004fe18f: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 004fe190: LEA EBX,[EBP + 0x34c]
// 004fe196: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004fe19b: ADD ESP,0xc
// 004fe19e: LEA ESI,[ESP + 0x100]
// 004fe1a5: MOV EDI,EBX
// 004fe1a7: PUSH EDI
// 004fe1a8: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe1a8
// 004fe1aa: MOV byte ptr [EDI],AL
// 004fe1ac: CMP AL,0x0
// 004fe1ae: JZ 0x004fe1c0
//   XREF to: 004fe1c0 (CONDITIONAL_JUMP)
// 004fe1b0: MOV AL,byte ptr [ESI + 0x1]
// 004fe1b3: ADD ESI,0x2
// 004fe1b6: MOV byte ptr [EDI + 0x1],AL
// 004fe1b9: ADD EDI,0x2
// 004fe1bc: CMP AL,0x0
// 004fe1be: JNZ 0x004fe1a8
//   XREF to: 004fe1a8 (CONDITIONAL_JUMP)
// 004fe1c0: POP EDI
//   Label: LAB_004fe1c0
// 004fe1c1: PUSH EBX
// 004fe1c2: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 004fe1c7: PUSH EAX
// 004fe1c8: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004fe1cd: ADD ESP,0x8
// 004fe1d0: MOV dword ptr [ESP + 0x320],EAX
// 004fe1d7: FILD dword ptr [ESP + 0x320]
// 004fe1de: FMUL double ptr [0x006307e2]
//   XREF to: 006307e2 (READ)
// 004fe1e4: FSTP float ptr [EBP + 0x344]
// 004fe1ea: MOV EDX,dword ptr [0x008223a4]
//   Label: LAB_004fe1ea
//   XREF to: 008223a4 (READ)
// 004fe1f0: PUSH EDX
// 004fe1f1: MOV ECX,dword ptr [ESP + 0x340]
// 004fe1f8: PUSH ECX
// 004fe1f9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe1fe: ADD ESP,0x8
// 004fe201: MOV dword ptr [ESP + 0x310],EAX
// 004fe208: TEST EAX,EAX
// 004fe20a: JZ 0x004fe521
//   XREF to: 004fe521 (CONDITIONAL_JUMP)
// 004fe210: LEA EBX,[EAX + 0x2d4]
// 004fe216: PUSH EBX
// 004fe217: PUSH EAX
// 004fe218: XOR ESI,ESI
// 004fe21a: CALL core_ammo.cpp_CAmmo_FUN_00410fd0
//   XREF to: 00410fd0 (UNCONDITIONAL_CALL)
// 004fe21f: MOV EDI,dword ptr [EBP + 0x8]
// 004fe222: ADD ESP,0x8
// 004fe225: TEST EDI,EDI
// 004fe227: JLE 0x004fe25a
//   XREF to: 004fe25a (CONDITIONAL_JUMP)
// 004fe229: MOV EDI,EBP
// 004fe22b: MOV dword ptr [ESP + 0x308],EBX
// 004fe232: MOV EBX,dword ptr [0x008223a4]
//   Label: LAB_004fe232
//   XREF to: 008223a4 (READ)
// 004fe238: PUSH EBX
// 004fe239: MOV EAX,dword ptr [EDI + 0xc]
// 004fe23c: PUSH EAX
// 004fe23d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe242: MOV EBX,EAX
// 004fe244: ADD ESP,0x8
// 004fe247: TEST EAX,EAX
// 004fe249: JNZ 0x004fe3a7
//   XREF to: 004fe3a7 (CONDITIONAL_JUMP)
// 004fe24f: INC ESI
//   Label: LAB_004fe24f
// 004fe250: MOV EAX,dword ptr [EBP + 0x8]
// 004fe253: ADD EDI,0x4
// 004fe256: CMP ESI,EAX
// 004fe258: JL 0x004fe232
//   XREF to: 004fe232 (CONDITIONAL_JUMP)
// 004fe25a: MOV ESI,dword ptr [ESP + 0x310]
//   Label: LAB_004fe25a
// 004fe261: MOV EBX,EBP
// 004fe263: MOV ECX,dword ptr [EBP + 0x8]
// 004fe266: XOR EDX,EDX
// 004fe268: XOR EDI,EDI
// 004fe26a: ADD ESI,0x2d4
// 004fe270: MOV dword ptr [ESP + 0x304],EDX
// 004fe277: TEST ECX,ECX
// 004fe279: JLE 0x004fe2a1
//   XREF to: 004fe2a1 (CONDITIONAL_JUMP)
// 004fe27b: MOV ECX,dword ptr [0x03f95d78]
//   Label: LAB_004fe27b
//   XREF to: 03f95d78 (READ)
// 004fe281: PUSH ECX
// 004fe282: MOV EAX,dword ptr [EBX + 0xc]
// 004fe285: PUSH EAX
// 004fe286: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe28b: ADD ESP,0x8
// 004fe28e: TEST EAX,EAX
// 004fe290: JNZ 0x004fe435
//   XREF to: 004fe435 (CONDITIONAL_JUMP)
// 004fe296: INC EDI
//   Label: LAB_004fe296
// 004fe297: MOV EDX,dword ptr [EBP + 0x8]
// 004fe29a: ADD EBX,0x4
// 004fe29d: CMP EDI,EDX
// 004fe29f: JL 0x004fe27b
//   XREF to: 004fe27b (CONDITIONAL_JUMP)
// 004fe2a1: CMP dword ptr [ESP + 0x304],0x0
//   Label: LAB_004fe2a1
// 004fe2a9: JZ 0x004fe50b
//   XREF to: 004fe50b (CONDITIONAL_JUMP)
// 004fe2af: MOV EAX,dword ptr [ESP + 0x310]
//   Label: LAB_004fe2af
// 004fe2b6: MOV ESI,EBP
// 004fe2b8: MOV EDX,dword ptr [EBP + 0x8]
// 004fe2bb: ADD EAX,0x2d4
// 004fe2c0: XOR EDI,EDI
// 004fe2c2: MOV dword ptr [ESP + 0x30c],EAX
// 004fe2c9: TEST EDX,EDX
// 004fe2cb: JLE 0x004fe2f4
//   XREF to: 004fe2f4 (CONDITIONAL_JUMP)
// 004fe2cd: MOV EAX,[0x03f95d78]
//   Label: LAB_004fe2cd
//   XREF to: 03f95d78 (READ)
// 004fe2d2: PUSH EAX
// 004fe2d3: MOV EDX,dword ptr [ESI + 0xc]
// 004fe2d6: PUSH EDX
// 004fe2d7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe2dc: MOV EBX,EAX
// 004fe2de: ADD ESP,0x8
// 004fe2e1: TEST EAX,EAX
// 004fe2e3: JNZ 0x004fe455
//   XREF to: 004fe455 (CONDITIONAL_JUMP)
// 004fe2e9: INC EDI
//   Label: LAB_004fe2e9
// 004fe2ea: MOV ECX,dword ptr [EBP + 0x8]
// 004fe2ed: ADD ESI,0x4
// 004fe2f0: CMP EDI,ECX
// 004fe2f2: JL 0x004fe2cd
//   XREF to: 004fe2cd (CONDITIONAL_JUMP)
// 004fe2f4: MOV EBX,dword ptr [ESP + 0x30c]
//   Label: LAB_004fe2f4
// 004fe2fb: PUSH EBX
// 004fe2fc: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004fe301: ADD ESP,0x4
// 004fe304: PUSH EAX
// 004fe305: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004fe30b: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004fe30c: MOV EBX,EAX
// 004fe30e: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004fe313: ADD ESP,0x8
// 004fe316: MOV EAX,dword ptr [EBX + 0x154]
// 004fe31c: PUSH EBX
// 004fe31d: CALL dword ptr [EAX]
// 004fe31f: ADD ESP,0x4
// 004fe322: MOV EAX,dword ptr [ESP + 0x310]
// 004fe329: MOV EAX,dword ptr [EAX + 0x314]
// 004fe32f: MOV dword ptr [EBX + 0x568],EAX
// 004fe335: MOV EAX,dword ptr [ESP + 0x310]
// 004fe33c: MOV EAX,dword ptr [EAX + 0x318]
// 004fe342: MOV dword ptr [EBX + 0x56c],EAX
// 004fe348: MOV EDI,dword ptr [EBP + 0x4]
// 004fe34b: PUSH EDI
// 004fe34c: MOV EAX,dword ptr [EBX + 0x154]
// 004fe352: PUSH EBX
// 004fe353: CALL dword ptr [EAX + 0x80]
// 004fe359: ADD ESP,0x8
// 004fe35c: MOV EAX,dword ptr [EBP + 0x8]
// 004fe35f: PUSH 0x1
// 004fe361: MOV dword ptr [EBP + EAX*0x4 + 0xc],EBX
// 004fe365: MOV EAX,dword ptr [ESP + 0x340]
// 004fe36c: MOV ECX,dword ptr [EBP + 0x8]
// 004fe36f: PUSH EAX
// 004fe370: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fe376: INC ECX
// 004fe377: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 004fe378: MOV dword ptr [EBP + 0x8],ECX
// 004fe37b: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004fe380: ADD ESP,0xc
// 004fe383: PUSH 0x630709
//   XREF to: 00630709 (DATA)
// 004fe388: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004fe38e: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 004fe38f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004fe394: MOV EAX,0x1
// 004fe399: ADD ESP,0x8
// 004fe39c: ADD ESP,0x324
// 004fe3a2: POP EBP
// 004fe3a3: POP EDI
// 004fe3a4: POP ESI
// 004fe3a5: POP EBX
// 004fe3a6: RET
// 004fe3a7: ADD EAX,0x2d4
//   Label: LAB_004fe3a7
// 004fe3ac: PUSH EAX
// 004fe3ad: MOV EDX,dword ptr [ESP + 0x30c]
// 004fe3b4: PUSH EDX
// 004fe3b5: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fe3ba: ADD ESP,0x8
// 004fe3bd: TEST EAX,EAX
// 004fe3bf: JNZ 0x004fe24f
//   XREF to: 004fe24f (CONDITIONAL_JUMP)
// 004fe3c5: MOV EAX,dword ptr [ESP + 0x310]
// 004fe3cc: MOV ECX,dword ptr [EBX + 0x318]
// 004fe3d2: CMP ECX,dword ptr [EAX + 0x318]
// 004fe3d8: JNZ 0x004fe24f
//   XREF to: 004fe24f (CONDITIONAL_JUMP)
// 004fe3de: MOV EAX,dword ptr [ESP + 0x310]
// 004fe3e5: PUSH 0x6306c1
//   XREF to: 006306c1 (DATA)
// 004fe3ea: MOV ESI,dword ptr [EBX + 0x314]
// 004fe3f0: MOV EAX,dword ptr [EAX + 0x314]
// 004fe3f6: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004fe3fc: ADD ESI,EAX
// 004fe3fe: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004fe3ff: MOV dword ptr [EBX + 0x314],ESI
// 004fe405: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004fe40a: ADD ESP,0x8
// 004fe40d: PUSH 0x1
// 004fe40f: MOV EBP,dword ptr [ESP + 0x340]
// 004fe416: PUSH EBP
// 004fe417: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fe41c: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 004fe41d: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004fe422: MOV EAX,0x1
// 004fe427: ADD ESP,0xc
// 004fe42a: ADD ESP,0x324
// 004fe430: POP EBP
// 004fe431: POP EDI
// 004fe432: POP ESI
// 004fe433: POP EBX
// 004fe434: RET
// 004fe435: PUSH EAX
//   Label: LAB_004fe435
// 004fe436: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe43b: ADD ESP,0x4
// 004fe43e: PUSH EAX
// 004fe43f: PUSH ESI
// 004fe440: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004fe445: ADD ESP,0x8
// 004fe448: TEST EAX,EAX
// 004fe44a: JNZ 0x004fe296
//   XREF to: 004fe296 (CONDITIONAL_JUMP)
// 004fe450: JMP 0x004fe2af
//   XREF to: 004fe2af (UNCONDITIONAL_JUMP)
// 004fe455: PUSH EAX
//   Label: LAB_004fe455
// 004fe456: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe45b: ADD ESP,0x4
// 004fe45e: PUSH EAX
// 004fe45f: MOV ECX,dword ptr [ESP + 0x310]
// 004fe466: PUSH ECX
// 004fe467: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004fe46c: ADD ESP,0x8
// 004fe46f: TEST EAX,EAX
// 004fe471: JNZ 0x004fe2e9
//   XREF to: 004fe2e9 (CONDITIONAL_JUMP)
// 004fe477: MOV EDX,dword ptr [ESP + 0x310]
// 004fe47e: MOV EAX,dword ptr [EBX + 0x56c]
// 004fe484: CMP EAX,dword ptr [EDX + 0x318]
// 004fe48a: JNZ 0x004fe2e9
//   XREF to: 004fe2e9 (CONDITIONAL_JUMP)
// 004fe490: MOV EDI,dword ptr [0x03f873dc]
//   XREF to: 03f873dc (READ)
// 004fe496: MOV EAX,dword ptr [EDX + 0x314]
// 004fe49c: MOV ESI,dword ptr [EBX + 0x568]
// 004fe4a2: PUSH EDI
// 004fe4a3: ADD ESI,EAX
// 004fe4a5: PUSH EBX
// 004fe4a6: MOV dword ptr [EBX + 0x568],ESI
// 004fe4ac: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe4b1: ADD ESP,0x8
// 004fe4b4: TEST EAX,EAX
// 004fe4b6: JZ 0x004fe4ce
//   XREF to: 004fe4ce (CONDITIONAL_JUMP)
// 004fe4b8: CMP dword ptr [EAX + 0x568],0xc8
// 004fe4c2: JLE 0x004fe4ce
//   XREF to: 004fe4ce (CONDITIONAL_JUMP)
// 004fe4c4: MOV dword ptr [EAX + 0x568],0xc8
// 004fe4ce: PUSH 0x1
//   Label: LAB_004fe4ce
// 004fe4d0: MOV EAX,dword ptr [ESP + 0x340]
// 004fe4d7: PUSH EAX
// 004fe4d8: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fe4de: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 004fe4df: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004fe4e4: ADD ESP,0xc
// 004fe4e7: PUSH 0x6306e5
//   XREF to: 006306e5 (DATA)
// 004fe4ec: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004fe4f2: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004fe4f3: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004fe4f8: MOV EAX,0x1
// 004fe4fd: ADD ESP,0x8
// 004fe500: ADD ESP,0x324
// 004fe506: POP EBP
// 004fe507: POP EDI
// 004fe508: POP ESI
// 004fe509: POP EBX
// 004fe50a: RET
// 004fe50b: PUSH 0x630750
//   Label: LAB_004fe50b
//   XREF to: 00630750 (DATA)
// 004fe510: PUSH ESI
// 004fe511: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fe516: ADD ESP,0x8
// 004fe519: TEST EAX,EAX
// 004fe51b: JZ 0x004fe5a7
//   XREF to: 004fe5a7 (CONDITIONAL_JUMP)
// 004fe521: MOV ECX,dword ptr [0x03f95d78]
//   Label: LAB_004fe521
//   XREF to: 03f95d78 (READ)
// 004fe527: PUSH ECX
// 004fe528: MOV EBX,dword ptr [ESP + 0x340]
// 004fe52f: PUSH EBX
// 004fe530: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe535: ADD ESP,0x8
// 004fe538: MOV EDI,EAX
// 004fe53a: TEST EAX,EAX
// 004fe53c: JNZ 0x004fe639
//   XREF to: 004fe639 (CONDITIONAL_JUMP)
// 004fe542: MOV EDX,dword ptr [ESP + 0x33c]
//   Label: LAB_004fe542
// 004fe549: MOV EAX,dword ptr [EBP + 0x8]
// 004fe54c: PUSH EDX
// 004fe54d: MOV dword ptr [EBP + EAX*0x4 + 0xc],EDX
// 004fe551: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004fe557: MOV EAX,dword ptr [EBP + 0x8]
// 004fe55a: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004fe55b: INC EAX
// 004fe55c: MOV EBX,EDX
// 004fe55e: MOV dword ptr [EBP + 0x8],EAX
// 004fe561: CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   XREF to: 00523be0 (UNCONDITIONAL_CALL)
// 004fe566: ADD ESP,0x8
// 004fe569: MOV EAX,EBX
// 004fe56b: PUSH EBP
// 004fe56c: MOV EDX,EBX
// 004fe56e: MOV EAX,dword ptr [EAX + 0x154]
// 004fe574: PUSH EDX
// 004fe575: CALL dword ptr [EAX + 0x64]
// 004fe578: ADD ESP,0x8
// 004fe57b: TEST EDI,EDI
// 004fe57d: JZ 0x004fe597
//   XREF to: 004fe597 (CONDITIONAL_JUMP)
// 004fe57f: MOV EAX,dword ptr [EBP + 0x330]
// 004fe585: TEST EAX,EAX
// 004fe587: JNZ 0x004fe597
//   XREF to: 004fe597 (CONDITIONAL_JUMP)
// 004fe589: PUSH 0x1
// 004fe58b: PUSH 0x5
// 004fe58d: PUSH EDI
// 004fe58e: PUSH EBP
// 004fe58f: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004fe594: ADD ESP,0x10
// 004fe597: MOV EAX,0x1
//   Label: LAB_004fe597
// 004fe59c: ADD ESP,0x324
// 004fe5a2: POP EBP
// 004fe5a3: POP EDI
// 004fe5a4: POP ESI
// 004fe5a5: POP EBX
// 004fe5a6: RET
// 004fe5a7: PUSH 0x63075a
//   Label: LAB_004fe5a7
//   XREF to: 0063075a (DATA)
// 004fe5ac: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004fe5b1: ADD ESP,0x4
// 004fe5b4: PUSH EAX
// 004fe5b5: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004fe5bb: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004fe5bc: MOV EBX,EAX
// 004fe5be: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004fe5c3: ADD ESP,0x8
// 004fe5c6: MOV EAX,dword ptr [EBX + 0x154]
// 004fe5cc: PUSH EBX
// 004fe5cd: CALL dword ptr [EAX]
// 004fe5cf: ADD ESP,0x4
// 004fe5d2: MOV EAX,dword ptr [ESP + 0x310]
// 004fe5d9: MOV EAX,dword ptr [EAX + 0x314]
// 004fe5df: MOV dword ptr [EBX + 0x568],EAX
// 004fe5e5: MOV EDI,dword ptr [EBP + 0x4]
// 004fe5e8: PUSH EDI
// 004fe5e9: MOV EAX,dword ptr [EBX + 0x154]
// 004fe5ef: PUSH EBX
// 004fe5f0: CALL dword ptr [EAX + 0x80]
// 004fe5f6: ADD ESP,0x8
// 004fe5f9: MOV EAX,dword ptr [ESP + 0x33c]
// 004fe600: PUSH EAX
// 004fe601: CALL core_actor.cpp_deleteActor_FUN_00408820
//   XREF to: 00408820 (UNCONDITIONAL_CALL)
// 004fe606: ADD ESP,0x4
// 004fe609: PUSH 0x630764
//   XREF to: 00630764 (DATA)
// 004fe60e: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004fe614: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 004fe615: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004fe61a: ADD ESP,0x8
// 004fe61d: PUSH 0x1
// 004fe61f: PUSH EBX
// 004fe620: PUSH EBP
// 004fe621: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004fe626: MOV EAX,0x1
// 004fe62b: ADD ESP,0xc
// 004fe62e: ADD ESP,0x324
// 004fe634: POP EBP
// 004fe635: POP EDI
// 004fe636: POP ESI
// 004fe637: POP EBX
// 004fe638: RET
// 004fe639: MOV ESI,dword ptr [0x02f0d928]
//   Label: LAB_004fe639
//   XREF to: 02f0d928 (READ)
// 004fe63f: PUSH ESI
// 004fe640: PUSH EAX
// 004fe641: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe646: ADD ESP,0x8
// 004fe649: TEST EAX,EAX
// 004fe64b: JNZ 0x004fe729
//   XREF to: 004fe729 (CONDITIONAL_JUMP)
// 004fe651: MOV EAX,dword ptr [EBP + 0x8]
// 004fe654: XOR ESI,ESI
// 004fe656: TEST EAX,EAX
// 004fe658: JLE 0x004fe69d
//   XREF to: 004fe69d (CONDITIONAL_JUMP)
// 004fe65a: MOV dword ptr [ESP + 0x314],EBP
// 004fe661: MOV EAX,[0x03f95d78]
//   Label: LAB_004fe661
//   XREF to: 03f95d78 (READ)
// 004fe666: PUSH EAX
// 004fe667: MOV EAX,dword ptr [ESP + 0x318]
// 004fe66e: MOV EDX,dword ptr [EAX + 0xc]
// 004fe671: PUSH EDX
// 004fe672: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe677: MOV EBX,EAX
// 004fe679: ADD ESP,0x8
// 004fe67c: TEST EAX,EAX
// 004fe67e: JNZ 0x004fe775
//   XREF to: 004fe775 (CONDITIONAL_JUMP)
// 004fe684: MOV EAX,dword ptr [ESP + 0x314]
//   Label: LAB_004fe684
// 004fe68b: INC ESI
// 004fe68c: ADD EAX,0x4
// 004fe68f: MOV EDX,dword ptr [EBP + 0x8]
// 004fe692: MOV dword ptr [ESP + 0x314],EAX
// 004fe699: CMP ESI,EDX
// 004fe69b: JL 0x004fe661
//   XREF to: 004fe661 (CONDITIONAL_JUMP)
// 004fe69d: XOR EBX,EBX
//   Label: LAB_004fe69d
// 004fe69f: MOV ESI,dword ptr [EBP + 0x8]
// 004fe6a2: MOV dword ptr [ESP + 0x318],EBX
// 004fe6a9: TEST ESI,ESI
// 004fe6ab: JLE 0x004fe6ff
//   XREF to: 004fe6ff (CONDITIONAL_JUMP)
// 004fe6ad: MOV dword ptr [ESP + 0x31c],EBP
// 004fe6b4: MOV ESI,dword ptr [0x008223a4]
//   Label: LAB_004fe6b4
//   XREF to: 008223a4 (READ)
// 004fe6ba: MOV EAX,dword ptr [ESP + 0x31c]
// 004fe6c1: PUSH ESI
// 004fe6c2: MOV EDX,dword ptr [EAX + 0xc]
// 004fe6c5: PUSH EDX
// 004fe6c6: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe6cb: MOV ESI,EAX
// 004fe6cd: ADD ESP,0x8
// 004fe6d0: TEST EAX,EAX
// 004fe6d2: JNZ 0x004fe825
//   XREF to: 004fe825 (CONDITIONAL_JUMP)
// 004fe6d8: MOV ESI,dword ptr [ESP + 0x31c]
//   Label: LAB_004fe6d8
// 004fe6df: MOV EAX,dword ptr [ESP + 0x318]
// 004fe6e6: MOV EDX,dword ptr [EBP + 0x8]
// 004fe6e9: ADD ESI,0x4
// 004fe6ec: INC EAX
// 004fe6ed: MOV dword ptr [ESP + 0x31c],ESI
// 004fe6f4: MOV dword ptr [ESP + 0x318],EAX
// 004fe6fb: CMP EAX,EDX
// 004fe6fd: JL 0x004fe6b4
//   XREF to: 004fe6b4 (CONDITIONAL_JUMP)
// 004fe6ff: TEST EBX,EBX
//   Label: LAB_004fe6ff
// 004fe701: JZ 0x004fe542
//   XREF to: 004fe542 (CONDITIONAL_JUMP)
// 004fe707: PUSH 0x1
// 004fe709: PUSH EDI
// 004fe70a: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fe710: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 004fe711: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004fe716: MOV EAX,0x1
// 004fe71b: ADD ESP,0xc
// 004fe71e: ADD ESP,0x324
// 004fe724: POP EBP
// 004fe725: POP EDI
// 004fe726: POP ESI
// 004fe727: POP EBX
// 004fe728: RET
// 004fe729: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_004fe729
// 004fe72c: PUSH 0x0
// 004fe72e: MOV dword ptr [EBP + EAX*0x4 + 0xc],EBX
// 004fe732: PUSH EBX
// 004fe733: MOV EBX,dword ptr [EBP + 0x8]
// 004fe736: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fe73c: INC EBX
// 004fe73d: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 004fe73e: MOV dword ptr [EBP + 0x8],EBX
// 004fe741: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004fe746: ADD ESP,0xc
// 004fe749: PUSH EBP
// 004fe74a: MOV ESI,dword ptr [ESP + 0x340]
// 004fe751: MOV EAX,dword ptr [ESP + 0x340]
// 004fe758: PUSH ESI
// 004fe759: MOV EAX,dword ptr [EAX + 0x154]
// 004fe75f: CALL dword ptr [EAX + 0x64]
// 004fe762: MOV EAX,0x1
// 004fe767: ADD ESP,0x8
// 004fe76a: ADD ESP,0x324
// 004fe770: POP EBP
// 004fe771: POP EDI
// 004fe772: POP ESI
// 004fe773: POP EBX
// 004fe774: RET
// 004fe775: PUSH EAX
//   Label: LAB_004fe775
// 004fe776: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe77b: ADD ESP,0x4
// 004fe77e: PUSH EAX
// 004fe77f: PUSH EDI
// 004fe780: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe785: ADD ESP,0x4
// 004fe788: PUSH EAX
// 004fe789: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fe78e: ADD ESP,0x8
// 004fe791: TEST EAX,EAX
// 004fe793: JNZ 0x004fe684
//   XREF to: 004fe684 (CONDITIONAL_JUMP)
// 004fe799: MOV ECX,dword ptr [EBX + 0x56c]
// 004fe79f: CMP ECX,dword ptr [EDI + 0x56c]
// 004fe7a5: JNZ 0x004fe684
//   XREF to: 004fe684 (CONDITIONAL_JUMP)
// 004fe7ab: MOV EAX,dword ptr [EDI + 0x568]
// 004fe7b1: MOV EDI,dword ptr [0x03f873dc]
//   XREF to: 03f873dc (READ)
// 004fe7b7: MOV ESI,dword ptr [EBX + 0x568]
// 004fe7bd: PUSH EDI
// 004fe7be: ADD ESI,EAX
// 004fe7c0: PUSH EBX
// 004fe7c1: MOV dword ptr [EBX + 0x568],ESI
// 004fe7c7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fe7cc: ADD ESP,0x8
// 004fe7cf: TEST EAX,EAX
// 004fe7d1: JZ 0x004fe7e9
//   XREF to: 004fe7e9 (CONDITIONAL_JUMP)
// 004fe7d3: CMP dword ptr [EAX + 0x568],0xc8
// 004fe7dd: JLE 0x004fe7e9
//   XREF to: 004fe7e9 (CONDITIONAL_JUMP)
// 004fe7df: MOV dword ptr [EAX + 0x568],0xc8
// 004fe7e9: PUSH 0x63078e
//   Label: LAB_004fe7e9
//   XREF to: 0063078e (DATA)
// 004fe7ee: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004fe7f3: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004fe7f4: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004fe7f9: ADD ESP,0x8
// 004fe7fc: PUSH 0x1
// 004fe7fe: MOV EDX,dword ptr [ESP + 0x340]
// 004fe805: PUSH EDX
// 004fe806: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fe80c: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 004fe80d: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004fe812: MOV EAX,0x1
// 004fe817: ADD ESP,0xc
// 004fe81a: ADD ESP,0x324
// 004fe820: POP EBP
// 004fe821: POP EDI
// 004fe822: POP ESI
// 004fe823: POP EBX
// 004fe824: RET
// 004fe825: PUSH EDI
//   Label: LAB_004fe825
// 004fe826: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe82b: ADD ESP,0x4
// 004fe82e: PUSH EAX
// 004fe82f: LEA EAX,[ESI + 0x2d4]
// 004fe835: PUSH EAX
// 004fe836: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fe83b: ADD ESP,0x8
// 004fe83e: TEST EAX,EAX
// 004fe840: JNZ 0x004fe6d8
//   XREF to: 004fe6d8 (CONDITIONAL_JUMP)
// 004fe846: PUSH EDI
// 004fe847: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe84c: ADD ESP,0x4
// 004fe84f: PUSH EAX
// 004fe850: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004fe855: ADD ESP,0x4
// 004fe858: PUSH EAX
// 004fe859: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004fe85f: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 004fe860: MOV EBX,EAX
// 004fe862: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004fe867: ADD ESP,0x8
// 004fe86a: MOV EAX,dword ptr [EBX + 0x154]
// 004fe870: PUSH EBX
// 004fe871: CALL dword ptr [EAX]
// 004fe873: MOV EAX,dword ptr [ESI + 0x314]
// 004fe879: MOV dword ptr [EBX + 0x568],EAX
// 004fe87f: MOV EAX,dword ptr [ESI + 0x318]
// 004fe885: MOV dword ptr [EBX + 0x56c],EAX
// 004fe88b: ADD ESP,0x4
// 004fe88e: MOV ESI,dword ptr [EBP + 0x4]
// 004fe891: PUSH ESI
// 004fe892: MOV EAX,dword ptr [EBX + 0x154]
// 004fe898: PUSH EBX
// 004fe899: CALL dword ptr [EAX + 0x80]
// 004fe89f: ADD ESP,0x8
// 004fe8a2: PUSH EBP
// 004fe8a3: MOV EAX,dword ptr [EBX + 0x154]
// 004fe8a9: PUSH EBX
// 004fe8aa: CALL dword ptr [EAX + 0x64]
// 004fe8ad: ADD ESP,0x8
// 004fe8b0: MOV EAX,dword ptr [ESP + 0x31c]
// 004fe8b7: MOV EDX,dword ptr [EAX + 0xc]
// 004fe8ba: PUSH EDX
// 004fe8bb: CALL core_actor.cpp_deleteActor_FUN_00408820
//   XREF to: 00408820 (UNCONDITIONAL_CALL)
// 004fe8c0: ADD ESP,0x4
// 004fe8c3: MOV EAX,dword ptr [ESP + 0x31c]
// 004fe8ca: PUSH EDI
// 004fe8cb: MOV dword ptr [EAX + 0xc],EBX
// 004fe8ce: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe8d3: ADD ESP,0x4
// 004fe8d6: PUSH EAX
// 004fe8d7: PUSH 0x6307b7
//   XREF to: 006307b7 (DATA)
// 004fe8dc: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004fe8e2: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004fe8e3: MOV EBX,0x1
// 004fe8e8: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004fe8ed: ADD ESP,0xc
// 004fe8f0: JMP 0x004fe6d8
//   XREF to: 004fe6d8 (UNCONDITIONAL_JUMP)
