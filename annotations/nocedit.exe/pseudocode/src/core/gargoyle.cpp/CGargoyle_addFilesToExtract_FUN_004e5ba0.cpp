// Name: core_gargoyle.cpp_CGargoyle_addFilesToExtract_FUN_004e5ba0
// Address: 004e5ba0
// Address Range: [[004e5ba0, 004e5bcb]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_addFilesToExtract_FUN_004e5ba0(CGargoyle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_addFilesToExtract_FUN_004e5ba0(CGargoyle *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
