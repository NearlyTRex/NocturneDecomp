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
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  byte bVar11;
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
  
  bVar11 = 0;
  if (99 < *(int *)(param_1 + 8)) {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x8c))(param_2);
  if (iVar3 != *(int *)(param_1 + 4)) {
    (**(code **)(*(int *)(param_2 + 0x14c) + 0x84))(param_2,0);
    if (*(int *)(param_1 + 4) != 0) {
      (**(code **)(*(int *)(param_2 + 0x14c) + 0x80))(param_2,*(int *)(param_1 + 4));
    }
  }
  pcVar8 = acStack_334;
  if (((*(int *)(param_1 + 4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) && (param_3 != 0)) &&
     (*(int *)(0x01C775EC + 0x228) == 0)) {
    pcStack_34 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(param_2);
    core_inv_cpp_getItemIconName_FUN_004bed10(param_2);
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,CDemonActorType_007641bc.name_hash);
    pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("You've found : ");
    do {
      cVar1 = *pcVar4;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    if (iVar3 != 0) {
      _sprintf(acStack_134,"%d ",*(uint *)(iVar3 + 0x30c));
      pcVar8 = acStack_134;
      iVar3 = -1;
      pcVar4 = acStack_334;
      do {
        pcVar9 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar4 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = -1;
    pcVar8 = acStack_334;
    do {
      pcVar4 = pcVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar4 = pcVar8 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + -1;
    pcVar8 = pcStack_34;
    do {
      cVar1 = *pcVar8;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    acStack_234[0] = '\0';
    iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CHealthItem");
    if (iVar3 != 0) {
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press ");
      pcVar8 = acStack_234;
      do {
        cVar1 = *pcVar4;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x84));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x88));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x4c));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to use this item to restore some health.");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CGasMask");
    if (iVar3 != 0) {
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press ");
      pcVar8 = acStack_234;
      do {
        cVar1 = *pcVar4;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x84));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x88));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x4c));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to put on and off the mask.");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CKeyActor");
    if (iVar3 != 0) {
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("With your guns put away, press ");
      pcVar8 = acStack_234;
      do {
        cVar1 = *pcVar4;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x48));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to open a previously locked door.");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CBoxActor");
    if (iVar3 != 0) {
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press ");
      pcVar8 = acStack_234;
      do {
        cVar1 = *pcVar4;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x84));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x88));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to cycle through your inventory.  Press ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x4c));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 (" to use this item.");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CAmmo");
    if (iVar3 != 0) {
      iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (param_2,CDemonActorType_007641bc.name_hash);
      iVar3 = core_actor_cpp_createActorByName_FUN_0040d540(iVar3 + 0x2cc);
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                 ("This ammo is for your ");
      pcVar8 = acStack_234;
      do {
        cVar1 = *pcVar4;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(iVar3);
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(".  Select your ");
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(iVar3);
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" with ");
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x7c));
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x80));
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(".");
      iVar7 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x14c) + 200))(iVar3,2);
      }
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_2,"CWeapon");
    if (iVar3 != 0) {
      uVar5 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,_DAT_02ddf9a8);
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Select your ");
      pcVar8 = acStack_234;
      do {
        cVar1 = *pcVar4;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_inv_cpp_getItemDisplayName_FUN_004beca0(uVar5);
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" with ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x7c));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(" and ");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_menu_cpp_getKeyDisplayName_FUN_004d2900
                                 (*(uint *)(0x01C775EC + 0x80));
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(".");
      iVar3 = -1;
      pcVar8 = acStack_234;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,acStack_334,0x41200000);
    pcVar8 = acStack_234;
    pcVar4 = (char *)(param_1 + 0x34c);
    do {
      cVar1 = *pcVar8;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    iStack_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                          (_DAT_014b9904,(char *)(param_1 + 0x34c));
    *(float *)(param_1 + 0x344) = (float)iStack_14 * (float)0.025000000000000001;
  }
  iStack_24 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (param_2,CDemonActorType_007641bc.name_hash);
  if (iStack_24 != 0) {
    iVar3 = iStack_24 + 0x2cc;
    iVar10 = 0;
    core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iStack_24,iVar3);
    iVar7 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iStack_2c = iVar3;
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar7 + 0xc),CDemonActorType_007641bc.name_hash);
        if (((iVar3 != 0) &&
            (iVar6 = _strcmp(iStack_2c,iVar3 + 0x2cc), iVar6 == 0)) &&
           (*(int *)(iVar3 + 0x310) == *(int *)(iStack_24 + 0x310))) {
          *(int *)(iVar3 + 0x30c) = *(int *)(iVar3 + 0x30c) + *(int *)(iStack_24 + 0x30c);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"Found existing ammo, but no weapon\n");
          FUN_004d9110(0x01CC9450,param_2,1);
          return 1;
        }
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 4;
        iVar3 = iStack_2c;
      } while (iVar10 < *(int *)(param_1 + 8));
    }
    iVar7 = 0;
    iVar10 = iStack_24 + 0x2cc;
    iStack_30 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar3 + 0xc),_DAT_02ddf9a8);
        if (iVar6 != 0) {
          uVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar6);
          iVar6 = _stricmp(iVar10,uVar5);
          if (iVar6 == 0) goto LAB_004bfff1;
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar7 < *(int *)(param_1 + 8));
    }
    if (iStack_30 != 0) {
LAB_004bfff1:
      iStack_28 = iStack_24 + 0x2cc;
      iVar7 = 0;
      iVar3 = param_1;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (*(uint *)(iVar3 + 0xc),_DAT_02ddf9a8);
          if (iVar10 != 0) {
            uVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar10);
            iVar6 = _stricmp(iStack_28,uVar5);
            uVar5 = _DAT_02dd1008;
            if ((iVar6 == 0) && (*(int *)(iVar10 + 0x564) == *(int *)(iStack_24 + 0x310))) {
              *(int *)(iVar10 + 0x560) = *(int *)(iVar10 + 0x560) + *(int *)(iStack_24 + 0x30c);
              iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar10,uVar5);
              if ((iVar3 != 0) && (200 < *(int *)(iVar3 + 0x560))) {
                *(uint *)(iVar3 + 0x560) = 200;
              }
              FUN_004d9110(0x01CC9450,param_2,1);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"Found weapon to put this ammo into\n");
              return 1;
            }
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar7 < *(int *)(param_1 + 8));
      }
      iVar3 = core_actor_cpp_createActorByName_FUN_0040d540(iStack_28);
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar3);
      (*(code *)**(uint **)(iVar3 + 0x14c))(iVar3);
      *(uint *)(iVar3 + 0x560) = *(uint *)(iStack_24 + 0x30c);
      *(uint *)(iVar3 + 0x564) = *(uint *)(iStack_24 + 0x310);
      (**(code **)(*(int *)(iVar3 + 0x14c) + 0x80))(iVar3,*(uint *)(param_1 + 4));
      *(int *)(param_1 + 0xc + *(int *)(param_1 + 8) * 4) = iVar3;
      uVar5 = 0x01CC9450;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      FUN_004d9110(uVar5,param_2,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"Found new type of ammo for existing weapon.  Making new weapon for it\n");
      return 1;
    }
    iVar3 = _strcmp(iVar10,"CDynamite");
    if (iVar3 == 0) {
      iVar3 = core_actor_cpp_createActorByName_FUN_0040d540("CDynamite");
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar3);
      (*(code *)**(uint **)(iVar3 + 0x14c))(iVar3);
      *(uint *)(iVar3 + 0x560) = *(uint *)(iStack_24 + 0x30c);
      (**(code **)(*(int *)(iVar3 + 0x14c) + 0x80))(iVar3,*(uint *)(param_1 + 4));
      core_actor_cpp_FUN_00409cd0(param_2);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"Found dynamite.  Creating weapon for it.\n");
      core_inv_cpp_CInventory_addItem_FUN_004bf360(param_1,iVar3,1);
      return 1;
    }
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,_DAT_02ddf9a8);
  if (iVar3 != 0) {
    iVar7 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar3,_DAT_01cc56dc);
    if (iVar7 != 0) {
      *(int *)(param_1 + 0xc + *(int *)(param_1 + 8) * 4) = param_2;
      uVar5 = 0x01CC9450;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      FUN_004d9110(uVar5,param_2,0);
      (**(code **)(*(int *)(param_2 + 0x14c) + 100))(param_2,param_1);
      return 1;
    }
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iStack_20 = param_1;
      do {
        iVar10 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (*(uint *)(iStack_20 + 0xc),_DAT_02ddf9a8);
        if (iVar10 != 0) {
          uVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar10);
          uVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar3,uVar5);
          iVar6 = _strcmp(uVar5);
          uVar5 = _DAT_02dd1008;
          if ((iVar6 == 0) && (*(int *)(iVar10 + 0x564) == *(int *)(iVar3 + 0x564))) {
            *(int *)(iVar10 + 0x560) = *(int *)(iVar10 + 0x560) + *(int *)(iVar3 + 0x560);
            iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar10,uVar5);
            if ((iVar3 != 0) && (200 < *(int *)(iVar3 + 0x560))) {
              *(uint *)(iVar3 + 0x560) = 200;
            }
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"Found same weapon, increasing ammoCount\n");
            FUN_004d9110(0x01CC9450,param_2,1);
            return 1;
          }
        }
        iVar7 = iVar7 + 1;
        iStack_20 = iStack_20 + 4;
      } while (iVar7 < *(int *)(param_1 + 8));
    }
    bVar2 = false;
    iStack_1c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iStack_18 = param_1;
      do {
        iVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iStack_18 + 0xc),CDemonActorType_007641bc.name_hash);
        if (iVar7 != 0) {
          uVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar3);
          iVar10 = _strcmp(iVar7 + 0x2cc,uVar5);
          if (iVar10 == 0) {
            uVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar3);
            iVar10 = core_actor_cpp_createActorByName_FUN_0040d540(uVar5);
            core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar10);
            (*(code *)**(uint **)(iVar10 + 0x14c))(iVar10);
            *(uint *)(iVar10 + 0x560) = *(uint *)(iVar7 + 0x30c);
            *(uint *)(iVar10 + 0x564) = *(uint *)(iVar7 + 0x310);
            (**(code **)(*(int *)(iVar10 + 0x14c) + 0x80))(iVar10,*(uint *)(param_1 + 4));
            (**(code **)(*(int *)(iVar10 + 0x14c) + 100))(iVar10,param_1);
            core_actor_cpp_FUN_00409cd0(*(uint *)(iStack_18 + 0xc));
            *(int *)(iStack_18 + 0xc) = iVar10;
            uVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(iVar3);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"Converting existing ammo for %s to weapon\n",uVar5);
          }
        }
        iStack_18 = iStack_18 + 4;
        iStack_1c = iStack_1c + 1;
      } while (iStack_1c < *(int *)(param_1 + 8));
    }
    if (bVar2) {
      FUN_004d9110(0x01CC9450,iVar3,1);
      return 1;
    }
  }
  *(int *)(param_1 + 0xc + *(int *)(param_1 + 8) * 4) = param_2;
  uVar5 = 0x01CC9450;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  FUN_004d8cd0(uVar5,param_2);
  (**(code **)(*(int *)(param_2 + 0x14c) + 100))(param_2,param_1);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x330) == 0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(param_1,iVar3,5,1);
  }
  return 1;
}
