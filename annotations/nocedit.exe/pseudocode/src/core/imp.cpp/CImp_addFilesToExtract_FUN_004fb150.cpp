// Name: core_imp.cpp_CImp_addFilesToExtract_FUN_004fb150
// Address: 004fb150
// Address Range: [[004fb150, 004fb17b]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_addFilesToExtract_FUN_004fb150(CImp *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_addFilesToExtract_FUN_004fb150(CImp *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
