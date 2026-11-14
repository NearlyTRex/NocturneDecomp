// Name: core_hero.cpp_CHero_archive_FUN_004ce590
// Address: 004ce590
// Address Range: [[004ce590, 004ce9b4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_archive_FUN_004ce590(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_archive_FUN_004ce590(CHero *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  int *piVar2;
  char local_dc [100];
  char local_78 [100];
  int local_14;
  
  model_ptr = &(this_ptr->base).model;
  if (g_CHeroClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
    if (1 < g_CHeroClassVersion) {
      core_actor_cpp_archiveMotionState_FUN_0040bb60(&model_ptr->base,"motion state");
    }
    if (2 < g_CHeroClassVersion) {
      core_actor_cpp_archivePartStatus_FUN_0040bc50(&(this_ptr->base).model,"partStatus");
      core_actor_cpp_archiveActor_FUN_0040b9e0(&(this_ptr->base).grabbed_by,"grabbedBy");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).hit_points,"hitPoints");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_00422c30(&this_ptr->base);
    core_actor_cpp_archiveMotionState_FUN_0040bb60(&model_ptr->base,"motion state");
    core_actor_cpp_archivePartStatus_FUN_0040bc50(model_ptr,"partStatus");
    if (g_CHeroClassVersion < 8) {
      core_actor_cpp_archiveActor_FUN_0040b9e0(&(this_ptr->base).grabbed_by,"grabbedBy");
      (this_ptr->base).grabbed_type = 0;
    }
    if (4 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&this_ptr->control_type,"controlType");
    }
    if (6 < g_CHeroClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b9e0
                (&this_ptr->object_to_pick_up,"objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040b9e0
                ((CDemonActor **)&this_ptr->door_to_open,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040b9e0
                ((CDemonActor **)&this_ptr->lever_to_pull,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040b9e0
                ((CDemonActor **)&this_ptr->ladder_to_climb,"ladderToClimb");
      core_actor_cpp_archiveActor_FUN_0040b9e0
                ((CDemonActor **)&this_ptr->pushed_object,"pushedObject");
    }
    if (g_CHeroClassVersion == 10) {
      core_actor_cpp_archiveInteger_FUN_0040b960(&local_14,&DAT_005d9ade);
    }
    if ((7 < g_CHeroClassVersion) && (g_CHeroClassVersion < 0xb)) {
      iVar1 = 0;
      do {
        _sprintf(local_dc,"keyNameList[%d]");
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040b730(local_78,local_dc);
      } while (iVar1 < 0x20);
    }
    if (8 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->ai_task,"AITask");
    }
    if (0xb < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&this_ptr->is_wearing_gas_mask,"isWearingGasMask");
    }
    if (0xc < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                (&this_ptr->is_wearing_goggles,"isWearingGoggles");
    }
    if (g_CHeroClassVersion < 0x11) {
      if (5 < g_CHeroClassVersion) {
        if (DAT_007bc038 == 1) {
          core_inv_cpp_CInventory_load_FUN_004dc4b0(this_ptr->inventories,DAT_007bc034);
        }
        else {
          core_inv_cpp_CInventory_save_FUN_004dc2c0(this_ptr->inventories,DAT_007bc034);
        }
      }
      if (0xd < g_CHeroClassVersion) {
        if (DAT_007bc038 == 1) {
          core_inv_cpp_CInventory_load_FUN_004dc4b0(this_ptr->inventories + 1,DAT_007bc034);
          core_inv_cpp_CInventory_load_FUN_004dc4b0(this_ptr->inventories + 2,DAT_007bc034);
        }
        else {
          core_inv_cpp_CInventory_save_FUN_004dc2c0(this_ptr->inventories + 1,DAT_007bc034);
          core_inv_cpp_CInventory_save_FUN_004dc2c0(this_ptr->inventories + 2,DAT_007bc034);
        }
      }
      if (0xe < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  (&this_ptr->hero_inventory_index,"HeroInventoryIndex");
        piVar2 = this_ptr->inventories[0].item_groups;
        do {
          core_actor_cpp_archiveInteger_FUN_0040b960(piVar2,"inventoryIndex");
          piVar2 = piVar2 + 1;
        } while ((CDemonActor **)piVar2 != this_ptr->inventories[0].selected_items);
      }
      if (0xf < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  (&this_ptr->inventories[0].current_group,"InventoryIndex");
      }
    }
    if (0x10 < g_CHeroClassVersion) {
      if (0xe < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  (&this_ptr->hero_inventory_index,"HeroInventoryIndex");
        piVar2 = this_ptr->inventories[0].item_groups;
        do {
          core_actor_cpp_archiveInteger_FUN_0040b960(piVar2,"inventoryIndex");
          piVar2 = piVar2 + 1;
        } while ((CDemonActor **)piVar2 != this_ptr->inventories[0].selected_items);
      }
      if (0xf < g_CHeroClassVersion) {
        core_actor_cpp_archiveInteger_FUN_0040b960
                  (&this_ptr->inventories[0].current_group,"InventoryIndex");
      }
      if (5 < g_CHeroClassVersion) {
        if (DAT_007bc038 != 1) {
          core_inv_cpp_CInventory_save_FUN_004dc2c0(this_ptr->inventories,DAT_007bc034);
          return;
        }
        core_inv_cpp_CInventory_load_FUN_004dc4b0(this_ptr->inventories,DAT_007bc034);
        return;
      }
    }
  }
  return;
}
