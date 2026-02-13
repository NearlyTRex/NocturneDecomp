// Name: core_simbox.cpp_CSimBox_addFilesToExtract_FUN_005893c0
// Address: 005893c0
// Address Range: [[005893c0, 005893d7]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_addFilesToExtract_FUN_005893c0(CSimBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_simbox_cpp_CSimBox_addFilesToExtract_FUN_005893c0(CSimBox *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
