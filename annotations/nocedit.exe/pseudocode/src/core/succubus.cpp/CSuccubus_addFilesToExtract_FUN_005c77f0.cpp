// Name: core_succubus.cpp_CSuccubus_addFilesToExtract_FUN_005c77f0
// Address: 005c77f0
// Address Range: [[005c77f0, 005c781b]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_addFilesToExtract_FUN_005c77f0(CSuccubus *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_succubus_cpp_CSuccubus_addFilesToExtract_FUN_005c77f0(CSuccubus *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
