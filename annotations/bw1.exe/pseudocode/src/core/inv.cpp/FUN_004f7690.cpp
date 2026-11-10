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
  CInventory CVar2;
  bool bVar3;
  CDemonMission *pCVar4;
  uint uVar5;
  CDemonActor *pCVar6;
  int iVar7;
  char *pcVar8;
  CInventory *pCVar9;
  uint uVar10;
  int iVar11;
  CDemonActor *pCVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  CInventory *pCVar16;
  CInventory *pCVar17;
  byte bVar18;
  char acStack_334 [256];
  char acStack_234 [256];
  CInventory aCStack_134 [256];
  char *pcStack_34;
  int iStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  CAmmo *pCStack_24;
  CInventory *pCStack_20;
  int iStack_1c;
  CInventory *pCStack_18;
  int iStack_14;
  
  bVar18 = 0;
  if (99 < *(int *)(this_ptr + 0x10)) {
    return 0;
  }
  pCVar6 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
  if (pCVar6 != *(CDemonActor **)(this_ptr + 4)) {
    (*((item_actor->vtable)._ub)->onDropped)(item_actor,(CVector3f *)0x0);
    if (*(CDemonActor **)(this_ptr + 4) != (CDemonActor *)0x0) {
      (*((item_actor->vtable)._ub)->pickup)(item_actor,*(CDemonActor **)(this_ptr + 4));
    }
  }
  pcVar14 = acStack_334;
  if (((*(int *)(this_ptr + 4) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) &&
      (show_tutorial_message != 0)) && (*(int *)&g_CGamePtr->field_0x244 == 0)) {
    pcStack_34 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(item_actor);
    core_inv_cpp_getItemDescription_FUN_004f6350(item_actor);
    iVar7 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You've found : ");
    do {
      cVar1 = *pcVar8;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    if (iVar7 != 0) {
      _sprintf(acStack_234,&DAT_005e61e7);
      pcVar14 = acStack_234;
      iVar7 = -1;
      pcVar8 = acStack_334;
      do {
        pcVar15 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar15 = pcVar8 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar15;
      } while (cVar1 != '\0');
      pcVar15 = pcVar15 + -1;
      do {
        cVar1 = *pcVar14;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
    }
    iVar7 = -1;
    pcVar14 = acStack_334;
    do {
      pcVar8 = pcVar14;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar8 = pcVar14 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    pcVar14 = pcStack_34;
    do {
      cVar1 = *pcVar14;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    aCStack_134[0] = (CInventory)0x0;
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CHealthItem");
    if (iVar7 != 0) {
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar9;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to use this item to restore some health.");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CGasMask");
    if (iVar7 != 0) {
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar9;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CGoggles");
    if (iVar7 != 0) {
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar9;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CKeyActor");
    if (iVar7 != 0) {
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("With your guns put away, press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar9;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x48);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to open a previously locked door.");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CBoxActor");
    if (iVar7 != 0) {
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar9;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090(" to use this item.");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CAmmo");
    if (iVar7 != 0) {
      iVar7 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
      iVar7 = core_actor_cpp_createActorByName_FUN_0040c2b0(iVar7 + 0x2d4);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090("This ammo is for your ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar9;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(iVar7);
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090(".  Select your ");
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(iVar7);
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x90);
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x94);
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e63f3);
      iVar13 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      if (iVar7 != 0) {
        (**(code **)(*(int *)(iVar7 + 0x154) + 0xd0))(iVar7,2);
      }
    }
    iVar7 = core_actor_cpp_isOfClass_FUN_0040c550(item_actor,"CWeapon");
    if (iVar7 != 0) {
      uVar10 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
      pCVar9 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090("Select your ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar9;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(uVar10);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x90);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)
               core_menu_cpp_getKeyDisplayName_FUN_0050d220
                         (*(EInputCodeType *)&g_CGamePtr->field_0x94);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar9 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e6417);
      iVar7 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar9;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar9[1];
        pCVar9 = pCVar9 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,acStack_334,10.0);
    pCVar16 = aCStack_134;
    pCVar9 = this_ptr + 0x354;
    do {
      CVar2 = *pCVar16;
      *pCVar9 = CVar2;
      if (CVar2 == (CInventory)0x0) break;
      CVar2 = pCVar16[1];
      pCVar16 = pCVar16 + 2;
      pCVar9[1] = CVar2;
      pCVar9 = pCVar9 + 2;
    } while (CVar2 != (CInventory)0x0);
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                          (_DAT_0152d248,(char *)(this_ptr + 0x354));
    *(float *)(this_ptr + 0x34c) = (float)iStack_14 * (float)_DAT_005e6540;
  }
  pCStack_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600
                                  (item_actor,g_CAmmoClassInfo.name_hash);
  if (pCStack_24 != (CAmmo *)0x0) {
    pcVar14 = pCStack_24->weapon_class_name;
    iVar7 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ddd0(pCStack_24,pcVar14);
    pCVar16 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        pcStack_2c = pcVar14;
        iVar13 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)(pCVar16 + 0x14),g_CAmmoClassInfo.name_hash);
        if (((iVar13 != 0) &&
            (iVar11 = _strcmp(pcStack_2c,(char *)(iVar13 + 0x2d4)),
            iVar11 == 0)) && (*(EAmmoType *)(iVar13 + 0x318) == pCStack_24->ammo_type)) {
          *(int *)(iVar13 + 0x314) = *(int *)(iVar13 + 0x314) + pCStack_24->ammo_count;
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found existing ammo, but no weapon\n");
          core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
          return 1;
        }
        iVar7 = iVar7 + 1;
        pCVar16 = pCVar16 + 4;
        pcVar14 = pcStack_2c;
      } while (iVar7 < *(int *)(this_ptr + 0x10));
    }
    iVar7 = 0;
    pcVar14 = pCStack_24->weapon_class_name;
    iStack_30 = 0;
    pCVar16 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        pCVar6 = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)(pCVar16 + 0x14),g_CWeaponClassInfo.name_hash);
        if (pCVar6 != (CDemonActor *)0x0) {
          pcVar8 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar6);
          iVar13 = _stricmp(pcVar14,pcVar8);
          if (iVar13 == 0) goto LAB_004f84d6;
        }
        iVar7 = iVar7 + 1;
        pCVar16 = pCVar16 + 4;
      } while (iVar7 < *(int *)(this_ptr + 0x10));
    }
    if (iStack_30 != 0) {
LAB_004f84d6:
      pcStack_28 = pCStack_24->weapon_class_name;
      iVar7 = 0;
      pCVar16 = this_ptr;
      if (0 < *(int *)(this_ptr + 0x10)) {
        do {
          pCVar6 = (CDemonActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c600
                             (*(uint *)(pCVar16 + 0x14),g_CWeaponClassInfo.name_hash);
          if (pCVar6 != (CDemonActor *)0x0) {
            pcVar14 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar6);
            iVar13 = _stricmp(pcStack_28,pcVar14);
            uVar5 = g_CTommyGunClassInfo.name_hash;
            if ((iVar13 == 0) &&
               (*(EAmmoType *)(pCVar6[4].actor_name + 0xc) == pCStack_24->ammo_type)) {
              *(int *)(pCVar6[4].actor_name + 8) =
                   *(int *)(pCVar6[4].actor_name + 8) + pCStack_24->ammo_count;
              iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar6,uVar5);
              if ((iVar7 != 0) && (200 < *(int *)(iVar7 + 0x568))) {
                *(uint *)(iVar7 + 0x568) = 200;
              }
              core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
              engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar7 = iVar7 + 1;
          pCVar16 = pCVar16 + 4;
        } while (iVar7 < *(int *)(this_ptr + 0x10));
      }
      pCVar6 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0(pcStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar6);
      (*((pCVar6->vtable)._ub)->setup)(pCVar6);
      *(int *)(pCVar6[4].actor_name + 8) = pCStack_24->ammo_count;
      *(EAmmoType *)(pCVar6[4].actor_name + 0xc) = pCStack_24->ammo_type;
      (*((pCVar6->vtable)._ub)->pickup)(pCVar6,*(CDemonActor **)(this_ptr + 4));
      *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = pCVar6;
      pCVar4 = 0x01D2C900;
      *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
      core_mission_cpp_FUN_0051b740(pCVar4,item_actor,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar7 = _strcmp(pcVar14,"CDynamite");
    if (iVar7 == 0) {
      pCVar6 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar6);
      (*((pCVar6->vtable)._ub)->setup)(pCVar6);
      *(int *)(pCVar6[4].actor_name + 8) = pCStack_24->ammo_count;
      (*((pCVar6->vtable)._ub)->pickup)(pCVar6,*(CDemonActor **)(this_ptr + 4));
      core_actor_cpp_FUN_00408560(item_actor);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_FUN_004f7690(this_ptr,pCVar6,1);
      return 1;
    }
  }
  pCVar6 = (CDemonActor *)
           core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar6 != (CDemonActor *)0x0) {
    iVar7 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar6,g_CMeleeClassInfo.name_hash);
    if (iVar7 != 0) {
      *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = item_actor;
      pCVar4 = 0x01D2C900;
      *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
      core_mission_cpp_FUN_0051b740(pCVar4,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    iVar7 = 0;
    if (0 < *(int *)(this_ptr + 0x10)) {
      pCStack_20 = this_ptr;
      do {
        pCVar12 = (CDemonActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)(pCStack_20 + 0x14),g_CWeaponClassInfo.name_hash);
        if (pCVar12 != (CDemonActor *)0x0) {
          pcVar14 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar12);
          pcVar8 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar6);
          iVar13 = _strcmp(pcVar8,pcVar14);
          uVar5 = g_CTommyGunClassInfo.name_hash;
          if ((iVar13 == 0) &&
             (*(int *)(pCVar12[4].actor_name + 0xc) == *(int *)(pCVar6[4].actor_name + 0xc))) {
            *(int *)(pCVar12[4].actor_name + 8) =
                 *(int *)(pCVar12[4].actor_name + 8) + *(int *)(pCVar6[4].actor_name + 8);
            iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar12,uVar5);
            if ((iVar7 != 0) && (200 < *(int *)(iVar7 + 0x568))) {
              *(uint *)(iVar7 + 0x568) = 200;
            }
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
            return 1;
          }
        }
        iVar7 = iVar7 + 1;
        pCStack_20 = pCStack_20 + 4;
      } while (iVar7 < *(int *)(this_ptr + 0x10));
    }
    bVar3 = false;
    iStack_1c = 0;
    if (0 < *(int *)(this_ptr + 0x10)) {
      pCStack_18 = this_ptr;
      do {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(pCStack_18 + 0x14),g_CAmmoClassInfo.name_hash);
        if (iVar7 != 0) {
          pcVar14 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar6);
          iVar13 = _strcmp((char *)(iVar7 + 0x2d4),pcVar14);
          if (iVar13 == 0) {
            pcVar14 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar6);
            pCVar12 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0(pcVar14);
            core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar12);
            (*((pCVar12->vtable)._ub)->setup)(pCVar12);
            *(uint *)(pCVar12[4].actor_name + 8) = *(uint *)(iVar7 + 0x314);
            *(uint *)(pCVar12[4].actor_name + 0xc) = *(uint *)(iVar7 + 0x318);
            (*((pCVar12->vtable)._ub)->pickup)(pCVar12,*(CDemonActor **)(this_ptr + 4));
            (*((pCVar12->vtable)._ub)->onPickup)(pCVar12,(CDemonActor *)this_ptr);
            core_actor_cpp_FUN_00408560(*(uint *)(pCStack_18 + 0x14));
            *(CDemonActor **)(pCStack_18 + 0x14) = pCVar12;
            pcVar14 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar6);
            bVar3 = true;
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n",pcVar14);
          }
        }
        pCStack_18 = pCStack_18 + 4;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < *(int *)(this_ptr + 0x10));
    }
    if (bVar3) {
      core_mission_cpp_FUN_0051b740(0x01D2C900,pCVar6,1);
      return 1;
    }
  }
  *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = item_actor;
  *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
  if (*(int *)(this_ptr + 0x460) == 0) {
    uVar10 = (CGoggles *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGogglesClassInfo.name_hash);
    *(uint *)(this_ptr + 0x460) = uVar10;
  }
  if (*(int *)(this_ptr + 0x45c) == 0) {
    uVar10 = (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGasMaskClassInfo.name_hash);
    *(uint *)(this_ptr + 0x45c) = uVar10;
  }
  core_mission_cpp_FUN_0051b1d0(0x01D2C900,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar6 != (CDemonActor *)0x0) && (*(int *)(this_ptr + 0x338) == 0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(this_ptr,pCVar6,5,1);
  }
  return 1;
}
