// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00416570
// Address: 00416570
// Address Range: [[00416570, 004168c9]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_archive_FUN_00416570(CBodyPart *param_1)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_archive_FUN_00416570(CBodyPart *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  CVector3i *pCVar4;
  SMRGLPrimitiveTriangle *pSVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&param_1->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1->texture_count,"textureCount");
  if (DAT_00763e88 == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0
              (param_1,param_1->vertex_count,param_1->tri_count);
    iVar6 = 0;
    if (0 < param_1->vertex_count) {
      do {
        iVar6 = iVar6 + 1;
        _fscanf(DAT_00763e84,"%d,%d,%d\n");
      } while (iVar6 < param_1->vertex_count);
    }
    local_14 = 0;
    if (0 < param_1->tri_count) {
      iVar6 = 0;
      do {
        pSVar5 = param_1->faces;
        _fscanf(DAT_00763e84,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n");
        *(uint *)((int)pSVar5->vertices + iVar6 + -0x14) = 3;
        local_14 = local_14 + 1;
        iVar6 = iVar6 + 0x3c;
      } while (local_14 < param_1->tri_count);
    }
    iVar6 = 0;
    if (0 < param_1->texture_count) {
      do {
        iVar6 = iVar6 + 1;
        _fscanf(DAT_00763e84," \"%[^\"]\"\n");
      } while (iVar6 < param_1->texture_count);
    }
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(param_1);
  }
  else {
    iVar6 = 0;
    if (0 < param_1->vertex_count) {
      iVar8 = 0;
      do {
        pCVar4 = param_1->vertices;
        puVar2 = (uint *)((int)&pCVar4->z + iVar8);
        puVar3 = (uint *)((int)&pCVar4->y + iVar8);
        puVar1 = (uint *)((int)&pCVar4->x + iVar8);
        iVar8 = iVar8 + 0xc;
        iVar6 = iVar6 + 1;
        _fprintf(DAT_00763e84,"\t%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
      } while (iVar6 < param_1->vertex_count);
    }
    iVar6 = 0;
    if (0 < param_1->tri_count) {
      local_18 = 0;
      iVar8 = 0;
      do {
        pSVar5 = param_1->faces;
        _fprintf(DAT_00763e84,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar8 + (int)param_1->face_texture_indices),
                   *(uint *)((int)&pSVar5->vertices[0].vertex_index + local_18),
                   *(uint *)((int)&pSVar5->vertices[0].texture_u + local_18),
                   *(uint *)((int)&pSVar5->vertices[0].texture_v + local_18),
                   *(uint *)((int)&pSVar5->vertices[1].vertex_index + local_18),
                   *(uint *)((int)&pSVar5->vertices[1].texture_u + local_18),
                   *(uint *)((int)&pSVar5->vertices[1].texture_v + local_18),
                   *(uint *)((int)&pSVar5->vertices[2].vertex_index + local_18),
                   *(uint *)((int)&pSVar5->vertices[2].texture_u + local_18),
                   *(uint *)((int)&pSVar5->vertices[2].texture_v + local_18));
        iVar8 = iVar8 + 4;
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x3c;
      } while (iVar6 < param_1->tri_count);
    }
    iVar6 = 0;
    if (0 < param_1->texture_count) {
      pcVar7 = param_1->textures[0].texture_name;
      do {
        iVar6 = iVar6 + 1;
        _fprintf(DAT_00763e84,"\t\"%s\"\n",pcVar7);
        pcVar7 = pcVar7 + 0x18;
      } while (iVar6 < param_1->texture_count);
    }
  }
  if (1 < g_INT_005ad00c) {
    core_actor_cpp_archiveBox_FUN_0040ce80(&param_1->physics_box,"simBox");
    core_actor_cpp_archiveActor_FUN_0040c980(&param_1->carried_by_actor,"carriedByActor");
  }
  if (2 < g_INT_005ad00c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&param_1->blood_type,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040c900(&param_1->dont_use_normals,"dontUseNormals")
    ;
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&param_1->transparent_geometry_flag,"transparentGeometryFlag");
  }
  if (3 < g_INT_005ad00c) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&param_1->render_in_background,"renderInBackground");
  }
  if (4 < g_INT_005ad00c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&param_1->dont_pick_me_up,"dontPickMeUp");
    return;
  }
  return;
}
