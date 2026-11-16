// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00415f50
// Address: 00415f50
// Address Range: [[00415f50, 004162a9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00415f50(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00415f50(CBodyPart *this_ptr)

{
  SMRGLPrimitiveTriangle *pSVar1;
  int iVar2;
  int iStack_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->texture_count,"textureCount");
  if (DAT_007bc038 == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415890
              (this_ptr,this_ptr->vertex_count,this_ptr->tri_count);
    iVar2 = 0;
    if (0 < this_ptr->vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(DAT_007bc034,"%d,%d,%d\n");
      } while (iVar2 < this_ptr->vertex_count);
    }
    iStack_14 = 0;
    if (0 < this_ptr->tri_count) {
      iVar2 = 0;
      do {
        pSVar1 = this_ptr->faces;
        _fscanf(DAT_007bc034,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n");
        *(uint *)((int)pSVar1->vertices + iVar2 + -0x14) = 3;
        iStack_14 = iStack_14 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iStack_14 < this_ptr->tri_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->texture_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(DAT_007bc034," \"%[^\"]\"\n");
      } while (iVar2 < this_ptr->texture_count);
    }
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(this_ptr);
  }
  else {
    iVar2 = 0;
    if (0 < this_ptr->vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        _fprintf(DAT_007bc034,"\t%d,%d,%d\n");
      } while (iVar2 < this_ptr->vertex_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->tri_count) {
      do {
        _fprintf(DAT_007bc034,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n");
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->tri_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->texture_count) {
      do {
        iVar2 = iVar2 + 1;
        _fprintf(DAT_007bc034,"\t\"%s\"\n");
      } while (iVar2 < this_ptr->texture_count);
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
