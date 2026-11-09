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
  int iVar6;
  char *pcVar7;
  CInventory *pCVar8;
  uint uVar9;
  CDemonActor *pCVar10;
  int iVar11;
  CDemonActor *pCVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  CInventory *pCVar16;
  CInventory *pCVar17;
  byte *str1;
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
  iVar6 = (**(code **)(*(int *)&item_actor->field_0x154 + 0x94))(item_actor);
  if (iVar6 != *(int *)(this_ptr + 4)) {
    (**(code **)(*(int *)&item_actor->field_0x154 + 0x8c))(item_actor,0);
    if (*(int *)(this_ptr + 4) != 0) {
      (**(code **)(*(int *)&item_actor->field_0x154 + 0x88))(item_actor,*(int *)(this_ptr + 4));
    }
  }
  pcVar14 = acStack_334;
  if (((*(int *)(this_ptr + 4) == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) &&
      (show_tutorial_message != 0)) && (*(int *)&g_CGamePtr->field_0x244 == 0)) {
    pcStack_34 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(item_actor);
    core_inv_cpp_getItemDescription_FUN_004f6350(item_actor);
    iVar6 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You've found : ");
    do {
      cVar1 = *pcVar7;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    if (iVar6 != 0) {
      FUN_005bfb40(acStack_234,&DAT_005e61e7,*(uint *)(iVar6 + 0x314));
      pcVar14 = acStack_234;
      iVar6 = -1;
      pcVar7 = acStack_334;
      do {
        pcVar15 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar15 = pcVar7 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
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
    iVar6 = -1;
    pcVar14 = acStack_334;
    do {
      pcVar7 = pcVar14;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar14 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    pcVar14 = pcStack_34;
    do {
      cVar1 = *pcVar14;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    aCStack_134[0] = (CInventory)0x0;
    iVar6 = core_actor_cpp_FUN_0040c550(item_actor,"CHealthItem");
    if (iVar6 != 0) {
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar8;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to use this item to restore some health.");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar6 = core_actor_cpp_FUN_0040c550(item_actor,"CGasMask");
    if (iVar6 != 0) {
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar8;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar6 = core_actor_cpp_FUN_0040c550(item_actor,"CGoggles");
    if (iVar6 != 0) {
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar8;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to put on and off the goggles.");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar6 = core_actor_cpp_FUN_0040c550(item_actor,"CKeyActor");
    if (iVar6 != 0) {
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("With your guns put away, press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar8;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x48);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to open a previously locked door.");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar6 = core_actor_cpp_FUN_0040c550(item_actor,"CBoxActor");
    if (iVar6 != 0) {
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090("Press ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar8;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x98);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x9c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090
                         (" to cycle through your inventory.  Press ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x4c);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090(" to use this item.");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    iVar6 = core_actor_cpp_FUN_0040c550(item_actor,"CAmmo");
    if (iVar6 != 0) {
      iVar6 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CAmmoClassInfo.name_hash);
      iVar6 = core_actor_cpp_createActorByName_FUN_0040c2b0(iVar6 + 0x2d4);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090("This ammo is for your ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar8;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(iVar6);
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(iVar6);
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x90);
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x94);
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e63f3);
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
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      if (iVar6 != 0) {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0xd0))(iVar6,2);
      }
    }
    iVar6 = core_actor_cpp_FUN_0040c550(item_actor,"CWeapon");
    if (iVar6 != 0) {
      uVar9 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
      pCVar8 = (CInventory *)
               support_newmsg_cpp_getLocalizedString_FUN_00531090("Select your ");
      pCVar16 = aCStack_134;
      do {
        CVar2 = *pCVar8;
        *pCVar16 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar16[1] = CVar2;
        pCVar16 = pCVar16 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(uVar9);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" with ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x90);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(" and ");
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)core_menu_cpp_FUN_0050d220(*(EInputCodeType *)&g_CGamePtr->field_0x94);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
      pCVar8 = (CInventory *)support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e6417);
      iVar6 = -1;
      pCVar16 = aCStack_134;
      do {
        pCVar17 = pCVar16;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pCVar17 = pCVar16 + (uint)bVar18 * -2 + 1;
        CVar2 = *pCVar16;
        pCVar16 = pCVar17;
      } while (CVar2 != (CInventory)0x0);
      pCVar17 = pCVar17 + -1;
      do {
        CVar2 = *pCVar8;
        *pCVar17 = CVar2;
        if (CVar2 == (CInventory)0x0) break;
        CVar2 = pCVar8[1];
        pCVar8 = pCVar8 + 2;
        pCVar17[1] = CVar2;
        pCVar17 = pCVar17 + 2;
      } while (CVar2 != (CInventory)0x0);
    }
    core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,acStack_334,10.0);
    pCVar16 = aCStack_134;
    pCVar8 = this_ptr + 0x354;
    do {
      CVar2 = *pCVar16;
      *pCVar8 = CVar2;
      if (CVar2 == (CInventory)0x0) break;
      CVar2 = pCVar16[1];
      pCVar16 = pCVar16 + 2;
      pCVar8[1] = CVar2;
      pCVar8 = pCVar8 + 2;
    } while (CVar2 != (CInventory)0x0);
    iStack_14 = engine_font_cpp_FUN_004c3ea0(_DAT_0152d248,(char *)(this_ptr + 0x354));
    *(float *)(this_ptr + 0x34c) = (float)iStack_14 * (float)_DAT_005e6540;
  }
  pCStack_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600
                                  (item_actor,g_CAmmoClassInfo.name_hash);
  if (pCStack_24 != (CAmmo *)0x0) {
    pcVar14 = &pCStack_24->field_0x2d4;
    iVar6 = 0;
    core_ammo_cpp_FUN_0040ddd0(pCStack_24,pcVar14);
    pCVar16 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        pcStack_2c = pcVar14;
        iVar13 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)(pCVar16 + 0x14),g_CAmmoClassInfo.name_hash);
        if (((iVar13 != 0) &&
            (iVar11 = _strcmp(pcStack_2c,(char *)(iVar13 + 0x2d4)),
            iVar11 == 0)) && (*(int *)(iVar13 + 0x318) == *(int *)&pCStack_24->field_0x318)) {
          *(int *)(iVar13 + 0x314) = *(int *)(iVar13 + 0x314) + *(int *)&pCStack_24->field_0x314;
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found existing ammo, but no weapon\n");
          core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
          return 1;
        }
        iVar6 = iVar6 + 1;
        pCVar16 = pCVar16 + 4;
        pcVar14 = pcStack_2c;
      } while (iVar6 < *(int *)(this_ptr + 0x10));
    }
    iVar6 = 0;
    str1 = &pCStack_24->field_0x2d4;
    iStack_30 = 0;
    pCVar16 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        pCVar10 = (CDemonActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)(pCVar16 + 0x14),g_CWeaponClassInfo.name_hash);
        if (pCVar10 != (CDemonActor *)0x0) {
          pcVar14 = core_actor_cpp_FUN_00408830(pCVar10);
          iVar13 = _stricmp(str1,pcVar14);
          if (iVar13 == 0) goto LAB_004f84d6;
        }
        iVar6 = iVar6 + 1;
        pCVar16 = pCVar16 + 4;
      } while (iVar6 < *(int *)(this_ptr + 0x10));
    }
    if (iStack_30 != 0) {
LAB_004f84d6:
      pcStack_28 = &pCStack_24->field_0x2d4;
      iVar6 = 0;
      pCVar16 = this_ptr;
      if (0 < *(int *)(this_ptr + 0x10)) {
        do {
          pCVar10 = (CDemonActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(uint *)(pCVar16 + 0x14),g_CWeaponClassInfo.name_hash);
          if (pCVar10 != (CDemonActor *)0x0) {
            pcVar14 = core_actor_cpp_FUN_00408830(pCVar10);
            iVar13 = _stricmp(pcStack_28,pcVar14);
            uVar5 = g_CTommyGunClassInfo.name_hash;
            if ((iVar13 == 0) && (*(int *)&pCVar10[4].field_0xc == *(int *)&pCStack_24->field_0x318)
               ) {
              *(int *)&pCVar10[4].field_0x8 =
                   *(int *)&pCVar10[4].field_0x8 + *(int *)&pCStack_24->field_0x314;
              iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar10,uVar5);
              if ((iVar6 != 0) && (200 < *(int *)(iVar6 + 0x568))) {
                *(uint *)(iVar6 + 0x568) = 200;
              }
              core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
              engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar6 = iVar6 + 1;
          pCVar16 = pCVar16 + 4;
        } while (iVar6 < *(int *)(this_ptr + 0x10));
      }
      pCVar10 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0(pcStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar10);
      (*(code *)**(uint **)&pCVar10->field_0x154)(pCVar10);
      *(uint *)&pCVar10[4].field_0x8 = *(uint *)&pCStack_24->field_0x314;
      *(uint *)&pCVar10[4].field_0xc = *(uint *)&pCStack_24->field_0x318;
      (**(code **)(*(int *)&pCVar10->field_0x154 + 0x88))(pCVar10,*(uint *)(this_ptr + 4));
      *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = pCVar10;
      pCVar4 = 0x01D2C900;
      *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
      core_mission_cpp_FUN_0051b740(pCVar4,item_actor,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar6 = _strcmp(str1,"CDynamite");
    if (iVar6 == 0) {
      pCVar10 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar10);
      (*(code *)**(uint **)&pCVar10->field_0x154)(pCVar10);
      *(uint *)&pCVar10[4].field_0x8 = *(uint *)&pCStack_24->field_0x314;
      (**(code **)(*(int *)&pCVar10->field_0x154 + 0x88))(pCVar10,*(uint *)(this_ptr + 4));
      core_actor_cpp_FUN_00408560(item_actor);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_FUN_004f7690(this_ptr,pCVar10,1);
      return 1;
    }
  }
  pCVar10 = (CDemonActor *)
            core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar10 != (CDemonActor *)0x0) {
    iVar6 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar10,g_CMeleeClassInfo.name_hash);
    if (iVar6 != 0) {
      *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = item_actor;
      pCVar4 = 0x01D2C900;
      *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
      core_mission_cpp_FUN_0051b740(pCVar4,item_actor,0);
      (**(code **)(*(int *)&item_actor->field_0x154 + 0x6c))(item_actor,this_ptr);
      return 1;
    }
    iVar6 = 0;
    if (0 < *(int *)(this_ptr + 0x10)) {
      pCStack_20 = this_ptr;
      do {
        pCVar12 = (CDemonActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)(pCStack_20 + 0x14),g_CWeaponClassInfo.name_hash);
        if (pCVar12 != (CDemonActor *)0x0) {
          pcVar14 = core_actor_cpp_FUN_00408830(pCVar12);
          pcVar7 = core_actor_cpp_FUN_00408830(pCVar10);
          iVar13 = _strcmp(pcVar7,pcVar14);
          uVar5 = g_CTommyGunClassInfo.name_hash;
          if ((iVar13 == 0) && (*(int *)&pCVar12[4].field_0xc == *(int *)&pCVar10[4].field_0xc)) {
            *(int *)&pCVar12[4].field_0x8 =
                 *(int *)&pCVar12[4].field_0x8 + *(int *)&pCVar10[4].field_0x8;
            iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600(pCVar12,uVar5);
            if ((iVar6 != 0) && (200 < *(int *)(iVar6 + 0x568))) {
              *(uint *)(iVar6 + 0x568) = 200;
            }
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_0051b740(0x01D2C900,item_actor,1);
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        pCStack_20 = pCStack_20 + 4;
      } while (iVar6 < *(int *)(this_ptr + 0x10));
    }
    bVar3 = false;
    iStack_1c = 0;
    if (0 < *(int *)(this_ptr + 0x10)) {
      pCStack_18 = this_ptr;
      do {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)(pCStack_18 + 0x14),g_CAmmoClassInfo.name_hash);
        if (iVar6 != 0) {
          pcVar14 = core_actor_cpp_FUN_00408830(pCVar10);
          iVar13 = _strcmp((char *)(iVar6 + 0x2d4),pcVar14);
          if (iVar13 == 0) {
            pcVar14 = core_actor_cpp_FUN_00408830(pCVar10);
            pCVar12 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c2b0(pcVar14);
            core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,pCVar12);
            (*(code *)**(uint **)&pCVar12->field_0x154)(pCVar12);
            *(uint *)&pCVar12[4].field_0x8 = *(uint *)(iVar6 + 0x314);
            *(uint *)&pCVar12[4].field_0xc = *(uint *)(iVar6 + 0x318);
            (**(code **)(*(int *)&pCVar12->field_0x154 + 0x88))
                      (pCVar12,*(uint *)(this_ptr + 4));
            (**(code **)(*(int *)&pCVar12->field_0x154 + 0x6c))(pCVar12,this_ptr);
            core_actor_cpp_FUN_00408560(*(uint *)(pCStack_18 + 0x14));
            *(CDemonActor **)(pCStack_18 + 0x14) = pCVar12;
            pcVar14 = core_actor_cpp_FUN_00408830(pCVar10);
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
      core_mission_cpp_FUN_0051b740(0x01D2C900,pCVar10,1);
      return 1;
    }
  }
  *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = item_actor;
  *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
  if (*(int *)(this_ptr + 0x460) == 0) {
    uVar9 = (CGoggles *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGogglesClassInfo.name_hash);
    *(uint *)(this_ptr + 0x460) = uVar9;
  }
  if (*(int *)(this_ptr + 0x45c) == 0) {
    uVar9 = (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c600(item_actor,g_CGasMaskClassInfo.name_hash);
    *(uint *)(this_ptr + 0x45c) = uVar9;
  }
  core_mission_cpp_FUN_0051b1d0(0x01D2C900,item_actor);
  (**(code **)(*(int *)&item_actor->field_0x154 + 0x6c))(item_actor,this_ptr);
  if ((pCVar10 != (CDemonActor *)0x0) && (*(int *)(this_ptr + 0x338) == 0)) {
    core_inv_cpp_FUN_004f8dc0(this_ptr,pCVar10,5,1);
  }
  return 1;
}
