// Name: core_hotdemon.cpp_CHotDemon_addFilesToExtract_FUN_004f7a10
// Address: 004f7a10
// Address Range: [[004f7a10, 004f7a3b]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_addFilesToExtract_FUN_004f7a10(CHotDemon *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_addFilesToExtract_FUN_004f7a10(CHotDemon *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
