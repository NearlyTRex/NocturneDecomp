// Name: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30
// Address: 0051dc30
// Address Range: [[0051dc30, 0051dc81]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_0051dc30(void)

{
  CDeformableModel *this_ptr;
  CDeformableModelInstance *in_stack_00000004;
  int lod_level;
  
  if (in_stack_00000004->cached_skinned_lod_index < 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0xd33;
    core_main_c_FUN_004c8440("CDeformableModelInstance::outlinePolygons called but LOD is not set!");
  }
  lod_level = in_stack_00000004->cached_skinned_lod_index;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(in_stack_00000004);
  core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_00518ec0(this_ptr,lod_level);
  return;
}
