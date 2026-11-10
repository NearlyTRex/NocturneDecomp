// Name: core_charactr.cpp_CCharacter_archive_FUN_00422c30
// Address: 00422c30
// Address Range: [[00422c30, 00422eb8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_archive_FUN_00422c30(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_archive_FUN_00422c30(CCharacter *this_ptr)

{
  CCharacter *pCVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->hit_points,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (DAT_007bc038 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b960(&local_1c,"numCarryHands");
      local_20 = 0;
      if (0 < local_1c) {
        do {
          core_actor_cpp_archiveInteger_FUN_0040b960(&local_18,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b9e0
                    (this_ptr->carry_hands + local_18 * 0x78 + 8,"carry actor");
          local_20 = local_20 + 1;
        } while (local_20 < local_1c);
      }
    }
    else {
      local_14 = 0;
      pCVar1 = this_ptr;
      do {
        if (*(int *)&pCVar1->field_0x2620 != 0) {
          local_14 = local_14 + 1;
        }
        pCVar1 = (CCharacter *)&(pCVar1->base).field_0x78;
      } while (pCVar1 != (CCharacter *)&(this_ptr->base).field_0xf0);
      local_20 = 2;
      core_actor_cpp_archiveInteger_FUN_0040b960(&local_14,"numCarryHands");
      local_20 = 0;
      do {
        if (*(int *)(this_ptr->carry_hands + local_20 * 0x78 + 8) != 0) {
          core_actor_cpp_archiveInteger_FUN_0040b960(&local_20,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b9e0
                    (this_ptr->carry_hands + local_20 * 0x78 + 8,"carry actor");
        }
        local_20 = local_20 + 1;
      } while (local_20 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2708,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->grabbed_by,"grabbedBy");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->grabbed_type,"grabbedType");
    core_actor_cpp_archiveClothList_FUN_0040bfd0(&this_ptr->cloth_list,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x2824,"sizeScale");
  }
  if (g_CCharacterClassVersion < 6) {
    this_ptr->max_hit_points = this_ptr->hit_points;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->health_bar_mode,"healthBarMode");
    core_actor_cpp_archiveLocalizedString_FUN_0040b850
              (this_ptr->descriptive_name,"descriptiveName");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->max_hit_points,"maxHitPoints");
  }
  if (6 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x2814,"spectralFlag");
  }
  if (7 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x281c,"invulnerableFlag");
  }
  if (8 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x2810,"etheralFlag");
    return;
  }
  return;
}
