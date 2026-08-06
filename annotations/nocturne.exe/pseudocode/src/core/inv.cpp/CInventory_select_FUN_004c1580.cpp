// Name: core_inv.cpp_CInventory_select_FUN_004c1580
// Address: 004c1580
// Address Range: [[004c1580, 004c182a]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_select_FUN_004c1580(CInventory *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_inv_cpp_CInventory_select_FUN_004c1580(CInventory *this_ptr,CDemonActor *actor_ptr)

{
  char cVar1;
  int iVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CLightGun *pCVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_114 [256];
  CHealthItem *local_14;
  
  bVar8 = 0;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CWeapon");
    if (iVar2 != 0) {
      core_inv_cpp_CInventory_selectWeapon_FUN_004c0850(this_ptr,actor_ptr,5,1);
      return 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CGasMask");
      if (iVar2 != 0) {
        pCVar5 = (CLightGun *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (actor_ptr,g_CGasMaskActorType_01c78b84.name_hash);
        (pCVar5->base).weapon_state = (uint)((pCVar5->base).weapon_state == 0);
        this_ptr->light_gun_ptr = pCVar5;
        return 0;
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CBoxActor");
      if (iVar2 != 0) {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (actor_ptr,g_CBoxActorActorType_00764800.name_hash);
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                  (0x01C03A10,pCVar3[4].create_event + 0x40);
        return 0;
      }
    }
    else {
      local_14 = (CHealthItem *)
                 core_actor_cpp_castToClassHash_FUN_0040d890
                           (actor_ptr,g_CHealthItemActorType_01cae098.name_hash);
      if (local_14 == (CHealthItem *)0x0) {
        g_CurrentFilename = "..\\core\\inv.cpp";
        g_CurrentLineNumber = 1481;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CInventory::select - Catch 22");
      }
      if ((float)98 < *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434)) {
        return 1;
      }
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have used : ");
      pcVar6 = local_114;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(actor_ptr);
      iVar2 = -1;
      pcVar4 = local_114;
      do {
        pcVar7 = pcVar4;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar4 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
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
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(".");
      iVar2 = -1;
      pcVar4 = local_114;
      do {
        pcVar7 = pcVar4;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar4 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
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
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,local_114,5.0);
      iVar2 = core_health_cpp_CHealthItem_useItem_FUN_004b43f0
                        (local_14,*(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8));
      if (iVar2 < 1) {
        core_inv_cpp_CInventory_removeItem_FUN_004c07b0(this_ptr,actor_ptr,1);
        return 1;
      }
    }
  }
  else {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (actor_ptr,g_CAmmoActorType_007641bc.name_hash);
    if (pCVar3 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\inv.cpp";
      g_CurrentLineNumber = 1475;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CInventory::select - Catch 22");
    }
    core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
              (this_ptr,pCVar3[2].lifecycle_state);
  }
  return 0;
}
