// Name: core_hero.cpp_CHero_archive_FUN_004eab00
// Address: 004eab00
// Address Range: [[004eab00, 004ead76]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_archive_FUN_004eab00(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_archive_FUN_004eab00(CHero *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  char local_d4 [100];
  char local_70 [100];
  int local_c;
  
  model_ptr = &(this_ptr->base).model;
  if (g_CHeroClassVersion < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
    if (1 < g_CHeroClassVersion) {
      core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
    }
    if (2 < g_CHeroClassVersion) {
      core_actor_cpp_archivePartStatus_FUN_0040b960(&(this_ptr->base).model,"partStatus");
      core_actor_cpp_archiveActor_FUN_0040b6f0(&(this_ptr->base).grabbed_by,"grabbedBy");
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).hit_points,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(&this_ptr->base);
    core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
    core_actor_cpp_archivePartStatus_FUN_0040b960(model_ptr,"partStatus");
    if (g_CHeroClassVersion < 8) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&(this_ptr->base).grabbed_by,"grabbedBy");
      (this_ptr->base).grabbed_type = 0;
    }
    if (4 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)&this_ptr->control_type,"controlType");
    }
    if (6 < g_CHeroClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b6f0
                (&this_ptr->object_to_pick_up,"objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040b6f0
                ((CDemonActor **)&this_ptr->door_to_open,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040b6f0
                ((CDemonActor **)&this_ptr->lever_to_pull,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040b6f0
                ((CDemonActor **)&this_ptr->ladder_to_climb,"ladderToClimb");
      core_actor_cpp_archiveActor_FUN_0040b6f0
                ((CDemonActor **)&this_ptr->pushed_object,"pushedObject");
    }
    if (g_CHeroClassVersion == 10) {
      core_actor_cpp_archiveInteger_FUN_0040b670(&local_c,"keys");
    }
    if ((7 < g_CHeroClassVersion) && (g_CHeroClassVersion < 0xb)) {
      iVar1 = 0;
      do {
        _sprintf(local_70,"keyNameList[%d]");
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040b440(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->ai_task,"AITask");
    }
    if (0xb < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)&this_ptr->is_wearing_gas_mask,"isWearingGasMask");
    }
    if (0xc < g_CHeroClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                (&this_ptr->is_wearing_goggles,"isWearingGoggles");
    }
    if (5 < g_CHeroClassVersion) {
      if (DAT_007c3038 != 1) {
        core_inv_cpp_CInventory_save_FUN_004f95b0(&this_ptr->inventory,DAT_007c3034);
        return;
      }
      core_inv_cpp_CInventory_load_FUN_004f97a0(&this_ptr->inventory,DAT_007c3034);
      return;
    }
  }
  return;
}
