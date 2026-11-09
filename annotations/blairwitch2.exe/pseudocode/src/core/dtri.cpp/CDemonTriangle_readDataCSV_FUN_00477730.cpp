// Name: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_00477730
// Address: 00477730
// Address Range: [[00477730, 00477772]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_00477730(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_00477730(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fscanf(file_handle,0x5d1d9b,this_ptr,&this_ptr->field_0x4,&this_ptr->field_0x8,
             &this_ptr->field_0xc,&this_ptr->field_0x10,&this_ptr->field_0x14,&this_ptr->field_0x18,
             &this_ptr->field_0x1c,&this_ptr->field_0x20);
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_00477890(this_ptr);
  return;
}
