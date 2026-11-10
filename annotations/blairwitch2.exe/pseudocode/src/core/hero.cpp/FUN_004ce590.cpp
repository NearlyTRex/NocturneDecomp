// Name: core_hero.cpp_FUN_004ce590
// Address: 004ce590
// Address Range: [[004ce590, 004ce9b4]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004ce590(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004ce590(CCharacter *param_1)

{
  CDeformableModelInstance *pCVar1;
  CInventory *pCVar2;
  int iVar3;
  int *piVar4;
  char local_dc [100];
  char local_78 [100];
  int local_14;
  
  pCVar1 = &param_1->model;
  if (g_CHeroClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c330(&param_1->base);
    if (1 < g_CHeroClassVersion) {
      core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
    }
    if (2 < g_CHeroClassVersion) {
      core_actor_cpp_archivePartStatus_FUN_0040bc50(&param_1->model,"partStatus");
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1->grabbed_by,"grabbedBy");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->hit_points,"hitPoints");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_00422c30(param_1);
    core_actor_cpp_archiveMotionState_FUN_0040bb60(pCVar1,"motion state");
    core_actor_cpp_archivePartStatus_FUN_0040bc50(pCVar1,"partStatus");
    if (g_CHeroClassVersion < 8) {
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1->grabbed_by,"grabbedBy");
      param_1->grabbed_type = 0;
    }
    if (4 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)(param_1[1].base.actor_name + 4),"controlType");
    }
    if (6 < g_CHeroClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[2].field_0x4148,"objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[2].field_0x4144,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[2].field_0x4150,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[2].field_0x4154,"ladderToClimb");
      core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[2].field_0x414c,"pushedObject");
    }
    if (g_CHeroClassVersion == 10) {
      core_actor_cpp_archiveInteger_FUN_0040b960(&local_14,&DAT_005d9ade);
    }
    if ((7 < g_CHeroClassVersion) && (g_CHeroClassVersion < 0xb)) {
      iVar3 = 0;
      do {
        _sprintf(local_dc,"keyNameList[%d]");
        iVar3 = iVar3 + 1;
        core_actor_cpp_archiveString_FUN_0040b730(local_78,local_dc);
      } while (iVar3 < 0x20);
    }
    if (8 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[2].field_0x4178,"AITask");
    }
    if (0xb < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&param_1[2].field_0x4128,"isWearingGasMask");
    }
    if (0xc < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&param_1[2].field_0x412c,"isWearingGoggles");
    }
    if (g_CHeroClassVersion < 0x11) {
      if (5 < g_CHeroClassVersion) {
        pCVar2 = (CInventory *)(param_1[2].cloth_list.cloths + 7);
        if (DAT_007bc038 == 1) {
          core_inv_cpp_CInventory_load_FUN_004dc4b0(pCVar2,DAT_007bc034);
        }
        else {
          core_inv_cpp_CInventory_save_FUN_004dc2c0(pCVar2,DAT_007bc034);
        }
      }
      if (0xd < g_CHeroClassVersion) {
        if (DAT_007bc038 == 1) {
          core_inv_cpp_CInventory_load_FUN_004dc4b0
                    ((CInventory *)&param_1[2].field_0x34e0,DAT_007bc034);
          core_inv_cpp_CInventory_load_FUN_004dc4b0
                    ((CInventory *)&param_1[2].field_0x3b04,DAT_007bc034);
        }
        else {
          core_inv_cpp_CInventory_save_FUN_004dc2c0
                    ((CInventory *)&param_1[2].field_0x34e0,DAT_007bc034);
          core_inv_cpp_CInventory_save_FUN_004dc2c0
                    ((CInventory *)&param_1[2].field_0x3b04,DAT_007bc034);
        }
      }
      if (0xe < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  ((int *)&param_1[2].field_0x417c,"HeroInventoryIndex");
        piVar4 = (int *)&param_1[2].field_0x3328;
        do {
          core_actor_cpp_archiveInteger_FUN_0040b960(piVar4,"inventoryIndex");
          piVar4 = piVar4 + 1;
        } while (piVar4 != (int *)&param_1[2].field_0x34b8);
      }
      if (0xf < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  ((int *)&param_1[2].field_0x3324,"InventoryIndex");
      }
    }
    if (0x10 < g_CHeroClassVersion) {
      if (0xe < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  ((int *)&param_1[2].field_0x417c,"HeroInventoryIndex");
        piVar4 = (int *)&param_1[2].field_0x3328;
        do {
          core_actor_cpp_archiveInteger_FUN_0040b960(piVar4,"inventoryIndex");
          piVar4 = piVar4 + 1;
        } while (piVar4 != (int *)&param_1[2].field_0x34b8);
      }
      if (0xf < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  ((int *)&param_1[2].field_0x3324,"InventoryIndex");
      }
      if (5 < g_CHeroClassVersion) {
        pCVar2 = (CInventory *)(param_1[2].cloth_list.cloths + 7);
        if (DAT_007bc038 != 1) {
          core_inv_cpp_CInventory_save_FUN_004dc2c0(pCVar2,DAT_007bc034);
          return;
        }
        core_inv_cpp_CInventory_load_FUN_004dc4b0(pCVar2,DAT_007bc034);
        return;
      }
    }
  }
  return;
}
