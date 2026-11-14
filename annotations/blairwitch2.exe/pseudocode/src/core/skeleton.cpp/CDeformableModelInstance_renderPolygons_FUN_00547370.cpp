// Name: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_00547370
// Address: 00547370
// Address Range: [[00547370, 005473db]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00547370(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00547370(CDeformableModelInstance *this_ptr,int render_flags,int skip_texture_capture)

{
  CDeformableModel *this_ptr_00;
  int lod_index;
  SPartInstanceData *part_visibility_flags;
  int *texture_set_indices;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0xd32;
    core_main_c_FUN_004e4500("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  texture_set_indices = (this_ptr->part_data).texture_set_indices;
  part_visibility_flags = &this_ptr->part_data;
  lod_index = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderParts_FUN_00541a60
            (this_ptr_00,lod_index,part_visibility_flags->visibility_flags,texture_set_indices,
             render_flags,skip_texture_capture);
  return;
}
