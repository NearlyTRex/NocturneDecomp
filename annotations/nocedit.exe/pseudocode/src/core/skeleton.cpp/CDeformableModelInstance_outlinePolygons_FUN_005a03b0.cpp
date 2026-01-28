// Name: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
// Address: 005a03b0
// Address Range: [[005a03b0, 005a0401]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0 (CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  int lod_level;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xd33;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::outlinePolygons called but LOD is not set!");
  }
  lod_level = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_0059b5a0(this_ptr_00,lod_level);
  return;
}
