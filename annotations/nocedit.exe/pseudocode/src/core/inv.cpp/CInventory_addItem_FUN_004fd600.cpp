// Name: core_inv.cpp_CInventory_addItem_FUN_004fd600
// Address: 004fd600
// Address Range: [[004fd600, 004fe8f4]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

{
  char cVar1;
  bool bVar2;
  CConsole *this_ptr_00;
  CDemonMission *pCVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  char *pcVar6;
  int iVar7;
  CDemonActor *pCVar8;
  CDemonActor *actor;
  int iVar9;
  CInventory *pCVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
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
  
  bVar13 = 0;
  if (99 < this_ptr->item_count) {
    return 0;
  }
  pCVar5 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
  if (pCVar5 != this_ptr->owner) {
    (*((item_actor->vtable)._ub)->onDropped)(item_actor,(CVector3f *)0x0);
    if (this_ptr->owner != (CDemonActor *)0x0) {
      (*((item_actor->vtable)._ub)->pickup)(item_actor,this_ptr->owner);
    }
  }
  pcVar11 = acStack_334;
  if ((((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) && (show_tutorial_message != 0))
     && (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_34 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(item_actor);
    core_inv_cpp_getItemIconName_FUN_004fcf70(item_actor);
    pCVar5 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790(item_actor,g_CAmmoClassInfo.name_hash);
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
      _sprintf(acStack_134,"%d ",pCVar5[2].health);
      pcVar11 = acStack_134;
      iVar9 = -1;
      pcVar6 = acStack_334;
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
    pcVar11 = acStack_334;
    do {
      pcVar6 = pcVar11;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar6 = pcVar11 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    pcVar11 = pcStack_34;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    acStack_234[0] = '\0';
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CHealthItem");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CGasMask");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CKeyActor");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("With your guns put away, press ");
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CBoxActor");
    if (iVar9 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press ");
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CAmmo");
    if (iVar9 != 0) {
      pCVar5 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790(item_actor,g_CAmmoClassInfo.name_hash);
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430((char *)&pCVar5[2].location.position.y)
      ;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("This ammo is for your ");
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
        (*((pCVar5->vtable)._ub)->dtor)(pCVar5,2);
      }
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(item_actor,"CWeapon");
    if (iVar9 != 0) {
      pCVar5 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c790(item_actor,g_CWeaponClassInfo.name_hash);
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select your ");
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
      pcVar11 = acStack_234;
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
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,acStack_334,10.0);
    pcVar11 = acStack_234;
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
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                          (g_SmallEditorFont,this_ptr->message_text);
    this_ptr->message_display_timer = (float)iStack_14 * (float)0.025000000000000001;
  }
  pCStack_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (item_actor,g_CAmmoClassInfo.name_hash);
  if (pCStack_24 != (CAmmo *)0x0) {
    pcVar11 = pCStack_24->weapon_class_name;
    iVar9 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_00410fd0(pCStack_24,pcVar11);
    pCVar10 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pcStack_2c = pcVar11;
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar10->items[0],g_CAmmoClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) &&
            (iVar7 = _strcmp
                               (pcStack_2c,(char *)&pCVar5[2].location.position.y),
            this_ptr_00 = g_CConsolePtr, iVar7 == 0)) &&
           (pCVar5[2].validation_magic == pCStack_24->ammo_type)) {
          pCVar5[2].health = pCVar5[2].health + pCStack_24->ammo_count;
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (this_ptr_00,"Found existing ammo, but no weapon\n");
          core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                    (g_CDemonMissionPtr,item_actor,1);
          return 1;
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CInventory *)&pCVar10->owner;
        pcVar11 = pcStack_2c;
      } while (iVar9 < this_ptr->item_count);
    }
    iVar9 = 0;
    pcVar11 = pCStack_24->weapon_class_name;
    iStack_30 = 0;
    pCVar10 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar10->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar7 = _stricmp(pcVar11,pcVar6);
          if (iVar7 == 0) goto LAB_004fe2af;
        }
        iVar9 = iVar9 + 1;
        pCVar10 = (CInventory *)&pCVar10->owner;
      } while (iVar9 < this_ptr->item_count);
    }
    if (iStack_30 != 0) {
LAB_004fe2af:
      pcStack_28 = pCStack_24->weapon_class_name;
      iVar9 = 0;
      pCVar10 = this_ptr;
      if (0 < this_ptr->item_count) {
        do {
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (pCVar10->items[0],g_CWeaponClassInfo.name_hash);
          if (pCVar5 != (CDemonActor *)0x0) {
            pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            iVar7 = _stricmp(pcStack_28,pcVar11);
            uVar4 = g_CTommyGunClassInfo.name_hash;
            if ((iVar7 == 0) &&
               (*(EAmmoType *)(pCVar5[4].actor_name + 0xc) == pCStack_24->ammo_type)) {
              *(int *)(pCVar5[4].actor_name + 8) =
                   *(int *)(pCVar5[4].actor_name + 8) + pCStack_24->ammo_count;
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,uVar4);
              if ((pCVar5 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar5[4].actor_name + 8))) {
                pCVar5[4].actor_name[8] = -0x38;
                pCVar5[4].actor_name[9] = '\0';
                pCVar5[4].actor_name[10] = '\0';
                pCVar5[4].actor_name[0xb] = '\0';
              }
              core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                        (g_CDemonMissionPtr,item_actor,1);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar9 = iVar9 + 1;
          pCVar10 = (CInventory *)&pCVar10->owner;
        } while (iVar9 < this_ptr->item_count);
      }
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430(pcStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(int *)(pCVar5[4].actor_name + 8) = pCStack_24->ammo_count;
      *(EAmmoType *)(pCVar5[4].actor_name + 0xc) = pCStack_24->ammo_type;
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      this_ptr->items[this_ptr->item_count] = pCVar5;
      pCVar3 = g_CDemonMissionPtr;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3,item_actor,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar9 = _strcmp(pcVar11,"CDynamite");
    if (iVar9 == 0) {
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c430("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(int *)(pCVar5[4].actor_name + 8) = pCStack_24->ammo_count;
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      core_actor_cpp_deleteActor_FUN_00408820(item_actor);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr,pCVar5,1);
      return 1;
    }
  }
  pCVar5 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c790(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar8 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c790(pCVar5,g_CMeleeClassInfo.name_hash);
    if (pCVar8 != (CDemonActor *)0x0) {
      this_ptr->items[this_ptr->item_count] = item_actor;
      pCVar3 = g_CDemonMissionPtr;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(pCVar3,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar9 = 0;
    if (0 < this_ptr->item_count) {
      pCStack_20 = this_ptr;
      do {
        pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCStack_20->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar8 != (CDemonActor *)0x0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar8);
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar7 = _strcmp(pcVar6,pcVar11);
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
                      (g_CDemonMissionPtr,item_actor,1);
            return 1;
          }
        }
        iVar9 = iVar9 + 1;
        pCStack_20 = (CInventory *)&pCStack_20->owner;
      } while (iVar9 < this_ptr->item_count);
    }
    bVar2 = false;
    iStack_1c = 0;
    if (0 < this_ptr->item_count) {
      pCStack_18 = this_ptr;
      do {
        pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCStack_18->items[0],g_CAmmoClassInfo.name_hash);
        if (pCVar8 != (CDemonActor *)0x0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
          iVar9 = _strcmp((char *)&pCVar8[2].location.position.y,pcVar11);
          if (iVar9 == 0) {
            pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            actor = core_actor_cpp_createActorByName_FUN_0040c430(pcVar11);
            core_mission_cpp_CDemonMission_generateActorName_FUN_00524700(g_CDemonMissionPtr,actor);
            (*((actor->vtable)._ub)->setup)(actor);
            *(int *)(actor[4].actor_name + 8) = pCVar8[2].health;
            *(uintptr_t *)(actor[4].actor_name + 0xc) = pCVar8[2].validation_magic;
            (*((actor->vtable)._ub)->pickup)(actor,this_ptr->owner);
            (*((actor->vtable)._ub)->onPickup)(actor,(CDemonActor *)this_ptr);
            core_actor_cpp_deleteActor_FUN_00408820(pCStack_18->items[0]);
            pCStack_18->items[0] = actor;
            pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar5);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n",pcVar11);
          }
        }
        pCStack_18 = (CInventory *)&pCStack_18->owner;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr,pCVar5,1);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = item_actor;
  pCVar3 = g_CDemonMissionPtr;
  this_ptr->item_count = this_ptr->item_count + 1;
  core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0(pCVar3,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,pCVar5,5,1);
  }
  return 1;
}
