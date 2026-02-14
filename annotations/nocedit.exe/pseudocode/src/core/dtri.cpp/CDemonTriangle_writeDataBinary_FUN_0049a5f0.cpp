// Name: core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0
// Address: 0049a5f0
// Address Range: [[0049a5f0, 0049a63d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fwrite(this_ptr,0xc,1,file_handle);
  _fwrite(&this_ptr->vertex2,0xc,1,file_handle);
  _fwrite(&this_ptr->vertex3,0xc,1,file_handle);
  _fwrite(&this_ptr->normal,0x14,1,file_handle);
  return;
}
