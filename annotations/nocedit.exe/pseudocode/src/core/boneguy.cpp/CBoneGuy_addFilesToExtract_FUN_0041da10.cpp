// Name: core_boneguy.cpp_CBoneGuy_addFilesToExtract_FUN_0041da10
// Address: 0041da10
// Address Range: [[0041da10, 0041da3b]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_addFilesToExtract_FUN_0041da10(CBoneGuy *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_boneguy_cpp_CBoneGuy_addFilesToExtract_FUN_0041da10(CBoneGuy *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
