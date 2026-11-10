// Name: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_004787a0
// Address: 004787a0
// Address Range: [[004787a0, 004787e2]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_004787a0(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_004787a0(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fscanf(file_handle,0x5bcc51,this_ptr,&(this_ptr->vertex1).y,&(this_ptr->vertex1).z,
             &this_ptr->vertex2,&(this_ptr->vertex2).y,&(this_ptr->vertex2).z,&this_ptr->vertex3,
             &(this_ptr->vertex3).y,&(this_ptr->vertex3).z);
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_00478900(this_ptr);
  return;
}
