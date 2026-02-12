// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00419880
// Address: 00419880
// Address Range: [[00419880, 00419bd9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00419880(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00419880(CBodyPart *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  CVector3i *pCVar4;
  SInputFace *pSVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->texture_count,"textureCount");
  if (g_ActorReadingMode == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar9 = 0;
      do {
        iVar7 = (int)&this_ptr->vertices->x + iVar9;
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0xc;
        _fscanf(g_ActorDataFile,"%d,%d,%d\n",iVar7,iVar7 + 4,iVar7 + 8);
      } while (iVar6 < this_ptr->vertex_count);
    }
    local_14 = 0;
    if (0 < this_ptr->tri_count) {
      iVar9 = 0;
      iVar6 = 0;
      do {
        pSVar5 = this_ptr->faces;
        _fscanf(g_ActorDataFile,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   (int)this_ptr->face_texture_indices + iVar9,(int)&pSVar5[1].u_coord_0 + iVar6,
                   (int)&pSVar5[1].u_coord_2 + iVar6,(int)&pSVar5[1].v_coord_1 + iVar6,
                   (int)&pSVar5[2].vertex_indices.vertex_index_0 + iVar6,
                   (int)&pSVar5[2].vertex_indices.vertex_index_2 + iVar6,
                   (int)&pSVar5[2].u_coord_1 + iVar6,(int)&pSVar5[2].v_coord_0 + iVar6,
                   (int)&pSVar5[2].v_coord_2 + iVar6,
                   (int)&pSVar5[3].vertex_indices.vertex_index_1 + iVar6);
        iVar9 = iVar9 + 4;
        *(uint *)((int)&(pSVar5->vertex_indices).vertex_index_2 + iVar6) = 3;
        local_14 = local_14 + 1;
        iVar6 = iVar6 + 0x3c;
      } while (local_14 < this_ptr->tri_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar8 = this_ptr->textures[0].texture_name;
      do {
        iVar6 = iVar6 + 1;
        _fscanf(g_ActorDataFile," \"%[^\"]\"\n",pcVar8);
        pcVar8 = pcVar8 + 0x18;
      } while (iVar6 < this_ptr->texture_count);
    }
    core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr);
  }
  else {
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar9 = 0;
      do {
        pCVar4 = this_ptr->vertices;
        puVar2 = (uint *)((int)&pCVar4->z + iVar9);
        puVar3 = (uint *)((int)&pCVar4->y + iVar9);
        puVar1 = (uint *)((int)&pCVar4->x + iVar9);
        iVar9 = iVar9 + 0xc;
        iVar6 = iVar6 + 1;
        _fprintf(g_ActorDataFile,"\t%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
      } while (iVar6 < this_ptr->vertex_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->tri_count) {
      local_18 = 0;
      iVar9 = 0;
      do {
        pSVar5 = this_ptr->faces;
        _fprintf(g_ActorDataFile,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar9 + (int)this_ptr->face_texture_indices),
                   *(uint *)((int)&pSVar5[1].u_coord_0 + local_18),
                   *(uint *)((int)&pSVar5[1].u_coord_2 + local_18),
                   *(uint *)((int)&pSVar5[1].v_coord_1 + local_18),
                   *(uint *)((int)&pSVar5[2].vertex_indices.vertex_index_0 + local_18),
                   *(uint *)((int)&pSVar5[2].vertex_indices.vertex_index_2 + local_18),
                   *(uint *)((int)&pSVar5[2].u_coord_1 + local_18),
                   *(uint *)((int)&pSVar5[2].v_coord_0 + local_18),
                   *(uint *)((int)&pSVar5[2].v_coord_2 + local_18),
                   *(uint *)((int)&pSVar5[3].vertex_indices.vertex_index_1 + local_18));
        iVar9 = iVar9 + 4;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x3c;
      } while (iVar6 < this_ptr->tri_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar8 = this_ptr->textures[0].texture_name;
      do {
        iVar6 = iVar6 + 1;
        _fprintf(g_ActorDataFile,"\t\"%s\"\n",pcVar8);
        pcVar8 = pcVar8 + 0x18;
      } while (iVar6 < this_ptr->texture_count);
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
