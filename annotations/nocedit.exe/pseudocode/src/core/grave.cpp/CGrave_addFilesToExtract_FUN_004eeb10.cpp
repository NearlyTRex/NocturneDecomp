// Name: core_grave.cpp_CGrave_addFilesToExtract_FUN_004eeb10
// Address: 004eeb10
// Address Range: [[004eeb10, 004eeb3b]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_addFilesToExtract_FUN_004eeb10(CGrave *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_addFilesToExtract_FUN_004eeb10(CGrave *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(&this_ptr->base,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
