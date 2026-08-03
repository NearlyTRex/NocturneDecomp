// Name: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30
// Address: 0051dc30
// Address Range: [[0051dc30, 0051dc81]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  int lod_level;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\skeleton.cpp";
    g_INT_01cc4804 = 0xd33;
    core_main_c_FUN_004c8440("CDeformableModelInstance::outlinePolygons called but LOD is not set!");
  }
  lod_level = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(this_ptr_00,lod_level);
  return;
}
