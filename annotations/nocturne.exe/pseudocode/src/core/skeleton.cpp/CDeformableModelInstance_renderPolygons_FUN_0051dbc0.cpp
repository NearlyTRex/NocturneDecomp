// Name: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
// Address: 0051dbc0
// Address Range: [[0051dbc0, 0051dc2b]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(CDeformableModelInstance *param_1,int param_2,int param_3)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0(CDeformableModelInstance *param_1,int param_2,int param_3)

{
  CDeformableModel *this_ptr;
  int lod_index;
  SPartInstanceData *part_visibility_flags;
  int *texture_set_indices;
  
  if (param_1->cached_skinned_lod_index < 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0xd23;
    core_main_c_FUN_004c8440("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  texture_set_indices = (param_1->part_data).texture_set_indices;
  part_visibility_flags = &param_1->part_data;
  lod_index = param_1->cached_skinned_lod_index;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1);
  core_skeleton_cpp_CDeformableModel_renderParts_FUN_00518510
            (this_ptr,lod_index,part_visibility_flags->visibility_flags,texture_set_indices,param_2,
             param_3);
  return;
}
