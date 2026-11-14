// Name: core_charactr.cpp_CCharacter_archive_FUN_0042b450
// Address: 0042b450
// Address Range: [[0042b450, 0042b8cf]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042b450(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042b450(CCharacter *this_ptr)

{
  SCarryHand *pSVar1;
  CCharacter *pCVar2;
  byte bVar3;
  int aiStackY_1050 [1015];
  CVector3f *vector_ptr;
  char *property_name;
  CVector3f local_68;
  float local_5c;
  uint auStack_58 [2];
  COrientation local_50;
  COrientation local_44;
  CVector3f local_38;
  float local_2c;
  int aiStack_28 [4];
  int local_18;
  int local_14;
  
  bVar3 = 0;
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->hit_points,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (DAT_007df9b8 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 2,"numCarryHands");
      local_14 = 0;
      if (0 < aiStack_28[2]) {
        do {
          core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 3,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b930
                    (&this_ptr->carry_hands[aiStack_28[3]].carry_actor,"carry actor");
          core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0
                    (&this_ptr->carry_hands[aiStack_28[3]].initial_carry_transform);
          this_ptr->carry_hands[aiStack_28[3]].blend_factor = 1.0;
          if (0xc < g_CCharacterClassVersion) {
            core_actor_cpp_archiveVector_FUN_0040b400(&local_38,"carry pos");
            core_actor_cpp_archiveOrientation_FUN_0040b4a0(&local_50,"carry orient");
            core_xform_cpp_FUN_00583940
                      (&this_ptr->carry_hands[aiStack_28[3]].initial_carry_transform,&local_38,
                       &local_50);
          }
          local_14 = local_14 + 1;
        } while (local_14 < aiStack_28[2]);
      }
    }
    else {
      local_18 = 0;
      pCVar2 = this_ptr;
      do {
        if (pCVar2->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
          local_18 = local_18 + 1;
        }
        pCVar2 = (CCharacter *)(pCVar2->base).create_event;
      } while (pCVar2 != (CCharacter *)&(this_ptr->base).platform_orientation_delta.y);
      local_14 = 2;
      core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 4,"numCarryHands");
      local_14 = 0;
      do {
        vector_ptr = &local_68;
        if (this_ptr->carry_hands[local_14].carry_actor != (CDemonActor *)0x0) {
          core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 5,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b930
                    (&this_ptr->carry_hands[local_14].carry_actor,"carry actor");
          if (0xc < g_CCharacterClassVersion) {
            core_xform_cpp_FUN_00584450(&this_ptr->carry_hands[local_14].initial_carry_transform);
            pSVar1 = this_ptr->carry_hands + local_14;
            local_68.x = local_5c;
            *(uint *)((int)&local_68 + (uint)bVar3 * -8 + 4) = auStack_58[(uint)bVar3 * -2];
            *(uint *)((int)&local_68 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                 auStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&pSVar1->initial_carry_transform);
            property_name = "carry pos";
            local_44.pitch = local_2c;
            *(int *)((int)&local_44 + (uint)bVar3 * -8 + 4) = aiStack_28[(uint)bVar3 * -2];
            *(int *)((int)&local_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                 aiStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            core_actor_cpp_archiveVector_FUN_0040b400(vector_ptr,property_name);
            core_actor_cpp_archiveOrientation_FUN_0040b4a0(&local_44,"carry orient");
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->talk_to_me_event,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->grabbed_by,"grabbedBy");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->grabbed_type,"grabbedType");
    core_actor_cpp_archiveClothList_FUN_0040bf20(&this_ptr->cloth_list,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->size_scale,"sizeScale");
  }
  if (g_CCharacterClassVersion < 6) {
    this_ptr->max_hit_points = this_ptr->hit_points;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->health_bar_mode,"healthBarMode");
    core_actor_cpp_archiveLocalizedString_FUN_0040b7a0
              (this_ptr->descriptive_name,"descriptiveName");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->max_hit_points,"maxHitPoints");
  }
  if (6 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->is_spectral,"spectralFlag");
  }
  if (7 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->is_invulnerable,"invulnerableFlag");
  }
  if (8 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->is_ethereal,"etheralFlag");
  }
  if (9 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->bind_time,"bind_time");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->on_fire_time,"on_fire_time");
  }
  if (10 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->bind_type,"bind_type");
  }
  if (0xb < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->additive,"additive");
  }
  if (0xc < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->walk_to_target,"scriptWalkDest");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->walk_min_distance,"scriptWalkDist")
    ;
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->walk_max_distance,"scriptRunDist");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->walk_timeout,"scriptWalkTimer");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->walk_state,"scriptWalkState");
    core_actor_cpp_archiveActor_FUN_0040b930
              ((CDemonActor **)&this_ptr->door_target,"scriptDoorToOpen");
  }
  if (g_CCharacterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->been_damaged,"been_damaged");
  return;
}
