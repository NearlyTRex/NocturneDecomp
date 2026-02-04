// Name: core_drone.cpp_CDrone_addFilesToExtract_FUN_0048f570
// Address: 0048f570
// Address Range: [[0048f570, 0048f59b]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_addFilesToExtract_FUN_0048f570(CDrone *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_drone_cpp_CDrone_addFilesToExtract_FUN_0048f570(CDrone *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
