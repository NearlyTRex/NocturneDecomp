// Name: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
// Address: 00547170
// Address Range: [[00547170, 005471eb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)

{
  CDeformableModel *this_ptr_00;
  CBoundingBox3D *bounding_box;
  
  if (lod_index < 0) {
    bounding_box = (CBoundingBox3D *)&this_ptr->field_0x2238;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
    lod_index = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00543d00(this_ptr_00,bounding_box);
  }
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(this_ptr,lod_index);
  if (lighting_mode == 0) {
    if (((int)render_flags < 0) || ((render_flags & 0x100) == 0)) {
      core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320(this_ptr,lod_index);
    }
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0(this_ptr,lod_index)
    ;
  }
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_00547370
            (this_ptr,render_flags,render_pass);
  return;
}
