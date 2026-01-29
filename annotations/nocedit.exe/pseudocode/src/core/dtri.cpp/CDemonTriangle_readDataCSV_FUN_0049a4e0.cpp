// Name: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0
// Address: 0049a4e0
// Address Range: [[0049a4e0, 0049a522]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fscanf(file_handle,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n",this_ptr,&(this_ptr->vertex1).y,
             &(this_ptr->vertex1).z,&this_ptr->vertex2,&(this_ptr->vertex2).y,&(this_ptr->vertex2).z
             ,&this_ptr->vertex3,&(this_ptr->vertex3).y,&(this_ptr->vertex3).z);
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(this_ptr);
  return;
}
