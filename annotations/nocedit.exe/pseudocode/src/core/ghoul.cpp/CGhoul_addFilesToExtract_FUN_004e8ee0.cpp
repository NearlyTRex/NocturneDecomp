// Name: core_ghoul.cpp_CGhoul_addFilesToExtract_FUN_004e8ee0
// Address: 004e8ee0
// Address Range: [[004e8ee0, 004e8f0b]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_addFilesToExtract_FUN_004e8ee0(CGhoul *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_addFilesToExtract_FUN_004e8ee0(CGhoul *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
