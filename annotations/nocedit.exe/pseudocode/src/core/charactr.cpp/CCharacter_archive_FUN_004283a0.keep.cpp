// Name: core_charactr.cpp_CCharacter_archive_FUN_004283a0
// Address: 004283a0
// MANUAL RECONSTRUCTION
// Address Range: [[004283a0, 004285c8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_archive_FUN_004283a0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_archive_FUN_004283a0(CCharacter *this_ptr)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->hit_points,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_1c,"numCarryHands");
      local_20 = 0;
      if (0 < local_1c) {
        do {
          core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_18,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b870
                    (&this_ptr->carry_hands[local_18].carry_actor,"carry actor");
          local_20 = local_20 + 1;
        } while (local_20 < local_1c);
      }
    }
    else {
      local_14 = 0;
      for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
        if (this_ptr->carry_hands[local_20].carry_actor != (CDemonActor *)0x0) {
          local_14 = local_14 + 1;
        }
      }
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_14,"numCarryHands");
      local_20 = 0;
      do {
        if (this_ptr->carry_hands[local_20].carry_actor != (CDemonActor *)0x0) {
          core_actor_cpp_archiveInteger_FUN_0040b7f0(&local_20,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b870
                    (&this_ptr->carry_hands[local_20].carry_actor,"carry actor");
        }
        local_20 = local_20 + 1;
      } while (local_20 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->talk_to_me_event,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->grabbed_by,"grabbedBy");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->grabbed_type,"grabbedType");
    core_actor_cpp_archiveClothList_FUN_0040be60(&this_ptr->cloth_list,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->size_scale,"sizeScale");
  }
  if (5 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->health_bar_mode,"healthBarMode");
    core_actor_cpp_archiveLocalizedString_FUN_0040b6e0
              (this_ptr->descriptive_name,"descriptiveName");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->max_hit_points,"maxHitPoints");
    return;
  }
  this_ptr->max_hit_points = this_ptr->hit_points;
  return;
}
