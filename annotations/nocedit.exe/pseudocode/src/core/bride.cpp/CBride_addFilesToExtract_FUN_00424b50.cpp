// Name: core_bride.cpp_CBride_addFilesToExtract_FUN_00424b50
// Address: 00424b50
// Address Range: [[00424b50, 00424b7b]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_addFilesToExtract_FUN_00424b50(CBride *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_bride_cpp_CBride_addFilesToExtract_FUN_00424b50(CBride *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
