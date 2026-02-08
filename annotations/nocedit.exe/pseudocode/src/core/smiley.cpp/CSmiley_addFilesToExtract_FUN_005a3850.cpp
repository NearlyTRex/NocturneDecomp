// Name: core_smiley.cpp_CSmiley_addFilesToExtract_FUN_005a3850
// Address: 005a3850
// Address Range: [[005a3850, 005a387b]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_addFilesToExtract_FUN_005a3850(CSmiley *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_smiley_cpp_CSmiley_addFilesToExtract_FUN_005a3850(CSmiley *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
