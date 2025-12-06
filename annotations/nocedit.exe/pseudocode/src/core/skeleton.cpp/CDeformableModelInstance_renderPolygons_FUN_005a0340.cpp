// Name: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
// Address: 005a0340
// Address Range: [[005a0340, 005a03ab]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  int unaff_EDI;
  int *in_stack_0000000c;
  int in_stack_00000010;
  int *lod_index;
  int *part_visibility_flags;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xd23;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  part_visibility_flags = this_ptr->texture_set_indices;
  lod_index = this_ptr->part_visibility_flags;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderParts_FUN_0059abf0
            (this_ptr_00,(int)lod_index,(byte *)part_visibility_flags,in_stack_0000000c,
             in_stack_00000010,unaff_EDI);
  return;
}
