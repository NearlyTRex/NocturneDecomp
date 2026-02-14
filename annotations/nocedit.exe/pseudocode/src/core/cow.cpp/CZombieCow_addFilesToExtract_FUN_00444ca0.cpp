// Name: core_cow.cpp_CZombieCow_addFilesToExtract_FUN_00444ca0
// Address: 00444ca0
// Address Range: [[00444ca0, 00444ccb]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_addFilesToExtract_FUN_00444ca0(CZombieCow *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_addFilesToExtract_FUN_00444ca0(CZombieCow *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
