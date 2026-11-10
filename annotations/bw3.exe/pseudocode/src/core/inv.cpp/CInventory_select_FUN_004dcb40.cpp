// Name: core_inv.cpp_CInventory_select_FUN_004dcb40
// Address: 004dcb40
// Address Range: [[004dcb40, 004dcd9c]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_select_FUN_004dcb40(CInventory *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_inv_cpp_CInventory_select_FUN_004dcb40(CInventory *this_ptr,CDemonActor *actor_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_114 [256];
  int local_14;
  
  bVar6 = 0;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CWeapon");
    if (iVar2 != 0) {
      core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(this_ptr,actor_ptr,5,1);
      return 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(actor_ptr,"CBoxActor");
      if (iVar2 != 0) {
        iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (actor_ptr,g_CBoxActorClassInfo.name_hash);
        core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,(char *)(iVar2 + 0x600))
        ;
        return 0;
      }
    }
    else {
      local_14 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (actor_ptr,g_CHealthItemClassInfo.name_hash);
      if (local_14 == 0) {
        _DAT_01d71de0 = "..\\core\\inv.cpp";
        _DAT_01d71de4 = 0x7c2;
        core_main_c_FUN_004e4330("CInventory::select - Catch 22");
      }
      if ((float)_DAT_005c65d7 < *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538)) {
        return 1;
      }
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("You have used : ");
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
      pcVar4 = (char *)core_inv_cpp_getItemDisplayName_FUN_004d9e40(actor_ptr);
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
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c65c5);
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
      core_game_cpp_CGame_displayMessage_FUN_004b46b0(g_CGamePtr,local_114,5.0);
      iVar2 = core_health_cpp_FUN_004d20c0(local_14,*(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      if (iVar2 < 1) {
        core_inv_cpp_CInventory_removeItem_FUN_004dbaa0(this_ptr,actor_ptr,1);
        return 1;
      }
    }
  }
  else {
    iVar2 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,g_CAmmoClassInfo.name_hash);
    if (iVar2 == 0) {
      _DAT_01d71de0 = "..\\core\\inv.cpp";
      _DAT_01d71de4 = 0x7bc;
      core_main_c_FUN_004e4330("CInventory::select - Catch 22");
    }
    core_inv_cpp_FUN_004dd2d0(this_ptr,*(uint *)(iVar2 + 0x318));
  }
  return 0;
}
