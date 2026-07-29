// Name: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0046c300
// Address: 0046c300
// Address Range: [[0046c300, 0046c342]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0046c300(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0046c300(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fscanf(file_handle,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n");
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_0046c460(this_ptr);
  return;
}
