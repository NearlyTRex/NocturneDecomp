// Name: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0046c3c0
// Address: 0046c3c0
// Address Range: [[0046c3c0, 0046c40d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0046c3c0(CDemonTriangle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0046c3c0(CDemonTriangle *this_ptr,_FILE *file_handle)

{
  _fread(this_ptr,0xc,1,file_handle);
  _fread(&this_ptr->vertex2,0xc,1,file_handle);
  _fread(&this_ptr->vertex3,0xc,1,file_handle);
  _fread(&this_ptr->normal,0x14,1,file_handle);
  return;
}
