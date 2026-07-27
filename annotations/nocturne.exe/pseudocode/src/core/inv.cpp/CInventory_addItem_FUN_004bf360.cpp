// Name: core_inv.cpp_CInventory_addItem_FUN_004bf360
// Address: 004bf360
// Address Range: [[004bf360, 004c0633]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_inv_cpp_CInventory_addItem_FUN_004bf360(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_inv_cpp_CInventory_addItem_FUN_004bf360(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  char acStack_334 [256];
  char acStack_234 [256];
  char acStack_134 [256];
  char *pcStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar12 = 0;
  if (99 < *(int *)(param_1 + 8)) {
    return 0;
  }
  iVar4 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x8c))(param_2);
  if (iVar4 != *(int *)(param_1 + 4)) {
    (**(code **)(*(int *)(param_2 + 0x14c) + 0x84))(param_2,0);
    if (*(int *)(param_1 + 4) != 0) {
      (**(code **)(*(int *)(param_2 + 0x14c) + 0x80))(param_2,*(int *)(param_1 + 4));
    }
  }
  pcVar9 = acStack_334;
  if (((*(int *)(param_1 + 4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) && (param_3 != 0)) &&
     (*(int *)(0x01C775EC + 0x228) == 0)) {
    pcStack_34 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(param_2);
    core_inv_cpp_getItemIconName_FUN_004bed10(param_2);
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,g_CAmmoActorType_007641bc.name_hash)
    ;
    pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("You've found : ");
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (iVar4 != 0) {
      _sprintf(acStack_134,"%d ",*(uint *)(iVar4 + 0x30c));
      pcVar9 = acStack_134;
      iVar4 = -1;
      pcVar5 = acStack_334;
      do {
        pcVar10 = pcVar5;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar10;
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
    iVar4 = -1;
    pcVar9 = acStack_334;
    do {
      pcVar5 = pcVar9;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    pcVar9 = pcStack_34;
    do {
      cVar1 = *pcVar9;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    acStack_234[0] = '\0';
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHealthItem");
    if (iVar4 != 0) {
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press ");
      pcVar9 = acStack_234;
      do {
        cVar1 = *pcVar5;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x84));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x88));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to cycle through your inventory.  Press ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x4c));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to use this item to restore some health.");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CGasMask");
    if (iVar4 != 0) {
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press ");
      pcVar9 = acStack_234;
      do {
        cVar1 = *pcVar5;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x84));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x88));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to cycle through your inventory.  Press ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x4c));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to put on and off the mask.");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CKeyActor");
    if (iVar4 != 0) {
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("With your guns put away, press ");
      pcVar9 = acStack_234;
      do {
        cVar1 = *pcVar5;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x48));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to open a previously locked door.");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CBoxActor");
    if (iVar4 != 0) {
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press ");
      pcVar9 = acStack_234;
      do {
        cVar1 = *pcVar5;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x84));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x88));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to cycle through your inventory.  Press ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x4c));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to use this item.");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CAmmo");
    if (iVar4 != 0) {
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (param_2,g_CAmmoActorType_007641bc.name_hash);
      iVar4 = core_actor_cpp_createActorByName_FUN_0040d540(iVar4 + 0x2cc);
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("This ammo is for your ");
      pcVar9 = acStack_234;
      do {
        cVar1 = *pcVar5;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(iVar4);
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(".  Select your ");
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(iVar4);
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" with ");
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x7c));
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x80));
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(".");
      iVar8 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x14c) + 200))(iVar4,2);
      }
    }
    iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CWeapon");
    if (iVar4 != 0) {
      uVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (param_2,g_CWeaponActorType_02ddf970.name_hash);
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select your ");
      pcVar9 = acStack_234;
      do {
        cVar1 = *pcVar5;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(uVar6);
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" with ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x7c));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x80));
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar5 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(".");
      iVar4 = -1;
      pcVar9 = acStack_234;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,acStack_334,0x41200000);
    pcVar9 = acStack_234;
    pcVar5 = (char *)(param_1 + 0x34c);
    do {
      cVar1 = *pcVar9;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                          (_DAT_014b9904,(char *)(param_1 + 0x34c));
    *(float *)(param_1 + 0x344) = (float)iStack_14 * (float)0.025000000000000001;
  }
  iStack_24 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (param_2,g_CAmmoActorType_007641bc.name_hash);
  if (iStack_24 != 0) {
    iVar4 = iStack_24 + 0x2cc;
    iVar11 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iStack_24,iVar4);
    iVar8 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iStack_2c = iVar4;
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar8 + 0xc),g_CAmmoActorType_007641bc.name_hash);
        if (((iVar4 != 0) &&
            (iVar7 = _strcmp(iStack_2c,iVar4 + 0x2cc), iVar7 == 0)) &&
           (*(int *)(iVar4 + 0x310) == *(int *)(iStack_24 + 0x310))) {
          *(int *)(iVar4 + 0x30c) = *(int *)(iVar4 + 0x30c) + *(int *)(iStack_24 + 0x30c);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"Found existing ammo, but no weapon\n");
          core_mission_cpp_FUN_004d9110(0x01CC9450,param_2,1);
          return 1;
        }
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 4;
        iVar4 = iStack_2c;
      } while (iVar11 < *(int *)(param_1 + 8));
    }
    iVar8 = 0;
    iVar11 = iStack_24 + 0x2cc;
    iStack_30 = 0;
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar4 + 0xc),g_CWeaponActorType_02ddf970.name_hash);
        if (iVar7 != 0) {
          uVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar7);
          iVar7 = _stricmp(iVar11,uVar6);
          if (iVar7 == 0) goto LAB_004bfff1;
        }
        iVar8 = iVar8 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar8 < *(int *)(param_1 + 8));
    }
    if (iStack_30 != 0) {
LAB_004bfff1:
      iStack_28 = iStack_24 + 0x2cc;
      iVar8 = 0;
      iVar4 = param_1;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar11 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (*(uint *)(iVar4 + 0xc),g_CWeaponActorType_02ddf970.name_hash);
          if (iVar11 != 0) {
            uVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar11);
            iVar7 = _stricmp(iStack_28,uVar6);
            uVar3 = g_CTommyGunActorType_02dd0fd0.name_hash;
            if ((iVar7 == 0) && (*(int *)(iVar11 + 0x564) == *(int *)(iStack_24 + 0x310))) {
              *(int *)(iVar11 + 0x560) = *(int *)(iVar11 + 0x560) + *(int *)(iStack_24 + 0x30c);
              iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar11,uVar3);
              if ((iVar4 != 0) && (200 < *(int *)(iVar4 + 0x560))) {
                *(uint *)(iVar4 + 0x560) = 200;
              }
              core_mission_cpp_FUN_004d9110(0x01CC9450,param_2,1);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar8 < *(int *)(param_1 + 8));
      }
      iVar4 = core_actor_cpp_createActorByName_FUN_0040d540(iStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar4);
      (*(code *)**(uint **)(iVar4 + 0x14c))(iVar4);
      *(uint *)(iVar4 + 0x560) = *(uint *)(iStack_24 + 0x30c);
      *(uint *)(iVar4 + 0x564) = *(uint *)(iStack_24 + 0x310);
      (**(code **)(*(int *)(iVar4 + 0x14c) + 0x80))(iVar4,*(uint *)(param_1 + 4));
      *(int *)(param_1 + 0xc + *(int *)(param_1 + 8) * 4) = iVar4;
      uVar6 = 0x01CC9450;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      core_mission_cpp_FUN_004d9110(uVar6,param_2,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar4 = _strcmp(iVar11,"CDynamite");
    if (iVar4 == 0) {
      iVar4 = core_actor_cpp_createActorByName_FUN_0040d540("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar4);
      (*(code *)**(uint **)(iVar4 + 0x14c))(iVar4);
      *(uint *)(iVar4 + 0x560) = *(uint *)(iStack_24 + 0x30c);
      (**(code **)(*(int *)(iVar4 + 0x14c) + 0x80))(iVar4,*(uint *)(param_1 + 4));
      core_actor_cpp_FUN_00409cd0(param_2);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_CInventory_addItem_FUN_004bf360(param_1,iVar4,1);
      return 1;
    }
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,g_CWeaponActorType_02ddf970.name_hash)
  ;
  if (iVar4 != 0) {
    iVar8 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar4,g_CMeleeActorType_01cc56a4.name_hash);
    if (iVar8 != 0) {
      *(int *)(param_1 + 0xc + *(int *)(param_1 + 8) * 4) = param_2;
      uVar6 = 0x01CC9450;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      core_mission_cpp_FUN_004d9110(uVar6,param_2,0);
      (**(code **)(*(int *)(param_2 + 0x14c) + 100))(param_2,param_1);
      return 1;
    }
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iStack_20 = param_1;
      do {
        iVar11 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(uint *)(iStack_20 + 0xc),g_CWeaponActorType_02ddf970.name_hash);
        if (iVar11 != 0) {
          uVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar11);
          uVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar4,uVar6);
          iVar7 = _strcmp(uVar6);
          uVar3 = g_CTommyGunActorType_02dd0fd0.name_hash;
          if ((iVar7 == 0) && (*(int *)(iVar11 + 0x564) == *(int *)(iVar4 + 0x564))) {
            *(int *)(iVar11 + 0x560) = *(int *)(iVar11 + 0x560) + *(int *)(iVar4 + 0x560);
            iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar11,uVar3);
            if ((iVar4 != 0) && (200 < *(int *)(iVar4 + 0x560))) {
              *(uint *)(iVar4 + 0x560) = 200;
            }
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_004d9110(0x01CC9450,param_2,1);
            return 1;
          }
        }
        iVar8 = iVar8 + 1;
        iStack_20 = iStack_20 + 4;
      } while (iVar8 < *(int *)(param_1 + 8));
    }
    bVar2 = false;
    iStack_1c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iStack_18 = param_1;
      do {
        iVar8 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iStack_18 + 0xc),g_CAmmoActorType_007641bc.name_hash);
        if (iVar8 != 0) {
          uVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar4);
          iVar11 = _strcmp(iVar8 + 0x2cc,uVar6);
          if (iVar11 == 0) {
            uVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar4);
            iVar11 = core_actor_cpp_createActorByName_FUN_0040d540(uVar6);
            core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar11);
            (*(code *)**(uint **)(iVar11 + 0x14c))(iVar11);
            *(uint *)(iVar11 + 0x560) = *(uint *)(iVar8 + 0x30c);
            *(uint *)(iVar11 + 0x564) = *(uint *)(iVar8 + 0x310);
            (**(code **)(*(int *)(iVar11 + 0x14c) + 0x80))(iVar11,*(uint *)(param_1 + 4));
            (**(code **)(*(int *)(iVar11 + 0x14c) + 100))(iVar11,param_1);
            core_actor_cpp_FUN_00409cd0(*(uint *)(iStack_18 + 0xc));
            *(int *)(iStack_18 + 0xc) = iVar11;
            uVar6 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar4);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"Converting existing ammo for %s to weapon\n",uVar6);
          }
        }
        iStack_18 = iStack_18 + 4;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < *(int *)(param_1 + 8));
    }
    if (bVar2) {
      core_mission_cpp_FUN_004d9110(0x01CC9450,iVar4,1);
      return 1;
    }
  }
  *(int *)(param_1 + 0xc + *(int *)(param_1 + 8) * 4) = param_2;
  uVar6 = 0x01CC9450;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  core_mission_cpp_FUN_004d8cd0(uVar6,param_2);
  (**(code **)(*(int *)(param_2 + 0x14c) + 100))(param_2,param_1);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x330) == 0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(param_1,iVar4,5,1);
  }
  return 1;
}
