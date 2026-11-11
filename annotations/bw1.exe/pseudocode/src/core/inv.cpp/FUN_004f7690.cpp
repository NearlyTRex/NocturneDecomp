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
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  CGoggles *pCVar10;
  CLightGun *pCVar11;
  CDemonActor *pCVar12;
  int iVar13;
  CInventory *pCVar14;
  char *pcVar15;
  char *pcVar16;
  byte bVar17;
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
  
  bVar17 = 0;
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
  pcVar15 = acStack_334;
  if (((this_ptr->owner == *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) &&
      (show_tutorial_message != 0)) && (g_CGamePtr->letterbox_mode == 0)) {
    pcStack_34 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(item_actor);
    core_inv_cpp_getItemDescription_FUN_004f6350(item_actor);
    iVar6 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You've found : ");
    do {
      cVar1 = *pcVar7;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    if (iVar6 != 0) {
      _sprintf(acStack_234,&DAT_005e61e7);
      pcVar15 = acStack_234;
      iVar6 = -1;
      pcVar7 = acStack_334;
      do {
        pcVar16 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar7 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar15;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = -1;
    pcVar15 = acStack_334;
    do {
      pcVar7 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar15 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    pcVar15 = pcStack_34;
    do {
      cVar1 = *pcVar15;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    acStack_134[0] = '\0';
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CHealthItem");
    if (iVar6 != 0) {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar15 = acStack_134;
      do {
        cVar1 = *pcVar7;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to use this item to restore some health.");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CGasMask");
    if (iVar6 != 0) {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar15 = acStack_134;
      do {
        cVar1 = *pcVar7;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CGoggles");
    if (iVar6 != 0) {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar15 = acStack_134;
      do {
        cVar1 = *pcVar7;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CKeyActor");
    if (iVar6 != 0) {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("With your guns put away, press ");
      pcVar15 = acStack_134;
      do {
        cVar1 = *pcVar7;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_fire);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to open a previously locked door.");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CBoxActor");
    if (iVar6 != 0) {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pcVar15 = acStack_134;
      do {
        cVar1 = *pcVar7;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_use_item);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" to use this item.");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CAmmo");
    if (iVar6 != 0) {
      iVar6 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
      iVar6 = core_actor_cpp_createActorByName_FUN_0040c2b0(iVar6 + 0x2d4);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("This ammo is for your ");
      pcVar15 = acStack_134;
      do {
        cVar1 = *pcVar7;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar7 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(iVar6);
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(".  Select your ");
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(iVar6);
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_weapon);
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_weapon);
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e63f3);
      iVar13 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      if (iVar6 != 0) {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0xd0))(iVar6,2);
      }
    }
    iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CWeapon");
    if (iVar6 != 0) {
      uVar8 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Select your ");
      pcVar15 = acStack_134;
      do {
        cVar1 = *pcVar7;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar7 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(uVar8);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_next_weapon);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = core_menu_cpp_getKeyDisplayName_FUN_0050d220(g_CGamePtr->key_prev_weapon);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e6417);
      iVar6 = -1;
      pcVar15 = acStack_134;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + (uint)bVar17 * -2 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
    }
    core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,acStack_334,10.0);
    pcVar15 = acStack_134;
    pcVar7 = this_ptr->message_text;
    do {
      cVar1 = *pcVar15;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                          (_DAT_0152d248,this_ptr->message_text);
    this_ptr->message_display_timer = (float)iStack_14 * (float)_DAT_005e6540;
  }
  pCStack_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600
                                  (item_actor,g_CAmmoClassInfo.name_hash);
  if (pCStack_24 != (CAmmo *)0x0) {
    pcVar15 = pCStack_24->weapon_class_name;
    iVar6 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCStack_24,pcVar15);
    pCVar14 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pcStack_2c = pcVar15;
        iVar13 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (pCVar14->items[0],g_CAmmoClassInfo.name_hash);
        if (((iVar13 != 0) &&
            (iVar9 = _strcmp(pcStack_2c,(char *)(iVar13 + 0x2d4)),
            iVar9 == 0)) && (*(EAmmoType *)(iVar13 + 0x318) == pCStack_24->ammo_type)) {
          *(int *)(iVar13 + 0x314) = *(int *)(iVar13 + 0x314) + pCStack_24->ammo_count;
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found existing ammo, but no weapon\n");
          core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
          return 1;
        }
        iVar6 = iVar6 + 1;
        pCVar14 = (CInventory *)&pCVar14->owner;
        pcVar15 = pcStack_2c;
      } while (iVar6 < this_ptr->item_count);
    }
    iVar6 = 0;
    pcVar15 = pCStack_24->weapon_class_name;
    iStack_30 = 0;
    pCVar14 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar5 = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (pCVar14->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar7 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
          iVar13 = _stricmp(pcVar15,pcVar7);
          if (iVar13 == 0) goto LAB_004f84d6;
        }
        iVar6 = iVar6 + 1;
        pCVar14 = (CInventory *)&pCVar14->owner;
      } while (iVar6 < this_ptr->item_count);
    }
    if (iStack_30 != 0) {
LAB_004f84d6:
      pcStack_28 = pCStack_24->weapon_class_name;
      iVar6 = 0;
      pCVar14 = this_ptr;
      if (0 < this_ptr->item_count) {
        do {
          pCVar5 = (CDemonActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (pCVar14->items[0],g_CWeaponClassInfo.name_hash);
          if (pCVar5 != (CDemonActor *)0x0) {
            pcVar15 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
            iVar13 = _stricmp(pcStack_28,pcVar15);
            uVar4 = g_CTommyGunClassInfo.name_hash;
            if ((iVar13 == 0) &&
               (*(EAmmoType *)(pCVar5[4].actor_name + 0xc) == pCStack_24->ammo_type)) {
              *(int *)(pCVar5[4].actor_name + 8) =
                   *(int *)(pCVar5[4].actor_name + 8) + pCStack_24->ammo_count;
              iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar5,uVar4);
              if ((iVar6 != 0) && (200 < *(int *)(iVar6 + 0x568))) {
                *(uint *)(iVar6 + 0x568) = 200;
              }
              core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
              engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar6 = iVar6 + 1;
          pCVar14 = (CInventory *)&pCVar14->owner;
        } while (iVar6 < this_ptr->item_count);
      }
      pCVar5 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0(pcStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(int *)(pCVar5[4].actor_name + 8) = pCStack_24->ammo_count;
      *(EAmmoType *)(pCVar5[4].actor_name + 0xc) = pCStack_24->ammo_type;
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      this_ptr->items[this_ptr->item_count] = pCVar5;
      pCVar3 = 0x01D2C900;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_FUN_0051b740(pCVar3,item_actor,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar6 = _strcmp(pcVar15,"CDynamite");
    if (iVar6 == 0) {
      pCVar5 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar5);
      (*((pCVar5->vtable)._ub)->setup)(pCVar5);
      *(int *)(pCVar5[4].actor_name + 8) = pCStack_24->ammo_count;
      (*((pCVar5->vtable)._ub)->pickup)(pCVar5,this_ptr->owner);
      core_actor_cpp_FUN_00408560(item_actor);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_FUN_004f7690(this_ptr,pCVar5,1);
      return 1;
    }
  }
  pCVar5 = (CDemonActor *)
           core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    iVar6 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar5,g_CMeleeClassInfo.name_hash);
    if (iVar6 != 0) {
      this_ptr->items[this_ptr->item_count] = item_actor;
      pCVar3 = 0x01D2C900;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_FUN_0051b740(pCVar3,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar6 = 0;
    if (0 < this_ptr->item_count) {
      pCStack_20 = this_ptr;
      do {
        pCVar12 = (CDemonActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (pCStack_20->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar12 != (CDemonActor *)0x0) {
          pcVar15 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar12);
          pcVar7 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
          iVar13 = _strcmp(pcVar7,pcVar15);
          uVar4 = g_CTommyGunClassInfo.name_hash;
          if ((iVar13 == 0) &&
             (*(int *)(pCVar12[4].actor_name + 0xc) == *(int *)(pCVar5[4].actor_name + 0xc))) {
            *(int *)(pCVar12[4].actor_name + 8) =
                 *(int *)(pCVar12[4].actor_name + 8) + *(int *)(pCVar5[4].actor_name + 8);
            iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar12,uVar4);
            if ((iVar6 != 0) && (200 < *(int *)(iVar6 + 0x568))) {
              *(uint *)(iVar6 + 0x568) = 200;
            }
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        pCStack_20 = (CInventory *)&pCStack_20->owner;
      } while (iVar6 < this_ptr->item_count);
    }
    bVar2 = false;
    iStack_1c = 0;
    if (0 < this_ptr->item_count) {
      pCStack_18 = this_ptr;
      do {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (pCStack_18->items[0],g_CAmmoClassInfo.name_hash);
        if (iVar6 != 0) {
          pcVar15 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
          iVar13 = _strcmp((char *)(iVar6 + 0x2d4),pcVar15);
          if (iVar13 == 0) {
            pcVar15 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
            pCVar12 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0(pcVar15);
            core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar12);
            (*((pCVar12->vtable)._ub)->setup)(pCVar12);
            *(uint *)(pCVar12[4].actor_name + 8) = *(uint *)(iVar6 + 0x314);
            *(uint *)(pCVar12[4].actor_name + 0xc) = *(uint *)(iVar6 + 0x318);
            (*((pCVar12->vtable)._ub)->pickup)(pCVar12,this_ptr->owner);
            (*((pCVar12->vtable)._ub)->onPickup)(pCVar12,(CDemonActor *)this_ptr);
            core_actor_cpp_FUN_00408560(pCStack_18->items[0]);
            pCStack_18->items[0] = pCVar12;
            pcVar15 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar5);
            bVar2 = true;
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n",pcVar15);
          }
        }
        pCStack_18 = (CInventory *)&pCStack_18->owner;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_FUN_0051b740(0x01D2C900,pCVar5,1);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = item_actor;
  this_ptr->item_count = this_ptr->item_count + 1;
  if (this_ptr->goggles_ptr == (CGoggles *)0x0) {
    pCVar10 = (CGoggles *)
              core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGogglesClassInfo.name_hash);
    this_ptr->goggles_ptr = pCVar10;
  }
  if (this_ptr->light_gun_ptr == (CLightGun *)0x0) {
    pCVar11 = (CLightGun *)
              core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGasMaskClassInfo.name_hash);
    this_ptr->light_gun_ptr = pCVar11;
  }
  core_mission_cpp_FUN_0051b1d0(0x01D2C900,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar5 != (CDemonActor *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(this_ptr,pCVar5,5,1);
  }
  return 1;
}
