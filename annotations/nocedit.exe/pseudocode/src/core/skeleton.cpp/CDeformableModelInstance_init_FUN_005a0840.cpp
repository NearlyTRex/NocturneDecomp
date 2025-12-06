// Name: core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
// Address: 005a0840
// Address Range: [[005a0840, 005a0894]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
          (CDeformableModelInstance *this_ptr,char *model_name)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this_ptr->model_name;
  do {
    cVar1 = *model_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = model_name[1];
    model_name = model_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->model_ptr = (CDeformableModel *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(this_ptr);
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
