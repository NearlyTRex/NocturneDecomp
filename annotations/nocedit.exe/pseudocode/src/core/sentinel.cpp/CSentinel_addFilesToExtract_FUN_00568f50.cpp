// Name: core_sentinel.cpp_CSentinel_addFilesToExtract_FUN_00568f50
// Address: 00568f50
// Address Range: [[00568f50, 00568f7b]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_addFilesToExtract_FUN_00568f50(CSentinel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_sentinel_cpp_CSentinel_addFilesToExtract_FUN_00568f50(CSentinel *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
