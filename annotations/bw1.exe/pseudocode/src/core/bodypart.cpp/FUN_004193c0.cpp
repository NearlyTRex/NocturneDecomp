// Name: core_bodypart.cpp_FUN_004193c0
// Address: 004193c0
// Address Range: [[004193c0, 00419739]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_004193c0(CBodyPart *param_1)

#include "nocturne.h"

void core_bodypart_cpp_FUN_004193c0(CBodyPart *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  byte *puVar6;
  int iVar7;
  int iStack_18;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)param_1);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1->field_0x174,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1->field_0x180,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1->field_0x18c,"textureCount");
  if (DAT_007c3038 == 1) {
    iVar7 = 0;
    core_bodypart_cpp_FUN_00418d00
              (param_1,*(uint *)&param_1->field_0x174,*(uint *)&param_1->field_0x180);
    if (0 < *(int *)&param_1->field_0x174) {
      iVar4 = 0;
      do {
        iVar5 = *(int *)&param_1->field_0x178 + iVar4;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 0xc;
        _fscanf(DAT_007c3034,"%d,%d,%d\n",iVar5,iVar5 + 4,iVar5 + 8);
      } while (iVar7 < *(int *)&param_1->field_0x174);
    }
    iVar7 = 0;
    if (0 < *(int *)&param_1->field_0x180) {
      iStack_18 = 0;
      iVar4 = 0;
      do {
        iVar5 = *(int *)&param_1->field_0x184 + iVar4;
        iVar7 = iVar7 + 1;
        _fscanf(DAT_007c3034,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(int *)&param_1->field_0x188 + iStack_18,iVar5 + 0x18,iVar5 + 0x1c,iVar5 + 0x20,
                   iVar5 + 0x24,iVar5 + 0x28,iVar5 + 0x2c,iVar5 + 0x30,iVar5 + 0x34,iVar5 + 0x38);
        *(uint *)(iVar5 + 4) = 3;
        iVar4 = iVar4 + 0x3c;
        iStack_18 = iStack_18 + 4;
      } while (iVar7 < *(int *)&param_1->field_0x180);
    }
    iVar7 = 0;
    if (0 < *(int *)&param_1->field_0x18c) {
      puVar6 = &param_1->field_0x198;
      do {
        iVar7 = iVar7 + 1;
        _fscanf(DAT_007c3034," \"%[^\"]\"\n",puVar6);
        puVar6 = puVar6 + 0x18;
      } while (iVar7 < *(int *)&param_1->field_0x18c);
    }
    core_bodypart_cpp_FUN_00419b90(param_1);
  }
  else {
    iVar7 = 0;
    if (0 < *(int *)&param_1->field_0x174) {
      iVar4 = 0;
      do {
        iVar5 = *(int *)&param_1->field_0x178;
        puVar2 = (uint *)(iVar5 + 8 + iVar4);
        puVar3 = (uint *)(iVar5 + 4 + iVar4);
        puVar1 = (uint *)(iVar5 + iVar4);
        iVar4 = iVar4 + 0xc;
        iVar7 = iVar7 + 1;
        FUN_005c03c0(DAT_007c3034,"\t%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
      } while (iVar7 < *(int *)&param_1->field_0x174);
    }
    iVar7 = 0;
    if (0 < *(int *)&param_1->field_0x180) {
      iStack_14 = 0;
      iVar4 = 0;
      do {
        iVar5 = *(int *)&param_1->field_0x184 + iStack_14;
        FUN_005c03c0
                  (DAT_007c3034,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar4 + *(int *)&param_1->field_0x188),
                   *(uint *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c),
                   *(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x24),
                   *(uint *)(iVar5 + 0x28),*(uint *)(iVar5 + 0x2c),
                   *(uint *)(iVar5 + 0x30),*(uint *)(iVar5 + 0x34),
                   *(uint *)(iVar5 + 0x38));
        iVar4 = iVar4 + 4;
        iVar7 = iVar7 + 1;
        iStack_14 = iStack_14 + 0x3c;
      } while (iVar7 < *(int *)&param_1->field_0x180);
    }
    iVar7 = 0;
    if (0 < *(int *)&param_1->field_0x18c) {
      puVar6 = &param_1->field_0x198;
      do {
        iVar7 = iVar7 + 1;
        FUN_005c03c0(DAT_007c3034,"\t\"%s\"\n",puVar6);
        puVar6 = puVar6 + 0x18;
      } while (iVar7 < *(int *)&param_1->field_0x18c);
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_FUN_0040bbf0((CBox *)&param_1->field_0xcd0,"simBox");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1->field_0xf2c,"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1->field_0xcb8,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1->field_0xcb0,"dontUseNormals");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1->field_0xcb4,"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1->field_0x158,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1->field_0xcc4,"dontPickMeUp")
    ;
  }
  if (5 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1->field_0xcc8,"dontGoIntoBackground");
    return;
  }
  return;
}
