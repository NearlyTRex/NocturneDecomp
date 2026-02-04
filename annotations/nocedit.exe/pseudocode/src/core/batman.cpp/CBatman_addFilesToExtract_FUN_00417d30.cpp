// Name: core_batman.cpp_CBatman_addFilesToExtract_FUN_00417d30
// Address: 00417d30
// Address Range: [[00417d30, 00417d5b]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_addFilesToExtract_FUN_00417d30(CBatman *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_batman_cpp_CBatman_addFilesToExtract_FUN_00417d30(CBatman *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
