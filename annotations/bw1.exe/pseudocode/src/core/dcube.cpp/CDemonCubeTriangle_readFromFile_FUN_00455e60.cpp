// Name: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00455e60
// Address: 00455e60
// Address Range: [[00455e60, 00455edd]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00455e60(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00455e60(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  _fread(&DAT_0152c2cc,3,4,file_handle);
  *(CVector3f **)this_ptr = vertex_buffer_base + _DAT_0152c2cc;
  *(CVector3f **)(this_ptr + 4) = vertex_buffer_base + _DAT_0152c2d0;
  *(CVector3f **)(this_ptr + 8) = vertex_buffer_base + _DAT_0152c2d4;
  _fread(this_ptr + 0xc,0x14,1,file_handle);
  return;
}
