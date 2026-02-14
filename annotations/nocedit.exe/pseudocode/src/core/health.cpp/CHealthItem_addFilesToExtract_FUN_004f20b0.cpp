// Name: core_health.cpp_CHealthItem_addFilesToExtract_FUN_004f20b0
// Address: 004f20b0
// Address Range: [[004f20b0, 004f20c7]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_addFilesToExtract_FUN_004f20b0(CHealthItem *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_addFilesToExtract_FUN_004f20b0(CHealthItem *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
