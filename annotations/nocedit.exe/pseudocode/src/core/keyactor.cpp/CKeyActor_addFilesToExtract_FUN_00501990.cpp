// Name: core_keyactor.cpp_CKeyActor_addFilesToExtract_FUN_00501990
// Address: 00501990
// Address Range: [[00501990, 005019a7]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_addFilesToExtract_FUN_00501990(CKeyActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_keyactor_cpp_CKeyActor_addFilesToExtract_FUN_00501990(CKeyActor *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
