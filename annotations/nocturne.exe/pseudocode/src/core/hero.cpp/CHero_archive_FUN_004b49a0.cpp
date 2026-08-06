// Name: core_hero.cpp_CHero_archive_FUN_004b49a0
// Address: 004b49a0
// Address Range: [[004b49a0, 004b4bf9]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_archive_FUN_004b49a0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_archive_FUN_004b49a0(CHero *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  int iVar1;
  char local_d4 [100];
  char local_70 [100];
  int local_c;
  
  model_ptr = &(this_ptr->base).model;
  if (g_INT_005ba940 < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0((CDemonActor *)this_ptr);
    if (1 < g_INT_005ba940) {
      core_actor_cpp_archiveMotionState_FUN_0040cb00
                (&model_ptr->motion_controller,"motion state");
    }
    if (2 < g_INT_005ba940) {
      core_actor_cpp_archivePartStatus_FUN_0040cbf0(&(this_ptr->base).model,"partStatus");
      core_actor_cpp_archiveActor_FUN_0040c980(&(this_ptr->base).grabbed_by,"grabbedBy");
      core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).hit_points,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_004244b0(&this_ptr->base);
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
    core_actor_cpp_archivePartStatus_FUN_0040cbf0(model_ptr,"partStatus");
    if (g_INT_005ba940 < 8) {
      core_actor_cpp_archiveActor_FUN_0040c980(&(this_ptr->base).grabbed_by,"grabbedBy");
      (this_ptr->base).grabbed_type = 0;
    }
    if (4 < g_INT_005ba940) {
      core_actor_cpp_archiveInteger_FUN_0040c900
                ((int *)&this_ptr->control_type,"controlType");
    }
    if (6 < g_INT_005ba940) {
      core_actor_cpp_archiveActor_FUN_0040c980
                (&this_ptr->object_to_pick_up,"objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&this_ptr->door_to_open,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&this_ptr->lever_to_pull,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&this_ptr->ladder_to_climb,"ladderToClimb");
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&this_ptr->pushed_object,"pushedObject");
    }
    if (g_INT_005ba940 == 10) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&local_c,"keys");
    }
    if ((7 < g_INT_005ba940) && (g_INT_005ba940 < 0xb)) {
      iVar1 = 0;
      do {
        _sprintf(local_70,"keyNameList[%d]",iVar1);
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < g_INT_005ba940) {
      core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ai_task,"AITask");
    }
    if (0xb < g_INT_005ba940) {
      core_actor_cpp_archiveInteger_FUN_0040c900
                (&this_ptr->is_wearing_gas_mask,"isWearingGasMask");
    }
    if (5 < g_INT_005ba940) {
      if (DAT_00763e88 != 1) {
        core_inv_cpp_CInventory_save_FUN_004c0fa0(&this_ptr->inventory,DAT_00763e84);
        return;
      }
      core_inv_cpp_CInventory_load_FUN_004c1190(&this_ptr->inventory,DAT_00763e84);
      return;
    }
  }
  return;
}
