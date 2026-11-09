// Name: core_charactr.cpp_FUN_0042b450
// Address: 0042b450
// Address Range: [[0042b450, 0042b8cf]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b450(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_charactr_cpp_FUN_0042b450(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
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
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1b].field_0xf0,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (DAT_007df9b8 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 2,"numCarryHands");
      local_14 = 0;
      if (0 < aiStack_28[2]) {
        do {
          core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 3,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b930
                    (&param_1[0x1c].field_0x10 + aiStack_28[3] * 0x78,"carry actor");
          core_xform_cpp_setIdentityMatrix3x4_FUN_005835d0
                    (&param_1[0x1c].field_0x14 + aiStack_28[3] * 0x78);
          *(uint *)(&param_1[0x1c].field_0x48 + aiStack_28[3] * 0x78) = 0x3f800000;
          if (0xc < g_CCharacterClassVersion) {
            core_actor_cpp_archiveVector_FUN_0040b400(local_38,"carry pos");
            core_actor_cpp_archiveOrientation_FUN_0040b4a0(local_50,"carry orient");
            core_xform_cpp_FUN_00583940
                      (&param_1[0x1c].field_0x14 + aiStack_28[3] * 0x78,local_38,local_50);
          }
          local_14 = local_14 + 1;
        } while (local_14 < aiStack_28[2]);
      }
    }
    else {
      local_18 = 0;
      pCVar1 = param_1;
      do {
        if (*(int *)&pCVar1[0x1c].field_0x10 != 0) {
          local_18 = local_18 + 1;
        }
        pCVar1 = (CDemonActor *)&pCVar1->field_0x78;
      } while (pCVar1 != (CDemonActor *)&param_1->field_0xf0);
      local_14 = 2;
      core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 4,"numCarryHands");
      local_14 = 0;
      do {
        puVar4 = &stack0xffffff98;
        if (*(int *)(&param_1[0x1c].field_0x10 + local_14 * 0x78) != 0) {
          core_actor_cpp_archiveInteger_FUN_0040b8b0(aiStack_28 + 5,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b930
                    (&param_1[0x1c].field_0x10 + local_14 * 0x78,"carry actor");
          if (0xc < g_CCharacterClassVersion) {
            core_xform_cpp_FUN_00584450(&param_1[0x1c].field_0x14 + local_14 * 0x78);
            iVar2 = local_14 * 0x78;
            local_68 = local_5c;
            *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(local_38 + (uint)bVar3 * -8 + -0x20);
            aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
                 *(int *)(local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c);
            core_xform_cpp_FUN_00583b10(&param_1[0x1c].field_0x14 + iVar2);
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
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[0x1c].field_0xf8,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&param_1[0x1d].field_0x4,"grabbedBy");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x1d].field_0x8,"grabbedType");
    core_actor_cpp_archiveClothList_FUN_0040bf20(param_1 + 0x23,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1d].field_0xc0,"sizeScale");
  }
  if (g_CCharacterClassVersion < 6) {
    *(uint *)&param_1[0x1b].field_0xf4 = *(uint *)&param_1[0x1b].field_0xf0;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x1b].field_0xf8,"healthBarMode");
    core_actor_cpp_archiveLocalizedString_FUN_0040b7a0
              (&param_1[0x1b].field_0xfc,"descriptiveName");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1b].field_0xf4,"maxHitPoints");
  }
  if (6 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x1d].field_0xb0,"spectralFlag");
  }
  if (7 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x1d].field_0xb8,"invulnerableFlag");
  }
  if (8 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x1d].field_0xac,"etheralFlag");
  }
  if (9 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x25].field_0x9c,"bind_time");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x25].field_0xa8,"on_fire_time");
  }
  if (10 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x25].field_0xa0,"bind_type");
  }
  if (0xb < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x99].field_0x2c,"additive")
    ;
  }
  if (0xc < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&param_1[0x1d].field_0xc,"scriptWalkDest");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1d].field_0x10,"scriptWalkDist");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1d].field_0x14,"scriptRunDist");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1d].field_0x18,"scriptWalkTimer");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x1d].field_0x44,"scriptWalkState");
    core_actor_cpp_archiveActor_FUN_0040b930(&param_1[0x1d].field_0x48,"scriptDoorToOpen");
  }
  if (g_CCharacterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&param_1[0x25].field_0xb0,"been_damaged");
  return;
}
