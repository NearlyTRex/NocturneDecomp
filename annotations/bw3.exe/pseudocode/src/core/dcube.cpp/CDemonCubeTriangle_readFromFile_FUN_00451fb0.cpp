// Name: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00451fb0
// Address: 00451fb0
// Address Range: [[00451fb0, 0045202d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00451fb0(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00451fb0(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  _fread(g_UINT_ARRAY_01548b7c,3,4,file_handle);
  (this_ptr->triangle).vertices[0] = vertex_buffer_base + g_UINT_ARRAY_01548b7c[0];
  (this_ptr->triangle).vertices[1] = vertex_buffer_base + g_UINT_ARRAY_01548b7c[1];
  (this_ptr->triangle).vertices[2] = vertex_buffer_base + g_UINT_ARRAY_01548b7c[2];
  _fread(&(this_ptr->triangle).normal,0x14,1,file_handle);
  return;
}
