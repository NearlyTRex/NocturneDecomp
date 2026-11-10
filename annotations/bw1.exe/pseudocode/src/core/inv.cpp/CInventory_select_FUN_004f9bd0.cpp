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
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_114 [256];
  CHealthItem *local_14;
  
  bVar6 = 0;
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
        iVar2 = (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CGasMaskClassInfo.name_hash)
        ;
        *(uint *)(iVar2 + 0x2d4) = (uint)(*(int *)(iVar2 + 0x2d4) == 0);
        *(int *)(this_ptr + 0x45c) = iVar2;
        return 0;
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CGoggles");
      if (iVar2 != 0) {
        iVar2 = (CGoggles *)core_actor_cpp_castToClassHash_FUN_0040c600(actor_ptr,g_CGogglesClassInfo.name_hash)
        ;
        *(uint *)(iVar2 + 0x2d4) = (uint)(*(int *)(iVar2 + 0x2d4) == 0);
        *(int *)(this_ptr + 0x460) = iVar2;
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
      pcVar4 = local_114;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      pcVar4 = (char *)core_inv_cpp_getItemDisplayName_FUN_004f62e0(actor_ptr);
      iVar2 = -1;
      pcVar3 = local_114;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar6 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e67ce);
      iVar2 = -1;
      pcVar3 = local_114;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar6 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
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
