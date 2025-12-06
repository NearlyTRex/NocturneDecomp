// Name: core_inv.cpp_CInventory_addItem_FUN_004fd600
// Address: 004fd600
// Address Range: [[004fd600, 004fe8f4]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)

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
    this_ptr->message_display_timer = (float)iVar10 * (float)0.025000000000000001;
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
            *(uint *)(pCVar5[4].actor_name + 8) = *(uint *)(in_stack_0000002c + 0x314);
            *(uint *)(pCVar5[4].actor_name + 0xc) = *(uint *)(in_stack_0000002c + 0x318)
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
      *(uint *)(pCVar5[4].actor_name + 8) = *(uint *)((int)in_stack_00000030 + 0x314);
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
