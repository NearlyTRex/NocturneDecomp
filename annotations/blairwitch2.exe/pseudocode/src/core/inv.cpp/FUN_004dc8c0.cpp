// Name: core_inv.cpp_FUN_004dc8c0
// Address: 004dc8c0
// Address Range: [[004dc8c0, 004dcca3]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004dc8c0(int param_1,CDemonActor *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_inv_cpp_FUN_004dc8c0(int param_1,CDemonActor *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  CDemonActor *pCVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_218 [256];
  char local_118 [256];
  CHealthItem *local_18;
  CDemonActor *local_14;
  
  bVar8 = 0;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CAmmo");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CWeapon");
    if (iVar2 != 0) {
      core_inv_cpp_FUN_004db9d0(param_1,param_2,5,1);
      return 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CHealthItem");
    if (iVar2 == 0) {
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CGasMask");
      if (iVar2 != 0) {
        pCVar5 = (CGasMask *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CGasMaskClassInfo.name_hash);
        pCVar5[1].particle_systems[0].fade_end =
             (float)(uint)(pCVar5[1].particle_systems[0].fade_end == 0.0);
        *(CDemonActor **)(param_1 + 0x458) = pCVar5;
        return 0;
      }
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(param_2,"CBoxActor");
      if (iVar2 != 0) {
        pCVar5 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CBoxActorClassInfo.name_hash)
        ;
        core_event_cpp_FUN_00490f80
                  (0x01C38BC0,(char *)&pCVar5[2].particle_systems[2].max_particles,1);
        return 0;
      }
    }
    else {
      local_18 = (CHealthItem *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (param_2,g_CHealthItemClassInfo.name_hash);
      if (local_18 == (CHealthItem *)0x0) {
        _DAT_01d046a0 = "..\\core\\inv.cpp";
        _DAT_01d046a4 = 0x6c2;
        core_main_c_FUN_004e4500("CInventory::select - Catch 22");
      }
      if ((float)_DAT_005db9e2 < *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8)) {
        return 1;
      }
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("You have used : ");
      pcVar6 = local_118;
      do {
        cVar1 = *pcVar3;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar3 = core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_2);
      iVar2 = -1;
      pcVar6 = local_118;
      do {
        pcVar7 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005db9ca);
      iVar2 = -1;
      pcVar6 = local_118;
      do {
        pcVar7 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar3;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,local_118,5.0);
      iVar2 = core_health_cpp_CHealthItem_useItem_FUN_004cdf90
                        (local_18,*(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4));
      if (iVar2 < 1) {
        core_inv_cpp_FUN_004db8e0(param_1,param_2,1);
        return 1;
      }
    }
    return 0;
  }
  local_14 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CAmmoClassInfo.name_hash);
  if (local_14 == (CDemonActor *)0x0) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0x6a3;
    core_main_c_FUN_004e4500("CInventory::select - Catch 22");
  }
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x154))(iVar2);
  if (((iVar2 == 0) ||
      (iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4),
      pCVar5 = *(CDemonActor **)(iVar2 + 0x2498c + *(int *)(iVar2 + 0x247e4) * 4),
      pCVar5 == (CDemonActor *)0x0)) ||
     (iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar5,&DAT_005db95d), iVar2 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if (5 < *(int *)(*(int *)(iVar2 + 0x2498c + *(int *)(iVar2 + 0x247e4) * 4) + 0x6c4)) {
    return 0;
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Reloading Revolver..");
  pcVar6 = local_218;
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,local_218,5.0);
  iVar4 = core_ammo_cpp_FUN_0040e450(local_14,*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4));
  iVar2 = _DAT_01cedef4;
  if (iVar4 != 1) {
    return 0;
  }
  iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  *(uint *)(*(int *)(iVar4 + 0x2498c + *(int *)(iVar4 + 0x247e4) * 4) + 0x6c4) = 6;
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(iVar2 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash);
  if (pCVar5 != (CDemonActor *)0x0) {
    core_doc_cpp_FUN_0045d260(pCVar5);
  }
  if (local_14[1].particle_systems[1].fade_start != 0.0) {
    return 0;
  }
  core_inv_cpp_FUN_004db8e0(param_1,param_2,1);
  return 1;
}
