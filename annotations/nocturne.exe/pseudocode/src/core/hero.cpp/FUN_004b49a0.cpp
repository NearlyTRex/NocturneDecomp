// Name: core_hero.cpp_FUN_004b49a0
// Address: 004b49a0
// Address Range: [[004b49a0, 004b4bf9]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004b49a0(CCharacter *param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004b49a0(CCharacter *param_1)

{
  CDeformableModelInstance *model_ptr;
  CInventory *this_ptr;
  int iVar1;
  char local_d4 [100];
  char local_70 [100];
  int local_c;
  
  model_ptr = &param_1->model;
  if (INT_005ba940 < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&param_1->base);
    if (1 < INT_005ba940) {
      core_actor_cpp_archiveMotionState_FUN_0040cb00
                (&model_ptr->motion_controller,"motion state");
    }
    if (2 < INT_005ba940) {
      core_actor_cpp_archivePartStatus_FUN_0040cbf0(&param_1->model,"partStatus");
      core_actor_cpp_archiveActor_FUN_0040c980(&param_1->grabbed_by,"grabbedBy");
      core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->hit_points,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_004244b0(param_1);
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
    core_actor_cpp_archivePartStatus_FUN_0040cbf0(model_ptr,"partStatus");
    if (INT_005ba940 < 8) {
      core_actor_cpp_archiveActor_FUN_0040c980(&param_1->grabbed_by,"grabbedBy");
      param_1->grabbed_type = 0;
    }
    if (4 < INT_005ba940) {
      core_actor_cpp_archiveInteger_FUN_0040c900
                ((int *)(param_1[1].base.actor_name + 4),"controlType");
    }
    if (6 < INT_005ba940) {
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&param_1[2].flames[0x1d].globe.corona_mode,
                 "objectToPickUp");
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&param_1[2].flames[0x1d].globe.intensity,"doorToOpen");
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&param_1[2].flames[0x1d].globe.position.y,"leverToPull");
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&param_1[2].flames[0x1d].globe.position.z,"ladderToClimb")
      ;
      core_actor_cpp_archiveActor_FUN_0040c980
                ((CDemonActor **)&param_1[2].flames[0x1d].globe.position,"pushedObject");
    }
    if (INT_005ba940 == 10) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&local_c,"keys");
    }
    if ((7 < INT_005ba940) && (INT_005ba940 < 0xb)) {
      iVar1 = 0;
      do {
        _sprintf(local_70,"keyNameList[%d]",iVar1);
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < INT_005ba940) {
      core_actor_cpp_archiveInteger_FUN_0040c900
                ((int *)param_1[2].flames[0x1d].on_event,"AITask");
    }
    if (0xb < INT_005ba940) {
      core_actor_cpp_archiveInteger_FUN_0040c900
                ((int *)&param_1[2].flames[0x1d].globe.radius_squared,"isWearingGasMask");
    }
    if (5 < INT_005ba940) {
      this_ptr = (CInventory *)(param_1[2].flames[0x1b].off_event + 0x3c);
      if (DAT_00763e88 != 1) {
        core_inv_cpp_CInventory_save_FUN_004c0fa0(this_ptr,DAT_00763e84);
        return;
      }
      core_inv_cpp_CInventory_load_FUN_004c1190(this_ptr,DAT_00763e84);
      return;
    }
  }
  return;
}
