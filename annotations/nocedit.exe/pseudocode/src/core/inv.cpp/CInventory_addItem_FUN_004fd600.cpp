// Name: core_inv.cpp_CInventory_addItem_FUN_004fd600
// Address: 004fd600
// Address Range: [[004fd600, 004fe8f4]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600 (CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

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
  CAmmo *this_ptr_01;
  int iVar7;
  CDemonActor *pCVar8;
  CDemonActor *actor;
  int iVar9;
  CInventory *pCVar10;
  int unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  int in_stack_00000010;
  CDemonActor *in_stack_0000001c;
  int in_stack_00000020;
  CDemonActor *in_stack_00000028;
  uint in_stack_fffffce0;
  uint in_stack_fffffce4;
  uint in_stack_fffffce8;
  uint in_stack_fffffcec;
  uint in_stack_fffffcf0;
  uint in_stack_fffffcf4;
  uint in_stack_fffffcf8;
  char acStack_220 [256];
  char acStack_120 [256];
  char *pcStack_20;
  int iStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  
  bVar13 = 0;
  if (99 < this_ptr->item_count) {
    return 0;
  }
  pCVar5 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
  if (pCVar5 != this_ptr->owner) {
    (**(code **)(*(int *)(show_tutorial_message + 0x154) + 0x84))
              ((CDemonActor *)show_tutorial_message,(CVector3f *)0x0);
    if (this_ptr->owner != (CDemonActor *)0x0) {
      (**(code **)(*(int *)(show_tutorial_message + 0x154) + 0x80))
                ((CDemonActor *)show_tutorial_message,this_ptr->owner);
    }
  }
  pcVar11 = &stack0xfffffce0;
  if ((((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) && (in_stack_00000020 != 0)) &&
     (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_20 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(in_stack_0000001c);
    core_inv_cpp_getItemIconName_FUN_004fcf70(in_stack_0000001c);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_0000001c,g_CAmmoClassInfo.name_hash);
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You've found : ");
    do {
      cVar1 = *pcVar6;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (pCVar5 != (CDemonActor *)0x0) {
      sprintf(acStack_120,"%d ",pCVar5[2].health);
      pcVar11 = acStack_120;
      iVar9 = -1;
      pcVar6 = &stack0xfffffce0;
      do {
        pcVar12 = pcVar6;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar6 + (uint)bVar13 * -2 + 1;
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
    iVar9 = -1;
    pcVar11 = &stack0xfffffce0;
    do {
      pcVar6 = pcVar11;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar6 = pcVar11 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    pcVar11 = pcStack_20;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    acStack_220[0] = '\0';
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000001c,"CHealthItem");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar11 = acStack_220;
      do {
        cVar1 = *pcVar6;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         (" to cycle through your inventory.  Press ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         (" to use this item to restore some health.");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000001c,"CGasMask");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar11 = acStack_220;
      do {
        cVar1 = *pcVar6;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         (" to cycle through your inventory.  Press ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         (" to put on and off the mask.");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000001c,"CKeyActor");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("With your guns put away, press ");
      pcVar11 = acStack_220;
      do {
        cVar1 = *pcVar6;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_fire);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         (" to open a previously locked door.");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000001c,"CBoxActor");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar11 = acStack_220;
      do {
        cVar1 = *pcVar6;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         (" to cycle through your inventory.  Press ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_use_item);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" to use this item.");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000001c,"CAmmo");
    if (iVar9 != 0) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (in_stack_0000001c,g_CAmmoClassInfo.name_hash);
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430((char *)&pCVar5[2].location.position.y)
      ;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("This ammo is for your ");
      pcVar11 = acStack_220;
      do {
        cVar1 = *pcVar6;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".  Select your ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" with ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_weapon);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_weapon);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      g_CurrentDebugFilename = "..\\core\\inv.cpp";
      g_CurrentDebugLine = 0x219;
      if (pCVar5 != (CDemonActor *)0x0) {
        (*((pCVar5->vtable)._ub)->dtor)
                  (pCVar5,2,in_stack_fffffce0,in_stack_fffffce4,in_stack_fffffce8,in_stack_fffffcec,
                   in_stack_fffffcf0,in_stack_fffffcf4,in_stack_fffffcf8);
      }
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_0000001c,"CWeapon");
    if (iVar9 != 0) {
      pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (in_stack_0000001c,g_CWeaponClassInfo.name_hash);
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select your ");
      pcVar11 = acStack_220;
      do {
        cVar1 = *pcVar6;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar5);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" with ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_next_weapon);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" and ");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_005134e0(g_CGamePtr->key_prev_weapon);
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      iVar9 = -1;
      pcVar11 = acStack_220;
      do {
        pcVar12 = pcVar11;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar11 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,&stack0xfffffce0,10.0);
    pcVar11 = acStack_220;
    pcVar6 = this_ptr->message_text;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar9 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_SmallEditorFont,this_ptr->message_text);
    this_ptr->message_display_timer = (float)iVar9 * (float)0.025000000000000001;
  }
  this_ptr_01 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (in_stack_0000001c,g_CAmmoClassInfo.name_hash);
  if (this_ptr_01 != (CAmmo *)0x0) {
    iVar9 = 0;
    core_ammo_cpp_CAmmo_FUN_00410fd0(this_ptr_01,this_ptr_01->weapon_class_name);
    pCVar10 = this_ptr;
    pcVar11 = this_ptr_01->weapon_class_name;
    if (0 < this_ptr->item_count) {
      do {
        pcStack_18 = pcVar11;
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar10->items[0],g_CAmmoClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) &&
            (iVar7 = strcmp
                               (pcStack_18,(char *)&pCVar5[2].location.position.y),
            this_ptr_00 = g_CConsolePtr, iVar7 == 0)) &&
           (pCVar5[2].validation_magic == this_ptr_01->ammo_type)) {
          pCVar5[2].health = pCVar5[2].health + this_ptr_01->ammo_count;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"Found existing ammo, but no weapon\n");
          core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                    (g_CDemonMissionPtr,in_stack_0000001c,1);
          return 1;
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CInventory *)&pCVar10->owner;
        pcVar11 = pcStack_18;
      } while (iVar9 < this_ptr->item_count);
    }
    iVar9 = 0;
    iStack_1c = 0;
    pCVar10 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar10->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar7 = stricmp(this_ptr_01->weapon_class_name,pcVar11);
          if (iVar7 == 0) goto LAB_004fe2af;
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CInventory *)&pCVar10->owner;
      } while (iVar9 < this_ptr->item_count);
    }
    if (iStack_1c != 0) {
LAB_004fe2af:
      pcStack_14 = this_ptr_01->weapon_class_name;
      iVar9 = 0;
      pCVar10 = this_ptr;
      if (0 < this_ptr->item_count) {
        do {
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCVar10->items[0],g_CWeaponClassInfo.name_hash);
          if (pCVar5 != (CDemonActor *)0x0) {
            pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            iVar7 = stricmp(pcStack_14,pcVar11);
            uVar4 = g_CTommyGunClassInfo.name_hash;
            if ((iVar7 == 0) &&
               (*(EAmmoType *)(pCVar5[4].actor_name + 0xc) == this_ptr_01->ammo_type)) {
              *(int *)(pCVar5[4].actor_name + 8) =
                   *(int *)(pCVar5[4].actor_name + 8) + this_ptr_01->ammo_count;
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,uVar4);
              if ((pCVar5 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar5[4].actor_name + 8))) {
                pCVar5[4].actor_name[8] = -0x38;
                pCVar5[4].actor_name[9] = '\0';
                pCVar5[4].actor_name[10] = '\0';
                pCVar5[4].actor_name[0xb] = '\0';
              }
              core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                        (g_CDemonMissionPtr,in_stack_0000001c,1);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar9 = iVar9 + 1;
          pCVar10 = (CInventory *)&pCVar10->owner;
        } while (iVar9 < this_ptr->item_count);
      }
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430(pcStack_14);
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(uint *)(pCVar5[4].actor_name + 8) = *(uint *)(unaff_EDI + 0x314);
      *(uint *)(pCVar5[4].actor_name + 0xc) = *(uint *)(unaff_EDI + 0x318);
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      this_ptr->items[this_ptr->item_count] = pCVar5;
      pCVar3 = g_CDemonMissionPtr;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3,in_stack_00000028,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar9 = strcmp(this_ptr_01->weapon_class_name,"CDynamite");
    if (iVar9 == 0) {
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(uint *)(pCVar5[4].actor_name + 8) = *(uint *)(unaff_EDI + 0x314);
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      core_actor_cpp_deleteActor_FUN_00408820(in_stack_00000028);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr,pCVar5,1);
      return 1;
    }
  }
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_0000001c,g_CWeaponClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,g_CMeleeClassInfo.name_hash);
    if (pCVar8 != (CDemonActor *)0x0) {
      this_ptr->items[this_ptr->item_count] = in_stack_0000001c;
      pCVar3 = g_CDemonMissionPtr;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3,in_stack_0000001c,0);
      (*((in_stack_0000001c->vtable)._ub)->onPickup)(in_stack_0000001c,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar9 = 0;
    pCVar10 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar10->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar8 != (CDemonActor *)0x0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar8);
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar7 = strcmp(pcVar6,pcVar11);
          uVar4 = g_CTommyGunClassInfo.name_hash;
          if ((iVar7 == 0) &&
             (*(int *)(pCVar8[4].actor_name + 0xc) == *(int *)(pCVar5[4].actor_name + 0xc))) {
            *(int *)(pCVar8[4].actor_name + 8) =
                 *(int *)(pCVar8[4].actor_name + 8) + *(int *)(pCVar5[4].actor_name + 8);
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar8,uVar4);
            if ((pCVar5 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar5[4].actor_name + 8))) {
              pCVar5[4].actor_name[8] = -0x38;
              pCVar5[4].actor_name[9] = '\0';
              pCVar5[4].actor_name[10] = '\0';
              pCVar5[4].actor_name[0xb] = '\0';
            }
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                      (g_CDemonMissionPtr,in_stack_0000001c,1);
            return 1;
          }
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CInventory *)&pCVar10->owner;
      } while (iVar9 < this_ptr->item_count);
    }
    bVar2 = false;
    iVar9 = 0;
    pCVar10 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar10->items[0],g_CAmmoClassInfo.name_hash);
        if (pCVar8 != (CDemonActor *)0x0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar7 = strcmp((char *)&pCVar8[2].location.position.y,pcVar11);
          if (iVar7 == 0) {
            pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            actor = core_actor_cpp_createActorByName_FUN_0040c430(pcVar11);
            core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,actor);
            (*((actor->vtable)._ub)->setup)(actor);
            *(int *)(actor[4].actor_name + 8) = pCVar8[2].health;
            *(uintptr_t *)(actor[4].actor_name + 0xc) = pCVar8[2].validation_magic;
            (*((actor->vtable)._ub)->pickup)(actor,this_ptr->owner);
            (*((actor->vtable)._ub)->onPickup)(actor,(CDemonActor *)this_ptr);
            core_actor_cpp_deleteActor_FUN_00408820(*(CDemonActor **)(in_stack_00000010 + 0xc));
            *(CDemonActor **)(in_stack_00000010 + 0xc) = actor;
            core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n");
          }
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CInventory *)&pCVar10->owner;
      } while (iVar9 < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr,pCVar5,1);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = in_stack_0000001c;
  pCVar3 = g_CDemonMissionPtr;
  this_ptr->item_count = this_ptr->item_count + 1;
  core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(pCVar3,in_stack_0000001c);
  (*((in_stack_0000001c->vtable)._ub)->onPickup)(in_stack_0000001c,(CDemonActor *)this_ptr);
  if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,pCVar5,5,1);
  }
  return 1;
}
