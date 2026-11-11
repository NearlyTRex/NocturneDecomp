// Name: core_charactr.cpp_CCharacter_archive_FUN_0042c7f0
// Address: 0042c7f0
// Address Range: [[0042c7f0, 0042cbda]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(CCharacter *this_ptr)

{
  SCarryHand *pSVar1;
  int iVar2;
  CCharacter *pCVar3;
  byte bVar4;
  uint auStackY_1050 [1015];
  uint *puVar5;
  char *pcVar6;
  uint local_68;
  uint local_5c;
  CVector3f local_50;
  CVector3f local_44;
  uint local_38;
  uint auStack_34 [5];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->hit_points,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (DAT_007c3038 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 5,"numCarryHands");
      local_14 = 0;
      if (0 < local_20) {
        do {
          core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 6,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b6f0
                    (&this_ptr->carry_hands[local_1c].carry_actor,"carry actor");
          core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0
                    (&this_ptr->carry_hands[local_1c].initial_carry_transform);
          iVar2 = g_CCharacterClassVersion;
          this_ptr->carry_hands[local_1c].blend_factor = 1.0;
          if (10 < iVar2) {
            core_actor_cpp_archiveVector_FUN_0040b1c0(&local_50,"carry pos");
            core_actor_cpp_archiveOrientation_FUN_0040b260(&local_44,"carry orient");
            core_xform_cpp_FUN_005b5760
                      (&this_ptr->carry_hands[local_1c].initial_carry_transform,&local_50,&local_44)
            ;
          }
          local_14 = local_14 + 1;
        } while (local_14 < local_20);
      }
    }
    else {
      local_18 = 0;
      pCVar3 = this_ptr;
      do {
        if (pCVar3->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
          local_18 = local_18 + 1;
        }
        pCVar3 = (CCharacter *)(pCVar3->base).create_event;
      } while (pCVar3 != (CCharacter *)&(this_ptr->base).platform_orientation_delta.y);
      local_14 = 2;
      core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 7,"numCarryHands");
      local_14 = 0;
      do {
        if (this_ptr->carry_hands[local_14].carry_actor != (CDemonActor *)0x0) {
          core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 8,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b6f0
                    (&this_ptr->carry_hands[local_14].carry_actor,"carry actor");
          core_xform_cpp_FUN_005b6270(&this_ptr->carry_hands[local_14].initial_carry_transform);
          pSVar1 = this_ptr->carry_hands + local_14;
          auStack_34[2] = local_68;
          auStack_34[(uint)bVar4 * -2 + 3] = *(uint *)(&stack0xffffff9c + (uint)bVar4 * -8);
          auStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&pSVar1->initial_carry_transform);
          pcVar6 = "carry pos";
          puVar5 = auStack_34 + 2;
          local_38 = local_5c;
          auStack_34[(uint)bVar4 * -2] = *(uint *)(&stack0xffffffa8 + (uint)bVar4 * -8);
          auStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               *(uint *)(&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          core_actor_cpp_archiveVector_FUN_0040b1c0(puVar5,pcVar6);
          core_actor_cpp_archiveOrientation_FUN_0040b260(&local_38,"carry orient");
        }
        local_14 = local_14 + 1;
      } while (local_14 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(this_ptr->talk_to_me_event,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->grabbed_by,"grabbedBy");
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->grabbed_type,"grabbedType");
    core_actor_cpp_archiveClothList_FUN_0040bce0(&this_ptr->cloth_list,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->size_scale,"sizeScale");
  }
  if (g_CCharacterClassVersion < 6) {
    this_ptr->max_hit_points = this_ptr->hit_points;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->health_bar_mode,"healthBarMode");
    core_actor_cpp_archiveLocalizedString_FUN_0040b560
              (this_ptr->descriptive_name,"descriptiveName");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->max_hit_points,"maxHitPoints");
  }
  if (6 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->is_spectral,"spectralFlag");
  }
  if (7 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&this_ptr->is_invulnerable,"invulnerableFlag");
  }
  if (8 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->is_ethereal,"etheralFlag");
  }
  if (g_CCharacterClassVersion < 10) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->walk_to_target,"scriptWalkDest");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->walk_min_distance,"scriptWalkDist");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->walk_max_distance,"scriptRunDist");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->walk_timeout,"scriptWalkTimer");
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->walk_state,"scriptWalkState");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->door_target,"scriptDoorToOpen");
  return;
}
