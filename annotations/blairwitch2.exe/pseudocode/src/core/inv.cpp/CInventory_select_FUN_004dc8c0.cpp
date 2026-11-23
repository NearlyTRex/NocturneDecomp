// Name: core_inv.cpp_CInventory_select_FUN_004dc8c0
// Address: 004dc8c0
// Address Range: [[004dc8c0, 004dcca3]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_select_FUN_004dc8c0(CInventory *this_ptr,CDemonActor *actor_ptr)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_select_FUN_004dc8c0(CInventory *this_ptr,CDemonActor *actor_ptr)

{
  char cVar1;
  CWeapon *actor_ptr_00;
  int iVar2;
  char *pcVar3;
  int iVar4;
  CDoc *this_ptr_00;
  CLightGun *pCVar5;
  CDemonActor *pCVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char local_218 [256];
  char local_118 [256];
  CHealthItem *local_18;
  CAmmo *local_14;
  
  bVar9 = 0;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CWeapon");
    if (iVar2 != 0) {
      core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0(this_ptr,actor_ptr,5,1);
      return 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CGasMask");
      if (iVar2 != 0) {
        pCVar5 = (CLightGun *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (actor_ptr,g_CGasMaskClassInfo.name_hash);
        (pCVar5->base).weapon_state =
             (uint)((pCVar5->base).weapon_state == WEAPON_STATE_LYING_AROUND);
        this_ptr->light_gun_ptr = pCVar5;
        return 0;
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"CBoxActor");
      if (iVar2 != 0) {
        pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (actor_ptr,g_CBoxActorClassInfo.name_hash);
        core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_00490f80
                  (g_CEventListPtr,(char *)&pCVar6[2].particle_systems[2].max_particles,1);
        return 0;
      }
    }
    else {
      local_18 = (CHealthItem *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (actor_ptr,g_CHealthItemClassInfo.name_hash);
      if (local_18 == (CHealthItem *)0x0) {
        g_CurrentFilename = "..\\core\\inv.cpp";
        g_CurrentLineNumber = 1730;
        core_main_c_displayErrorAndQuit_FUN_004e4500("CInventory::select - Catch 22");
      }
      if ((float)98 < (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).hit_points)
      {
        return 1;
      }
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You have used : ");
      pcVar7 = local_118;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar3 = core_inv_cpp_getItemDisplayName_FUN_004d9f10(actor_ptr);
      iVar2 = -1;
      pcVar7 = local_118;
      do {
        pcVar8 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(".");
      iVar2 = -1;
      pcVar7 = local_118;
      do {
        pcVar8 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,local_118,5.0);
      iVar2 = core_health_cpp_CHealthItem_useItem_FUN_004cdf90
                        (local_18,&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base);
      if (iVar2 < 1) {
        core_inv_cpp_CInventory_removeItem_FUN_004db8e0(this_ptr,actor_ptr,1);
        return 1;
      }
    }
    return 0;
  }
  local_14 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (actor_ptr,g_CAmmoClassInfo.name_hash);
  if (local_14 == (CAmmo *)0x0) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 1699;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CInventory::select - Catch 22");
  }
  iVar2 = (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uh)->_uh).
            isWeaponDrawn)(g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]);
  if (((iVar2 == 0) ||
      (actor_ptr_00 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories[0].selected_weapons
                      [g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories[0].current_group],
      actor_ptr_00 == (CWeapon *)0x0)) ||
     (iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(&actor_ptr_00->base,"CGun"), iVar2 == 0
     )) {
    return 0;
  }
  if (5 < g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories[0].selected_weapons
          [g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories[0].current_group]->ammo_count) {
    return 0;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Reloading Revolver..");
  pcVar7 = local_218;
  do {
    cVar1 = *pcVar3;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,local_218,5.0);
  iVar4 = core_ammo_cpp_CAmmo_consumeForReload_FUN_0040e450
                    (local_14,(CDoc *)g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]);
  iVar2 = g_INT_01cedef4;
  if (iVar4 != 1) {
    return 0;
  }
  g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories[0].selected_weapons
  [g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories[0].current_group]->ammo_count = 6;
  this_ptr_00 = (CDoc *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  ((CDemonActor *)g_CHero_PTR_ARRAY_01cedee4[iVar2],
                                   g_CDocClassInfo.name_hash);
  if (this_ptr_00 != (CDoc *)0x0) {
    core_doc_cpp_CDoc_startReload_FUN_0045d260(this_ptr_00);
  }
  if (local_14->ammo_count != 0) {
    return 0;
  }
  core_inv_cpp_CInventory_removeItem_FUN_004db8e0(this_ptr,actor_ptr,1);
  return 1;
}
