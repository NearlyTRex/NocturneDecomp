// Name: core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
// Address: 005a0840
// MANUAL RECONSTRUCTION
// Address Range: [[005a0840, 005a0894]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance *this_ptr,char *model_name)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance *this_ptr,char *model_name)

{
  strcpy(this_ptr->model_name,model_name);
  this_ptr->model_ptr = (CDeformableModel *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(this_ptr);
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
