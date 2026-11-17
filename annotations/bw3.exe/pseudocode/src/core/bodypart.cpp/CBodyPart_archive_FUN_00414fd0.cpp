// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00414fd0
// Address: 00414fd0
// Address Range: [[00414fd0, 00415349]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00414fd0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_00414fd0(CBodyPart *this_ptr)

{
  SMRGLPrimitiveTriangle *pSVar1;
  int iVar2;
  int iVar3;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->vertex_count,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->tri_count,"triCount");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->texture_count,"textureCount");
  if (g_INT_007df9b8 == 1) {
    iVar2 = 0;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00414910
              (this_ptr,this_ptr->vertex_count,this_ptr->tri_count);
    if (0 < this_ptr->vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(g_FILE_PTR_007df9b4,"%d,%d,%d\n");
      } while (iVar2 < this_ptr->vertex_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->tri_count) {
      iVar3 = 0;
      do {
        pSVar1 = this_ptr->faces;
        iVar2 = iVar2 + 1;
        _fscanf(g_FILE_PTR_007df9b4,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n");
        *(uint *)((int)pSVar1->vertices + iVar3 + -0x14) = 3;
        iVar3 = iVar3 + 0x3c;
      } while (iVar2 < this_ptr->tri_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->texture_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(g_FILE_PTR_007df9b4," \"%[^\"]\"\n");
      } while (iVar2 < this_ptr->texture_count);
    }
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(this_ptr);
  }
  else {
    iVar2 = 0;
    if (0 < this_ptr->vertex_count) {
      do {
        iVar2 = iVar2 + 1;
        _fprintf(g_FILE_PTR_007df9b4,"\t%d,%d,%d\n");
      } while (iVar2 < this_ptr->vertex_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->tri_count) {
      do {
        _fprintf(g_FILE_PTR_007df9b4,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n");
        iVar2 = iVar2 + 1;
      } while (iVar2 < this_ptr->tri_count);
    }
    iVar2 = 0;
    if (0 < this_ptr->texture_count) {
      do {
        iVar2 = iVar2 + 1;
        _fprintf(g_FILE_PTR_007df9b4,"\t\"%s\"\n");
      } while (iVar2 < this_ptr->texture_count);
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
              (&this_ptr->render_disabled,"dontGoIntoBackground");
    return;
  }
  return;
}
