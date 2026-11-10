// Name: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_00477780
// Address: 00477780
// Address Range: [[00477780, 004777e6]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_00477780(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_00477780(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  FUN_005b8010
            (file_handle,0x5d1db7,(double)(this_ptr->vertex1).x,(double)(this_ptr->vertex1).y,
             (double)(this_ptr->vertex1).z,(double)(this_ptr->vertex2).x,
             (double)(this_ptr->vertex2).y,(double)(this_ptr->vertex2).z,
             (double)(this_ptr->vertex3).x,(double)(this_ptr->vertex3).y,
             (double)(this_ptr->vertex3).z);
  return;
}
