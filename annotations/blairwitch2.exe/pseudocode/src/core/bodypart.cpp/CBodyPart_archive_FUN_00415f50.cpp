// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00415f50
// Address: 00415f50
// Address Range: [[00415f50, 004162a9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00415f50(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00415f50(CBodyPart *this_ptr)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  CVector3i *pCVar4;
  SMRGLPrimitiveTriangle *pSVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  int iVar9;
  int iStack_18;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->texture_count,"textureCount");
  if (DAT_007bc038 == 1) {
    core_bodypart_cpp_FUN_00415890(this_ptr,this_ptr->vertex_count,this_ptr->tri_count);
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar9 = 0;
      do {
        iVar7 = (int)&this_ptr->vertices->x + iVar9;
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0xc;
        _fscanf(DAT_007bc034,"%d,%d,%d\n",iVar7,iVar7 + 4,iVar7 + 8);
      } while (iVar6 < this_ptr->vertex_count);
    }
    iStack_14 = 0;
    if (0 < this_ptr->tri_count) {
      iVar9 = 0;
      iVar6 = 0;
      do {
        pSVar5 = this_ptr->faces;
        _fscanf(DAT_007bc034,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   (int)this_ptr->face_texture_indices + iVar9,pSVar5 + iVar6 + 0x18,
                   pSVar5 + iVar6 + 0x1c,pSVar5 + iVar6 + 0x20,pSVar5 + iVar6 + 0x24,
                   pSVar5 + iVar6 + 0x28,pSVar5 + iVar6 + 0x2c,pSVar5 + iVar6 + 0x30,
                   pSVar5 + iVar6 + 0x34,pSVar5 + iVar6 + 0x38);
        iVar9 = iVar9 + 4;
        *(uint *)(pSVar5 + iVar6 + 4) = 3;
        iStack_14 = iStack_14 + 1;
        iVar6 = iVar6 + 0x3c;
      } while (iStack_14 < this_ptr->tri_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->texture_count) {
      puVar8 = &this_ptr->field_0x2f4;
      do {
        iVar6 = iVar6 + 1;
        _fscanf(DAT_007bc034," \"%[^\"]\"\n",puVar8);
        puVar8 = puVar8 + 0x18;
      } while (iVar6 < this_ptr->texture_count);
    }
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(this_ptr);
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
        FUN_005b8010(DAT_007bc034,"\t%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
      } while (iVar6 < this_ptr->vertex_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->tri_count) {
      iStack_18 = 0;
      iVar9 = 0;
      do {
        pSVar5 = this_ptr->faces;
        FUN_005b8010
                  (DAT_007bc034,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar9 + (int)this_ptr->face_texture_indices),
                   *(uint *)(pSVar5 + iStack_18 + 0x18),
                   *(uint *)(pSVar5 + iStack_18 + 0x1c),
                   *(uint *)(pSVar5 + iStack_18 + 0x20),
                   *(uint *)(pSVar5 + iStack_18 + 0x24),
                   *(uint *)(pSVar5 + iStack_18 + 0x28),
                   *(uint *)(pSVar5 + iStack_18 + 0x2c),
                   *(uint *)(pSVar5 + iStack_18 + 0x30),
                   *(uint *)(pSVar5 + iStack_18 + 0x34),
                   *(uint *)(pSVar5 + iStack_18 + 0x38));
        iVar9 = iVar9 + 4;
        iVar6 = iVar6 + 1;
        iStack_18 = iStack_18 + 0x3c;
      } while (iVar6 < this_ptr->tri_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->texture_count) {
      puVar8 = &this_ptr->field_0x2f4;
      do {
        iVar6 = iVar6 + 1;
        FUN_005b8010(DAT_007bc034,"\t\"%s\"\n",puVar8);
        puVar8 = puVar8 + 0x18;
      } while (iVar6 < this_ptr->texture_count);
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveBox_FUN_0040bee0(&this_ptr->physics_box,"simBox");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->carried_by_actor,"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->blood_type,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->dont_use_normals,"dontUseNormals");
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->transparent_geometry_flag,"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              (&this_ptr->render_in_background,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->dont_pick_me_up,"dontPickMeUp");
    return;
  }
  return;
}
