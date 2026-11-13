// Name: core_inv.cpp_FUN_004f7690
// Address: 004f7690
// Address Range: [[004f7690, 004f8b6c]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_FUN_004f7690(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_inv_cpp_FUN_004f7690(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

{
  char cVar1;
  bool bVar2;
  CDemonMission *pCVar3;
  uint uVar4;
  CDemonActor *pCVar5;
  char *pcVar6;
  int iVar7;
  CGoggles *pCVar8;
  CLightGun *pCVar9;
  CDemonActor *pCVar10;
  CDemonActor *actor;
  int iVar11;
  CInventory *pCVar12;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
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
  
  bVar15 = 0;
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
  pcVar13 = acStack_334;
  if (((this_ptr->owner == *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) &&
      (show_tutorial_message != 0)) && (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_34 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(item_actor);
    core_inv_cpp_getItemDescription_FUN_004f6350(item_actor);
    pCVar5 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You've found : ");
    do {
      cVar1 = *pcVar6;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    if (pCVar5 != (CDemonActor *)0x0) {
      _sprintf(acStack_234,&DAT_005e61e7);
      pcVar13 = acStack_234;
      iVar11 = -1;
      pcVar6 = acStack_334;
      do {
        pcVar14 = pcVar6;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar6 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = -1;
    pcVar13 = acStack_334;
    do {
      pcVar6 = pcVar13;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar6 = pcVar13 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    pcVar13 = pcStack_34;
    do {
      cVar1 = *pcVar13;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    acStack_134[0] = '\0';
    iVar11 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CHealthItem");
    if (iVar11 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar13 = acStack_134;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to use this item to restore some health.");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CGasMask");
    if (iVar11 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar13 = acStack_134;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CGoggles");
    if (iVar11 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar13 = acStack_134;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CKeyActor");
    if (iVar11 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("With your guns put away, press ");
      pcVar13 = acStack_134;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_fire);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to open a previously locked door.");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CBoxActor");
    if (iVar11 != 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar13 = acStack_134;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" to use this item.");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CAmmo");
    if (iVar11 != 0) {
      pCVar5 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c2b0((char *)&pCVar5[2].location.position.y)
      ;
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("This ammo is for your ");
      pcVar13 = acStack_134;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(pCVar5);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(".  Select your ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(pCVar5);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_weapon);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_weapon);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e63f3);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      if (pCVar5 != (CDemonActor *)0x0) {
        (*((pCVar5->vtable)._ub)->dtor)(pCVar5,2);
      }
    }
    iVar11 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CWeapon");
    if (iVar11 != 0) {
      pCVar5 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select your ");
      pcVar13 = acStack_134;
      do {
        cVar1 = *pcVar6;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(pCVar5);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_weapon);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_weapon);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e6417);
      iVar11 = -1;
      pcVar13 = acStack_134;
      do {
        pcVar14 = pcVar13;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar14 = pcVar13 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,acStack_334,10.0);
    pcVar13 = acStack_134;
    pcVar6 = this_ptr->message_text;
    do {
      cVar1 = *pcVar13;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                          (_DAT_0152d248,this_ptr->message_text);
    this_ptr->message_display_timer = (float)iStack_14 * (float)_DAT_005e6540;
  }
  pCStack_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600
                                  (item_actor,g_CAmmoClassInfo.name_hash);
  if (pCStack_24 != (CAmmo *)0x0) {
    pcVar13 = pCStack_24->weapon_class_name;
    iVar11 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCStack_24,pcVar13);
    pCVar12 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pcStack_2c = pcVar13;
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (pCVar12->items[0],g_CAmmoClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) &&
            (iVar7 = _strcmp
                               (pcStack_2c,(char *)&pCVar5[2].location.position.y), iVar7 == 0)) &&
           (pCVar5[2].validation_magic == pCStack_24->ammo_type)) {
          pCVar5[2].health = pCVar5[2].health + pCStack_24->ammo_count;
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"Found existing ammo, but no weapon\n");
          core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(0x01D2C900,item_actor,1);
          return 1;
        }
        iVar11 = iVar11 + 1;
        pCVar12 = (CInventory *)&pCVar12->owner;
        pcVar13 = pcStack_2c;
      } while (iVar11 < this_ptr->item_count);
    }
    iVar11 = 0;
    pcVar13 = pCStack_24->weapon_class_name;
    iStack_30 = 0;
    pCVar12 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (pCVar12->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
          iVar7 = _stricmp(pcVar13,pcVar6);
          if (iVar7 == 0) goto LAB_004f84d6;
        }
        iVar11 = iVar11 + 1;
        pCVar12 = (CInventory *)&pCVar12->owner;
      } while (iVar11 < this_ptr->item_count);
    }
    if (iStack_30 != 0) {
LAB_004f84d6:
      pcStack_28 = pCStack_24->weapon_class_name;
      iVar11 = 0;
      pCVar12 = this_ptr;
      if (0 < this_ptr->item_count) {
        do {
          pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                             (pCVar12->items[0],g_CWeaponClassInfo.name_hash);
          if (pCVar5 != (CDemonActor *)0x0) {
            pcVar13 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
            iVar7 = _stricmp(pcStack_28,pcVar13);
            uVar4 = g_CTommyGunClassInfo.name_hash;
            if ((iVar7 == 0) &&
               (*(EAmmoType *)(pCVar5[4].actor_name + 0xc) == pCStack_24->ammo_type)) {
              *(int *)(pCVar5[4].actor_name + 8) =
                   *(int *)(pCVar5[4].actor_name + 8) + pCStack_24->ammo_count;
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar5,uVar4);
              if ((pCVar5 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar5[4].actor_name + 8))) {
                pCVar5[4].actor_name[8] = -0x38;
                pCVar5[4].actor_name[9] = '\0';
                pCVar5[4].actor_name[10] = '\0';
                pCVar5[4].actor_name[0xb] = '\0';
              }
              core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740
                        (0x01D2C900,item_actor,1);
              engine_console_cpp_CConsole_printf_FUN_00445430
                        (g_CConsolePtr,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar11 = iVar11 + 1;
          pCVar12 = (CInventory *)&pCVar12->owner;
        } while (iVar11 < this_ptr->item_count);
      }
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c2b0(pcStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(int *)(pCVar5[4].actor_name + 8) = pCStack_24->ammo_count;
      *(EAmmoType *)(pCVar5[4].actor_name + 0xc) = pCStack_24->ammo_type;
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      this_ptr->items[this_ptr->item_count] = pCVar5;
      pCVar3 = 0x01D2C900;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(pCVar3,item_actor,1);
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar11 = _strcmp(pcVar13,"CDynamite");
    if (iVar11 == 0) {
      pCVar5 = core_actor_cpp_createActorByName_FUN_0040c2b0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(int *)(pCVar5[4].actor_name + 8) = pCStack_24->ammo_count;
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      core_actor_cpp_FUN_00408560(item_actor);
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_FUN_004f7690(this_ptr,pCVar5,1);
      return 1;
    }
  }
  pCVar5 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    pCVar10 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar5,g_CMeleeClassInfo.name_hash);
    if (pCVar10 != (CDemonActor *)0x0) {
      this_ptr->items[this_ptr->item_count] = item_actor;
      pCVar3 = 0x01D2C900;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(pCVar3,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar11 = 0;
    if (0 < this_ptr->item_count) {
      pCStack_20 = this_ptr;
      do {
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (pCStack_20->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar10 != (CDemonActor *)0x0) {
          pcVar13 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar10);
          pcVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
          iVar7 = _strcmp(pcVar6,pcVar13);
          uVar4 = g_CTommyGunClassInfo.name_hash;
          if ((iVar7 == 0) &&
             (*(int *)(pCVar10[4].actor_name + 0xc) == *(int *)(pCVar5[4].actor_name + 0xc))) {
            *(int *)(pCVar10[4].actor_name + 8) =
                 *(int *)(pCVar10[4].actor_name + 8) + *(int *)(pCVar5[4].actor_name + 8);
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar10,uVar4);
            if ((pCVar5 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar5[4].actor_name + 8))) {
              pCVar5[4].actor_name[8] = -0x38;
              pCVar5[4].actor_name[9] = '\0';
              pCVar5[4].actor_name[10] = '\0';
              pCVar5[4].actor_name[0xb] = '\0';
            }
            engine_console_cpp_CConsole_printf_FUN_00445430
                      (g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(0x01D2C900,item_actor,1)
            ;
            return 1;
          }
        }
        iVar11 = iVar11 + 1;
        pCStack_20 = (CInventory *)&pCStack_20->owner;
      } while (iVar11 < this_ptr->item_count);
    }
    bVar2 = false;
    iStack_1c = 0;
    if (0 < this_ptr->item_count) {
      pCStack_18 = this_ptr;
      do {
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (pCStack_18->items[0],g_CAmmoClassInfo.name_hash);
        if (pCVar10 != (CDemonActor *)0x0) {
          pcVar13 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
          iVar11 = _strcmp
                             ((char *)&pCVar10[2].location.position.y,pcVar13);
          if (iVar11 == 0) {
            pcVar13 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
            actor = core_actor_cpp_createActorByName_FUN_0040c2b0(pcVar13);
            core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,actor);
            (*((actor->vtable)._ub)->setup)(actor);
            *(int *)(actor[4].actor_name + 8) = pCVar10[2].health;
            *(uintptr_t *)(actor[4].actor_name + 0xc) = pCVar10[2].validation_magic;
            (*((actor->vtable)._ub)->pickup)(actor,this_ptr->owner);
            (*((actor->vtable)._ub)->onPickup)(actor,(CDemonActor *)this_ptr);
            core_actor_cpp_FUN_00408560(pCStack_18->items[0]);
            pCStack_18->items[0] = actor;
            core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_00445430
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n");
          }
        }
        pCStack_18 = (CInventory *)&pCStack_18->owner;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_0051b740(0x01D2C900,pCVar5,1);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = item_actor;
  this_ptr->item_count = this_ptr->item_count + 1;
  if (this_ptr->goggles_ptr == (CGoggles *)0x0) {
    pCVar8 = (CGoggles *)
             core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGogglesClassInfo.name_hash);
    this_ptr->goggles_ptr = pCVar8;
  }
  if (this_ptr->light_gun_ptr == (CLightGun *)0x0) {
    pCVar9 = (CLightGun *)
             core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGasMaskClassInfo.name_hash);
    this_ptr->light_gun_ptr = pCVar9;
  }
  core_mission_cpp_CDemonMission_removeActorFromList_FUN_0051b1d0(0x01D2C900,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(this_ptr,pCVar5,5,1);
  }
  return 1;
}
