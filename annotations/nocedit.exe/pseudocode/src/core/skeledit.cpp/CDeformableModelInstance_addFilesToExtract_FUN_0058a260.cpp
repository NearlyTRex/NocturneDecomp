// Name: core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
// Address: 0058a260
// Address Range: [[0058a260, 0058a2a3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260 (CDeformableModelInstance *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
          (CDeformableModelInstance *this_ptr,_FILE *file_handle)

{
  __STK(0x14);
  _fprintf(file_handle,"MODELS\\%s\n",this_ptr->model_name);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeledit_cpp_FUN_0058a2b0();
  return;
}
