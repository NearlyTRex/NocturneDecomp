// Name: core_mimic.cpp_CMimic_addFilesToExtract_FUN_00520dd0
// Address: 00520dd0
// Address Range: [[00520dd0, 00520dfb]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_addFilesToExtract_FUN_00520dd0(CMimic *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_addFilesToExtract_FUN_00520dd0(CMimic *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
