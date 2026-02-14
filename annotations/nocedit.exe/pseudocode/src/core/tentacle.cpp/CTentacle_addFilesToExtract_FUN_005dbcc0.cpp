// Name: core_tentacle.cpp_CTentacle_addFilesToExtract_FUN_005dbcc0
// Address: 005dbcc0
// Address Range: [[005dbcc0, 005dbceb]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_addFilesToExtract_FUN_005dbcc0(CTentacle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_addFilesToExtract_FUN_005dbcc0(CTentacle *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
