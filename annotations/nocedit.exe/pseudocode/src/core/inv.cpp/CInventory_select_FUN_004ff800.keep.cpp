// Name: core_inv.cpp_CInventory_select_FUN_004ff800
// Address: 004ff800
// MANUAL RECONSTRUCTION
// Address Range: [[004ff800, 004ffaaa]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_select_FUN_004ff800(CInventory *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_select_FUN_004ff800(CInventory *this_ptr,CDemonActor *actor_ptr)

{
  int iVar2;
  CAmmo *pCVar3;
  int iVar3;
  CHealthItem *this_ptr_00;
  char *pcVar4;
  char *pcVar5;
  CGasMask *pCVar5;
  CBoxActor *pCVar6;
  char *pcVar8;
  char local_114 [256];


  iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CAmmo");
  if (iVar2 == 0) {
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CWeapon");
    if (iVar3 != 0) {
      core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,actor_ptr,5,1);
      return 0;
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHealthItem");
    if (iVar3 == 0) {
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CGasMask");
      if (iVar3 != 0) {
        pCVar5 = (CGasMask *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CGasMaskClassInfo.name_hash);
        pCVar5->carrier = (CDemonActor *)(uint)(pCVar5->carrier == (CDemonActor *)0x0);
        this_ptr->light_gun_ptr = (CLightGun *)pCVar5;
        return 0;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBoxActor");
      if (iVar3 != 0) {
        pCVar6 = (CBoxActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (actor_ptr,g_CBoxActorClassInfo.name_hash);
        core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,pCVar6->use_event);
        return 0;
      }
    }
    else {
      this_ptr_00 = (CHealthItem *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (actor_ptr,g_CHealthItemClassInfo.name_hash);
      if (this_ptr_00 == (CHealthItem *)0x0) {
        g_CurrentFilename = "..\\core\\inv.cpp";
        g_CurrentLineNumber = 1481;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::select - Catch 22");
      }
      if ((float)98 < (g_HeroActors[g_LocalHeroIndex]->base).hit_points) {
        return 1;
      }
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have used : ");
      strcpy(local_114,pcVar4);
      pcVar5 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(actor_ptr);
      strcat(local_114,pcVar5);
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(".");
      strcat(local_114,pcVar8);
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,local_114,5.0);
      iVar3 = core_health_cpp_CHealthItem_useItem_FUN_004f1fd0
                        (this_ptr_00,&g_HeroActors[g_LocalHeroIndex]->base);
      if (iVar3 < 1) {
        core_inv_cpp_CInventory_removeItem_FUN_004fea70(this_ptr,actor_ptr,1);
        return 1;
      }
    }
  }
  else {
    pCVar3 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                                (actor_ptr,g_CAmmoClassInfo.name_hash);
    if (pCVar3 == (CAmmo *)0x0) {
      g_CurrentFilename = "..\\core\\inv.cpp";
      g_CurrentLineNumber = 1475;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::select - Catch 22");
    }
    core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr,pCVar3->ammo_type)
    ;
  }
  return 0;
}
