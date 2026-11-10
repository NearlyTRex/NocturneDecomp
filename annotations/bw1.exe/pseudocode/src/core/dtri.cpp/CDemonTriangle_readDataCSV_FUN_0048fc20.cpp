// Name: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0048fc20
// Address: 0048fc20
// Address Range: [[0048fc20, 0048fc62]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0048fc20(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0048fc20(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fscanf(file_handle,0x5dbb94,this_ptr,&(this_ptr->vertex1).y,&(this_ptr->vertex1).z,
             &this_ptr->vertex2,&(this_ptr->vertex2).y,&(this_ptr->vertex2).z,&this_ptr->vertex3,
             &(this_ptr->vertex3).y,&(this_ptr->vertex3).z);
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_0048fd80(this_ptr);
  return;
}
