// Name: core_charactr.cpp_FUN_0042c7f0
// Address: 0042c7f0
// Address Range: [[0042c7f0, 0042cbda]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042c7f0(CDemonActor *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042c7f0(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_1050 [1015];
  uint *puVar4;
  char *pcVar5;
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
  
  bVar3 = 0;
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x1b].field_0xf0,"hitPoints");
  if (1 < g_CCharacterClassVersion) {
    if (DAT_007c3038 == 1) {
      core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 5,"numCarryHands");
      local_14 = 0;
      if (0 < local_20) {
        do {
          core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 6,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b6f0
                    (&param_1[0x1c].field_0x10 + local_1c * 0x78,"carry actor");
          core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0
                    (&param_1[0x1c].field_0x14 + local_1c * 0x78);
          iVar2 = g_CCharacterClassVersion;
          *(uint *)(&param_1[0x1c].field_0x48 + local_1c * 0x78) = 0x3f800000;
          if (10 < iVar2) {
            core_actor_cpp_archiveVector_FUN_0040b1c0(&local_50,"carry pos");
            core_actor_cpp_archiveOrientation_FUN_0040b260(&local_44,"carry orient");
            core_xform_cpp_FUN_005b5760
                      ((CMatrix3x4f *)(&param_1[0x1c].field_0x14 + local_1c * 0x78),&local_50,
                       &local_44);
          }
          local_14 = local_14 + 1;
        } while (local_14 < local_20);
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
      core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 7,"numCarryHands");
      local_14 = 0;
      do {
        if (*(int *)(&param_1[0x1c].field_0x10 + local_14 * 0x78) != 0) {
          core_actor_cpp_archiveInteger_FUN_0040b670(auStack_34 + 8,"carry hand");
          core_actor_cpp_archiveActor_FUN_0040b6f0
                    (&param_1[0x1c].field_0x10 + local_14 * 0x78,"carry actor");
          core_xform_cpp_FUN_005b6270(&param_1[0x1c].field_0x14 + local_14 * 0x78);
          iVar2 = local_14 * 0x78;
          auStack_34[2] = local_68;
          auStack_34[(uint)bVar3 * -2 + 3] = *(uint *)(&stack0xffffff9c + (uint)bVar3 * -8);
          auStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          core_xform_cpp_FUN_005b5930(&param_1[0x1c].field_0x14 + iVar2);
          pcVar5 = "carry pos";
          puVar4 = auStack_34 + 2;
          local_38 = local_5c;
          auStack_34[(uint)bVar3 * -2] = *(uint *)(&stack0xffffffa8 + (uint)bVar3 * -8);
          auStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(uint *)(&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          core_actor_cpp_archiveVector_FUN_0040b1c0(puVar4,pcVar5);
          core_actor_cpp_archiveOrientation_FUN_0040b260(&local_38,"carry orient");
        }
        local_14 = local_14 + 1;
      } while (local_14 < 2);
    }
  }
  if (2 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&param_1[0x1c].field_0xf8,"talkToMeEvent");
  }
  if (3 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[0x1d].field_0x4,"grabbedBy");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[0x1d].field_0x8,"grabbedType");
    core_actor_cpp_archiveClothList_FUN_0040bce0(&param_1[0x21].field_0x48,"clothList");
  }
  if (4 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x1d].field_0xc0,"sizeScale");
  }
  if (g_CCharacterClassVersion < 6) {
    *(uint *)&param_1[0x1b].field_0xf4 = *(uint *)&param_1[0x1b].field_0xf0;
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[0x1b].field_0xf8,"healthBarMode");
    core_actor_cpp_archiveLocalizedString_FUN_0040b560
              (&param_1[0x1b].field_0xfc,"descriptiveName");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x1b].field_0xf4,"maxHitPoints");
  }
  if (6 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[0x1d].field_0xb0,"spectralFlag");
  }
  if (7 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[0x1d].field_0xb8,"invulnerableFlag");
  }
  if (8 < g_CCharacterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[0x1d].field_0xac,"etheralFlag");
  }
  if (g_CCharacterClassVersion < 10) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[0x1d].field_0xc,"scriptWalkDest");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x1d].field_0x10,"scriptWalkDist");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x1d].field_0x14,"scriptRunDist");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x1d].field_0x18,"scriptWalkTimer");
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&param_1[0x1d].field_0x44,"scriptWalkState");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[0x1d].field_0x48,"scriptDoorToOpen");
  return;
}
