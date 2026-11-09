// Name: core_skeleton.cpp_FUN_0054e3a0
// Address: 0054e3a0
// Address Range: [[0054e3a0, 0054e41b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054e3a0(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054e3a0(CDeformableModelInstance *this_ptr,int lod_index,uint render_flags,int lighting_mode ,int render_pass)

{
  CDeformableModel *this_ptr_00;
  CBoundingBox3D *bounding_box;
  
  if (lod_index < 0) {
    bounding_box = (CBoundingBox3D *)&this_ptr->field_0x2328;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
    lod_index = core_skeleton_cpp_FUN_0054af10(this_ptr_00,bounding_box);
  }
  core_skeleton_cpp_FUN_0054e4b0(this_ptr,lod_index);
  if (lighting_mode == 0) {
    if (((int)render_flags < 0) || ((render_flags & 0x100) == 0)) {
      core_skeleton_cpp_FUN_0054e550(this_ptr,lod_index);
    }
  }
  else {
    core_skeleton_cpp_FUN_0054e500(this_ptr,lod_index);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_0054e5a0
            (this_ptr,render_flags,render_pass);
  return;
}
