// Name: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_004787f0
// Address: 004787f0
// Address Range: [[004787f0, 00478856]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_004787f0(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_004787f0(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  FUN_005a3140
            (file_handle,0x5bcc6d,(double)(this_ptr->vertex1).x,(double)(this_ptr->vertex1).y,
             (double)(this_ptr->vertex1).z,(double)(this_ptr->vertex2).x,
             (double)(this_ptr->vertex2).y,(double)(this_ptr->vertex2).z,
             (double)(this_ptr->vertex3).x,(double)(this_ptr->vertex3).y,
             (double)(this_ptr->vertex3).z);
  return;
}
