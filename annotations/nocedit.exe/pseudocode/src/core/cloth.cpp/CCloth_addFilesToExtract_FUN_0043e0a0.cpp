// Name: core_cloth.cpp_CCloth_addFilesToExtract_FUN_0043e0a0
// Address: 0043e0a0
// Address Range: [[0043e0a0, 0043e0cf]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_addFilesToExtract_FUN_0043e0a0(CCloth *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_cloth_cpp_CCloth_addFilesToExtract_FUN_0043e0a0(CCloth *this_ptr,_FILE *file_handle)

{
  _fprintf(file_handle,"models\\%s\n",this_ptr);
  core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(&this_ptr->model,file_handle,0);
  return;
}
