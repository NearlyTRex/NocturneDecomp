// Name: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
// Address: 005a0340
// Address Range: [[005a0340, 005a03ab]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture)

{
  CDeformableModel *this_ptr_00;
  int lod_index;
  SPartInstanceData *part_visibility_flags;
  int *texture_set_indices;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 3363;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  texture_set_indices = (this_ptr->part_data).texture_set_indices;
  part_visibility_flags = &this_ptr->part_data;
  lod_index = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderParts_FUN_0059abf0
            (this_ptr_00,lod_index,part_visibility_flags->visibility_flags,texture_set_indices,
             render_flags,skip_texture_capture);
  return;
}
