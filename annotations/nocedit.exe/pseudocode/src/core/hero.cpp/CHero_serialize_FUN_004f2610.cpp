// Name: core_hero.cpp_CHero_serialize_FUN_004f2610
// Address: 004f2610
// Address Range: [[004f2610, 004f2869]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_serialize_FUN_004f2610(CHero * this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_serialize_FUN_004f2610(CHero *this_ptr)

{
  CDeformableModelInstance *motion_controller;
  int iVar1;
  char *local_d4 [25];
  char local_70 [100];
  int local_c;
  
  motion_controller = &(this_ptr->base_character).model;
  if (g_CHeroPlaceholderClassVersion < 4) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)this_ptr);
    if (1 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeMotionState_FUN_0040b9f0
                (&motion_controller->motion_controller,"motion state");
    }
    if (2 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializePartStatus_FUN_0040bae0
                (&(this_ptr->base_character).model,"partStatus");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)&(this_ptr->base_character).grabbed_by,"grabbedBy");
      core_actor_cpp_serializeFloat_FUN_0040b770
                (&(this_ptr->base_character).hit_points,"hitPoints");
    }
  }
  else {
    core_charactr_cpp_CCharacter_serialize_FUN_004283a0(&this_ptr->base_character);
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&motion_controller->motion_controller,"motion state");
    core_actor_cpp_serializePartStatus_FUN_0040bae0(motion_controller,"partStatus");
    if (g_CHeroPlaceholderClassVersion < 8) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)&(this_ptr->base_character).grabbed_by,"grabbedBy");
      (this_ptr->base_character).grabbed_type = 0;
    }
    if (4 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->control_type,"controlType");
    }
    if (6 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr->field6_0x1fb9c + 4),"objectToPickUp");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)this_ptr->field6_0x1fb9c,"doorToOpen");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr->field6_0x1fb9c + 0xc),"leverToPull");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr->field6_0x1fb9c + 0x10),"ladderToClimb");
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr->field6_0x1fb9c + 8),"pushedObject");
    }
    if (g_CHeroPlaceholderClassVersion == 10) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&local_c,"keys");
    }
    if ((7 < g_CHeroPlaceholderClassVersion) && (g_CHeroPlaceholderClassVersion < 0xb)) {
      iVar1 = 0;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_70,"keyNameList[%d]",iVar1);
        iVar1 = iVar1 + 1;
        core_actor_cpp_serializeString_FUN_0040b5c0(local_d4,local_70);
      } while (iVar1 < 0x20);
    }
    if (8 < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ai_task,"AITask");
    }
    if (0xb < g_CHeroPlaceholderClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                (&this_ptr->is_wearing_gas_mask,"isWearingGasMask");
    }
    if (5 < g_CHeroPlaceholderClassVersion) {
      if (g_ActorReadingMode != 1) {
        core_inv_cpp_CInventory_save_FUN_004ff210(&this_ptr->inventory,g_ActorDataFile);
        return;
      }
      core_inv_cpp_CInventory_load_FUN_004ff400(&this_ptr->inventory);
      return;
    }
  }
  return;
}
