// Name: core_inv.cpp_CInventory_select_FUN_004f9bd0
// Address: 004f9bd0
// Address Range: [[004f9bd0, 004f9ec5]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_select_FUN_004f9bd0(CInventory *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_inv_cpp_CInventory_select_FUN_004f9bd0(CInventory *this_ptr,CDemonActor *actor_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  CGoggles *pCVar4;
  CLightGun *pCVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_114 [256];
  CHealthItem *local_14;
  
  bVar8 = 0;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CWeapon");
    if (iVar2 != 0) {
      core_inv_cpp_CInventory_selectWeapon_FUN_004f8dc0(this_ptr,actor_ptr,5,1);
      return 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CGasMask");
      if (iVar2 != 0) {
        pCVar5 = (CLightGun *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (actor_ptr,g_CGasMaskClassInfo.name_hash);
        (pCVar5->base).weapon_state =
             (uint)((pCVar5->base).weapon_state == WEAPON_STATE_LYING_AROUND);
        this_ptr->light_gun_ptr = pCVar5;
        return 0;
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CGoggles");
      if (iVar2 != 0) {
        pCVar4 = (CGoggles *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (actor_ptr,g_CGogglesClassInfo.name_hash);
        pCVar4->carrier = (CDemonActor *)(uint)(pCVar4->carrier == (CDemonActor *)0x0);
        this_ptr->goggles_ptr = pCVar4;
        return 0;
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CBoxActor");
      if (iVar2 != 0) {
        iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (actor_ptr,g_CBoxActorClassInfo.name_hash);
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,(char *)(iVar2 + 0x600))
        ;
        return 0;
      }
    }
    else {
      local_14 = (CHealthItem *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (actor_ptr,g_CHealthItemClassInfo.name_hash);
      if (local_14 == (CHealthItem *)0x0) {
        _DAT_01d1d400 = "..\\core\\inv.cpp";
        _DAT_01d1d404 = 0x726;
        core_main_c_FUN_005030e0("CInventory::select - Catch 22");
      }
      if ((float)_DAT_005e67f0 < *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538)) {
        return 1;
      }
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("You have used : ");
      pcVar6 = local_114;
      do {
        cVar1 = *pcVar3;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar6 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(actor_ptr);
      iVar2 = -1;
      pcVar3 = local_114;
      do {
        pcVar7 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar3 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e67ce);
      iVar2 = -1;
      pcVar3 = local_114;
      do {
        pcVar7 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar3 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,local_114,5.0);
      iVar2 = core_health_cpp_CHealthItem_useItem_FUN_004ea530
                        (local_14,*(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
      if (iVar2 < 1) {
        core_inv_cpp_FUN_004f8d00(this_ptr,actor_ptr,1);
        return 1;
      }
    }
  }
  else {
    iVar2 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\core\\inv.cpp";
      _DAT_01d1d404 = 0x720;
      core_main_c_FUN_005030e0("CInventory::select - Catch 22");
    }
    core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004fa4e0
              (this_ptr,*(int *)(iVar2 + 0x318));
  }
  return 0;
}
