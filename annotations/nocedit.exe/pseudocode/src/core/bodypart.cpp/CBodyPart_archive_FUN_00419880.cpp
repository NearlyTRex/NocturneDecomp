// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00419880
// Address: 00419880
// Address Range: [[00419880, 00419bd9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00419880(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00419880(CBodyPart *this_ptr)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->texture_count,"textureCount");
  if (g_ActorReadingMode == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
    iVar4 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar7 = 0;
      do {
        iVar5 = this_ptr->unk2 + iVar7;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0xc;
        _fscanf(g_ActorDataFile,"%d,%d,%d\n",iVar5,iVar5 + 4,iVar5 + 8);
      } while (iVar4 < this_ptr->vertex_count);
    }
    local_14 = 0;
    if (0 < this_ptr->tri_count) {
      iVar4 = 0;
      iVar7 = 0;
      do {
        iVar5 = *(int *)this_ptr->unk4 + iVar4;
        iVar4 = iVar4 + 0x3c;
        _fscanf(g_ActorDataFile,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(int *)(this_ptr->unk4 + 4) + iVar7,iVar5 + 0x18,iVar5 + 0x1c,iVar5 + 0x20,
                   iVar5 + 0x24,iVar5 + 0x28,iVar5 + 0x2c,iVar5 + 0x30,iVar5 + 0x34,iVar5 + 0x38);
        iVar7 = iVar7 + 4;
        *(uint *)(iVar5 + 4) = 3;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->tri_count);
    }
    iVar4 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar6 = this_ptr->unk5 + 8;
      do {
        iVar4 = iVar4 + 1;
        _fscanf(g_ActorDataFile," \"%[^\"]\"\n",pcVar6);
        pcVar6 = pcVar6 + 0x18;
      } while (iVar4 < this_ptr->texture_count);
    }
    core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr);
  }
  else {
    iVar4 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar7 = 0;
      do {
        iVar3 = this_ptr->unk2;
        iVar5 = iVar7 + 8;
        iVar2 = iVar7 + 4;
        puVar1 = (uint *)(iVar7 + iVar3);
        iVar7 = iVar7 + 0xc;
        iVar4 = iVar4 + 1;
        _fprintf(g_ActorDataFile,"\t%d,%d,%d\n",*puVar1,*(uint *)(iVar2 + iVar3),
                   *(uint *)(iVar5 + iVar3));
      } while (iVar4 < this_ptr->vertex_count);
    }
    iVar4 = 0;
    if (0 < this_ptr->tri_count) {
      local_18 = 0;
      iVar7 = 0;
      do {
        iVar5 = *(int *)this_ptr->unk4 + local_18;
        _fprintf(g_ActorDataFile,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar7 + *(int *)(this_ptr->unk4 + 4)),
                   *(uint *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c),
                   *(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x24),
                   *(uint *)(iVar5 + 0x28),*(uint *)(iVar5 + 0x2c),
                   *(uint *)(iVar5 + 0x30),*(uint *)(iVar5 + 0x34),
                   *(uint *)(iVar5 + 0x38));
        iVar7 = iVar7 + 4;
        iVar4 = iVar4 + 1;
        local_18 = local_18 + 0x3c;
      } while (iVar4 < this_ptr->tri_count);
    }
    iVar4 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar6 = this_ptr->unk5 + 8;
      do {
        iVar4 = iVar4 + 1;
        _fprintf(g_ActorDataFile,"\t\"%s\"\n",pcVar6);
        pcVar6 = pcVar6 + 0x18;
      } while (iVar4 < this_ptr->texture_count);
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveSimBox_FUN_0040bd70((CSimBox *)&this_ptr->sim_box,"simBox");
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->blood_type,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->dont_use_normals,"dontUseNormals");
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->transparent_geometry_flag,"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->render_in_background,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->dont_pick_me_up,"dontPickMeUp");
    return;
  }
  return;
}
