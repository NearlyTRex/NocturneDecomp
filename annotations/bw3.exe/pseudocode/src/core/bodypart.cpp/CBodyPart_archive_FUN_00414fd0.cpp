// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00414fd0
// Address: 00414fd0
// Address Range: [[00414fd0, 00415349]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00414fd0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00414fd0(CBodyPart *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  CVector3i *pCVar4;
  SMRGLPrimitiveTriangle *pSVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iStack_18;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->texture_count,"textureCount");
  if (DAT_007df9b8 == 1) {
    iVar9 = 0;
    core_bodypart_cpp_FUN_00414910(this_ptr,this_ptr->vertex_count,this_ptr->tri_count);
    if (0 < this_ptr->vertex_count) {
      iVar6 = 0;
      do {
        iVar7 = (int)&this_ptr->vertices->x + iVar6;
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 0xc;
        _fscanf(DAT_007df9b4,"%d,%d,%d\n",iVar7,iVar7 + 4,iVar7 + 8);
      } while (iVar9 < this_ptr->vertex_count);
    }
    iVar9 = 0;
    if (0 < this_ptr->tri_count) {
      iStack_18 = 0;
      iVar6 = 0;
      do {
        pSVar5 = this_ptr->faces;
        iVar9 = iVar9 + 1;
        _fscanf(DAT_007df9b4,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   (int)this_ptr->face_texture_indices + iStack_18,pSVar5 + iVar6 + 0x18,
                   pSVar5 + iVar6 + 0x1c,pSVar5 + iVar6 + 0x20,pSVar5 + iVar6 + 0x24,
                   pSVar5 + iVar6 + 0x28,pSVar5 + iVar6 + 0x2c,pSVar5 + iVar6 + 0x30,
                   pSVar5 + iVar6 + 0x34,pSVar5 + iVar6 + 0x38);
        *(uint *)(pSVar5 + iVar6 + 4) = 3;
        iVar6 = iVar6 + 0x3c;
        iStack_18 = iStack_18 + 4;
      } while (iVar9 < this_ptr->tri_count);
    }
    iVar9 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar8 = this_ptr->textures[0].texture_name;
      do {
        iVar9 = iVar9 + 1;
        _fscanf(DAT_007df9b4," \"%[^\"]\"\n",pcVar8);
        pcVar8 = pcVar8 + 0x18;
      } while (iVar9 < this_ptr->texture_count);
    }
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(this_ptr);
  }
  else {
    iVar9 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar6 = 0;
      do {
        pCVar4 = this_ptr->vertices;
        puVar2 = (uint *)((int)&pCVar4->z + iVar6);
        puVar3 = (uint *)((int)&pCVar4->y + iVar6);
        puVar1 = (uint *)((int)&pCVar4->x + iVar6);
        iVar6 = iVar6 + 0xc;
        iVar9 = iVar9 + 1;
        FUN_005a3140(DAT_007df9b4,"\t%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
      } while (iVar9 < this_ptr->vertex_count);
    }
    iVar9 = 0;
    if (0 < this_ptr->tri_count) {
      iStack_14 = 0;
      iVar6 = 0;
      do {
        pSVar5 = this_ptr->faces;
        FUN_005a3140
                  (DAT_007df9b4,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar6 + (int)this_ptr->face_texture_indices),
                   *(uint *)(pSVar5 + iStack_14 + 0x18),
                   *(uint *)(pSVar5 + iStack_14 + 0x1c),
                   *(uint *)(pSVar5 + iStack_14 + 0x20),
                   *(uint *)(pSVar5 + iStack_14 + 0x24),
                   *(uint *)(pSVar5 + iStack_14 + 0x28),
                   *(uint *)(pSVar5 + iStack_14 + 0x2c),
                   *(uint *)(pSVar5 + iStack_14 + 0x30),
                   *(uint *)(pSVar5 + iStack_14 + 0x34),
                   *(uint *)(pSVar5 + iStack_14 + 0x38));
        iVar6 = iVar6 + 4;
        iVar9 = iVar9 + 1;
        iStack_14 = iStack_14 + 0x3c;
      } while (iVar9 < this_ptr->tri_count);
    }
    iVar9 = 0;
    if (0 < this_ptr->texture_count) {
      pcVar8 = this_ptr->textures[0].texture_name;
      do {
        iVar9 = iVar9 + 1;
        FUN_005a3140(DAT_007df9b4,"\t\"%s\"\n",pcVar8);
        pcVar8 = pcVar8 + 0x18;
      } while (iVar9 < this_ptr->texture_count);
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveBox_FUN_0040be30(&this_ptr->physics_box,"simBox");
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->blood_type,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->dont_use_normals,"dontUseNormals");
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->transparent_geometry_flag,"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              (&this_ptr->render_in_background,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->dont_pick_me_up,"dontPickMeUp");
  }
  if (5 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0xcc8,"dontGoIntoBackground");
    return;
  }
  return;
}
