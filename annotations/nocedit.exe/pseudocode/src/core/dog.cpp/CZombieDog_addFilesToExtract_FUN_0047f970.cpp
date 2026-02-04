// Name: core_dog.cpp_CZombieDog_addFilesToExtract_FUN_0047f970
// Address: 0047f970
// Address Range: [[0047f970, 0047f99b]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_addFilesToExtract_FUN_0047f970(CZombieDog *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_dog_cpp_CZombieDog_addFilesToExtract_FUN_0047f970(CZombieDog *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
