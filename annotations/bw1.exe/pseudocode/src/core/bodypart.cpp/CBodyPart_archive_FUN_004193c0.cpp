// Name: core_bodypart.cpp_CBodyPart_archive_FUN_004193c0
// Address: 004193c0
// Address Range: [[004193c0, 00419739]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_004193c0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_004193c0(CBodyPart *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  CVector3i *pCVar4;
  SMRGLPrimitiveTriangle *pSVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->texture_count,"textureCount");
  if (DAT_007c3038 == 1) {
    iVar8 = 0;
    core_bodypart_cpp_FUN_00418d00(this_ptr,this_ptr->vertex_count,this_ptr->tri_count);
    if (0 < this_ptr->vertex_count) {
      do {
        iVar8 = iVar8 + 1;
        _fscanf(DAT_007c3034,"%d,%d,%d\n");
      } while (iVar8 < this_ptr->vertex_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->tri_count) {
      iVar6 = 0;
      do {
        pSVar5 = this_ptr->faces;
        iVar8 = iVar8 + 1;
        _fscanf(DAT_007c3034,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n");
        *(uint *)((int)pSVar5->vertices + iVar6 + -0x14) = 3;
        iVar6 = iVar6 + 0x3c;
      } while (iVar8 < this_ptr->tri_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->texture_count) {
      do {
        iVar8 = iVar8 + 1;
        _fscanf(DAT_007c3034," \"%[^\"]\"\n");
      } while (iVar8 < this_ptr->texture_count);
    }
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(this_ptr);
  }
  else {
    iVar8 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar6 = 0;
      do {
        pCVar4 = this_ptr->vertices;
        puVar2 = (uint *)((int)&pCVar4->z + iVar6);
        puVar3 = (uint *)((int)&pCVar4->y + iVar6);
        puVar1 = (uint *)((int)&pCVar4->x + iVar6);
        iVar6 = iVar6 + 0xc;
        iVar8 = iVar8 + 1;
        FUN_005c03c0(DAT_007c3034,"\t%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
      } while (iVar8 < this_ptr->vertex_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->tri_count) {
      iStack_14 = 0;
      iVar6 = 0;
      do {
        pSVar5 = this_ptr->faces;
        FUN_005c03c0
                  (DAT_007c3034,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar6 + (int)this_ptr->face_texture_indices),
                   *(uint *)((int)&pSVar5->vertices[0].vertex_index + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[0].texture_u + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[0].texture_v + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[1].vertex_index + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[1].texture_u + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[1].texture_v + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[2].vertex_index + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[2].texture_u + iStack_14),
                   *(uint *)((int)&pSVar5->vertices[2].texture_v + iStack_14));
        iVar6 = iVar6 + 4;
        iVar8 = iVar8 + 1;
        iStack_14 = iStack_14 + 0x3c;
      } while (iVar8 < this_ptr->tri_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar7 = this_ptr->textures[0].texture_name;
      do {
        iVar8 = iVar8 + 1;
        FUN_005c03c0(DAT_007c3034,"\t\"%s\"\n",pcVar7);
        pcVar7 = pcVar7 + 0x18;
      } while (iVar8 < this_ptr->texture_count);
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveBox_FUN_0040bbf0(&this_ptr->physics_box,"simBox");
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->blood_type,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&this_ptr->dont_use_normals,"dontUseNormals");
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&this_ptr->transparent_geometry_flag,"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&this_ptr->render_in_background,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->dont_pick_me_up,"dontPickMeUp");
  }
  if (5 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              (&this_ptr->render_disabled,"dontGoIntoBackground");
    return;
  }
  return;
}
