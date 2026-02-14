// Name: core_hostage.cpp_CHostage_addFilesToExtract_FUN_004f6b30
// Address: 004f6b30
// Address Range: [[004f6b30, 004f6b5b]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_addFilesToExtract_FUN_004f6b30(CHostage *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_addFilesToExtract_FUN_004f6b30(CHostage *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
