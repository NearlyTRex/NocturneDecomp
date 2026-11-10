// Name: core_charactr.cpp_CCharacter_archive_FUN_0042b450
// Address: 0042b450
// Address Range: [[0042b450, 0042b8cf]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042b450(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042b450(CCharacter *this_ptr)

{
  CCharacter *pCVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1050 [1015];
  uint *puVar4;
  char *pcVar5;
  uint local_68;
  uint local_5c;
  byte local_50 [12];
  uint local_44;
  int aiStack_40 [2];
  byte local_38 [12];
  uint local_2c;
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
                    (this_ptr->carry_hands + aiStack_28[3] * 0x78 + 8,"carry actor");
          core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0
                    (this_ptr->carry_hands + aiStack_28[3] * 0x78 + 0xc);
          *(uint *)(this_ptr->carry_hands + aiStack_28[3] * 0x78 + 0x40) = 0x3f800000;
          if (0xc < g_CCharacterClassVersion) {
            core_actor_cpp_archiveVector_FUN_0040b400(local_38,"carry pos");
            core_actor_cpp_archiveOrientation_FUN_0040b4a0(local_50,"carry orient");
            core_xform_cpp_FUN_00583940
                      (this_ptr->carry_hands + aiStack_28[3] * 0x78 + 0xc,local_38,local_50);
          }
          local_14 = local_14 + 1;
        } while (local_14 < aiStack_28[2]);
      }
    }
    else {
      local_18 = 0;
      pCVar1 = this_ptr;
      do {
        if (*(int *)&pCVar1->field_0x25b0 != 0) {
          local_18 = local_18 + 1;
        }
        pCVar1 = (CCharacter *)(pCVar1->base).create_event;
      } while (pCVar1 != (CCharacter *)&(this_ptr->base).platform_orientation_delta.y);
      local_14 = 2;
      core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 4,"numCarryHands");
      local_14 = 0;
      do {
        puVar4 = &stack0xffffff98;
        if (*(int *)(this_ptr->carry_hands + local_14 * 0x78 + 8) != 0) {
          core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 5,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b930
                    (this_ptr->carry_hands + local_14 * 0x78 + 8,"carry actor");
          if (0xc < g_CCharacterClassVersion) {
            core_xform_cpp_FUN_00584450(this_ptr->carry_hands + local_14 * 0x78 + 0xc);
            iVar2 = local_14 * 0x78;
            local_68 = local_5c;
            *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(local_38 + (uint)bVar3 * -8 + -0x20);
            aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
                 *(int *)(local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c);
            core_xform_cpp_matrixToEulerAngles_FUN_00583b10(this_ptr->carry_hands + iVar2 + 0xc);
            pcVar5 = "carry pos";
            local_44 = local_2c;
            aiStack_40[(uint)bVar3 * -2] = aiStack_28[(uint)bVar3 * -2];
            aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                 aiStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            core_actor_cpp_archiveVector_FUN_0040b400(puVar4,pcVar5);
            core_actor_cpp_archiveOrientation_FUN_0040b4a0(&local_44,"carry orient");
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2698,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->grabbed_by,"grabbedBy");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->grabbed_type,"grabbedType");
    core_actor_cpp_archiveClothList_FUN_0040bf20(&this_ptr->cloth_list,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x27b8,"sizeScale");
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
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x27a8,"spectralFlag");
  }
  if (7 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x27b0,"invulnerableFlag");
  }
  if (8 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0x27a4,"etheralFlag");
  }
  if (9 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x3254,"bind_time");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x3260,"on_fire_time");
  }
  if (10 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x3258,"bind_type");
  }
  if (0xb < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xcdc4,"additive");
  }
  if (0xc < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->walk_to_target,"scriptWalkDest");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->walk_min_distance,"scriptWalkDist")
    ;
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->walk_max_distance,"scriptRunDist");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->walk_timeout,"scriptWalkTimer");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->walk_state,"scriptWalkState");
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->door_target,"scriptDoorToOpen");
  }
  if (g_CCharacterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x3268,"been_damaged")
  ;
  return;
}
