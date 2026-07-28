// Name: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
// Address: 0051d9d0
// Address Range: [[0051d9d0, 0051da4b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)

{
  CDeformableModel *this_ptr_00;
  CBoundingBox3D *bounding_box;
  
  if (lod_index < 0) {
    bounding_box = &this_ptr->bounding_box;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
    lod_index = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0051a700(this_ptr_00,bounding_box);
  }
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0(this_ptr,lod_index);
  if (lighting_mode == 0) {
    if (((int)render_flags < 0) || ((render_flags & 0x100) == 0)) {
      core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70(this_ptr,lod_index);
    }
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20(this_ptr,lod_index)
    ;
  }
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
            (this_ptr,render_flags,render_pass);
  return;
}
