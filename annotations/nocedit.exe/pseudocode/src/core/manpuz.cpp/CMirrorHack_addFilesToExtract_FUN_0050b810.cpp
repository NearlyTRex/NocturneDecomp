// Name: core_manpuz.cpp_CMirrorHack_addFilesToExtract_FUN_0050b810
// Address: 0050b810
// Address Range: [[0050b810, 0050b83b]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_addFilesToExtract_FUN_0050b810(CMirrorHack *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_addFilesToExtract_FUN_0050b810(CMirrorHack *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(&this_ptr->base,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->mirror_model,file_handle);
  return;
}
