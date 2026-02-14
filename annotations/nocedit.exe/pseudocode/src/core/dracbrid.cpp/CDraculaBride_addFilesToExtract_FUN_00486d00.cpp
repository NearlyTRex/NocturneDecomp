// Name: core_dracbrid.cpp_CDraculaBride_addFilesToExtract_FUN_00486d00
// Address: 00486d00
// Address Range: [[00486d00, 00486d2b]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_addFilesToExtract_FUN_00486d00(CDraculaBride *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_addFilesToExtract_FUN_00486d00(CDraculaBride *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
