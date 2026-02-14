// Name: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530
// Address: 0049a530
// Address Range: [[0049a530, 0049a596]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0049a530(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0049a530(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fprintf(file_handle,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n",(double)(this_ptr->vertex1).x,
             (double)(this_ptr->vertex1).y,(double)(this_ptr->vertex1).z,
             (double)(this_ptr->vertex2).x,(double)(this_ptr->vertex2).y,
             (double)(this_ptr->vertex2).z,(double)(this_ptr->vertex3).x,
             (double)(this_ptr->vertex3).y,(double)(this_ptr->vertex3).z);
  return;
}
