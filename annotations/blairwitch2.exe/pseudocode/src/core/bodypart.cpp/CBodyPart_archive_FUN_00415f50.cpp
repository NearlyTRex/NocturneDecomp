// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00415f50
// Address: 00415f50
// Address Range: [[00415f50, 004162a9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00415f50(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00415f50(CBodyPart *this_ptr)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *puVar6;
  int iVar7;
  int iStack_18;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2d0,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2dc,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2e8,"textureCount");
  if (DAT_007bc038 == 1) {
    core_bodypart_cpp_FUN_00415890
              (this_ptr,*(uint *)&this_ptr->field_0x2d0,*(uint *)&this_ptr->field_0x2dc)
    ;
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x2d0) {
      iVar7 = 0;
      do {
        iVar5 = *(int *)&this_ptr->field_0x2d4 + iVar7;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0xc;
        _fscanf(DAT_007bc034,"%d,%d,%d\n",iVar5,iVar5 + 4,iVar5 + 8);
      } while (iVar4 < *(int *)&this_ptr->field_0x2d0);
    }
    iStack_14 = 0;
    if (0 < *(int *)&this_ptr->field_0x2dc) {
      iVar4 = 0;
      iVar7 = 0;
      do {
        iVar5 = *(int *)&this_ptr->field_0x2e0 + iVar4;
        iVar4 = iVar4 + 0x3c;
        _fscanf(DAT_007bc034,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(int *)&this_ptr->field_0x2e4 + iVar7,iVar5 + 0x18,iVar5 + 0x1c,iVar5 + 0x20,
                   iVar5 + 0x24,iVar5 + 0x28,iVar5 + 0x2c,iVar5 + 0x30,iVar5 + 0x34,iVar5 + 0x38);
        iVar7 = iVar7 + 4;
        *(uint *)(iVar5 + 4) = 3;
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)&this_ptr->field_0x2dc);
    }
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x2e8) {
      puVar6 = &this_ptr->field_0x2f4;
      do {
        iVar4 = iVar4 + 1;
        _fscanf(DAT_007bc034," \"%[^\"]\"\n",puVar6);
        puVar6 = puVar6 + 0x18;
      } while (iVar4 < *(int *)&this_ptr->field_0x2e8);
    }
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(this_ptr);
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x2d0) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)&this_ptr->field_0x2d4;
        iVar5 = iVar7 + 8;
        iVar2 = iVar7 + 4;
        puVar1 = (uint *)(iVar7 + iVar3);
        iVar7 = iVar7 + 0xc;
        iVar4 = iVar4 + 1;
        FUN_005b8010
                  (DAT_007bc034,"\t%d,%d,%d\n",*puVar1,*(uint *)(iVar2 + iVar3),
                   *(uint *)(iVar5 + iVar3));
      } while (iVar4 < *(int *)&this_ptr->field_0x2d0);
    }
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x2dc) {
      iStack_18 = 0;
      iVar7 = 0;
      do {
        iVar5 = *(int *)&this_ptr->field_0x2e0 + iStack_18;
        FUN_005b8010
                  (DAT_007bc034,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar7 + *(int *)&this_ptr->field_0x2e4),
                   *(uint *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c),
                   *(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x24),
                   *(uint *)(iVar5 + 0x28),*(uint *)(iVar5 + 0x2c),
                   *(uint *)(iVar5 + 0x30),*(uint *)(iVar5 + 0x34),
                   *(uint *)(iVar5 + 0x38));
        iVar7 = iVar7 + 4;
        iVar4 = iVar4 + 1;
        iStack_18 = iStack_18 + 0x3c;
      } while (iVar4 < *(int *)&this_ptr->field_0x2dc);
    }
    iVar4 = 0;
    if (0 < *(int *)&this_ptr->field_0x2e8) {
      puVar6 = &this_ptr->field_0x2f4;
      do {
        iVar4 = iVar4 + 1;
        FUN_005b8010(DAT_007bc034,"\t\"%s\"\n",puVar6);
        puVar6 = puVar6 + 0x18;
      } while (iVar4 < *(int *)&this_ptr->field_0x2e8);
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveBox_FUN_0040bee0(&this_ptr->field_0x10e0,"simBox");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x133c,"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x10cc,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x10c4,"dontUseNormals");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x10c8,"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x2b4,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x10d8,"dontPickMeUp");
    return;
  }
  return;
}
