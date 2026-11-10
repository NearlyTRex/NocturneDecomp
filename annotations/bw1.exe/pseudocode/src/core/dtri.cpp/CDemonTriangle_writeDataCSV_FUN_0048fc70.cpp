// Name: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0048fc70
// Address: 0048fc70
// Address Range: [[0048fc70, 0048fcd6]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0048fc70(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0048fc70(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  FUN_005c03c0
            (file_handle,0x5dbbb0,(double)(this_ptr->vertex1).x,(double)(this_ptr->vertex1).y,
             (double)(this_ptr->vertex1).z,(double)(this_ptr->vertex2).x,
             (double)(this_ptr->vertex2).y,(double)(this_ptr->vertex2).z,
             (double)(this_ptr->vertex3).x,(double)(this_ptr->vertex3).y,
             (double)(this_ptr->vertex3).z);
  return;
}
