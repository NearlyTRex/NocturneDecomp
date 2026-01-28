// Name: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
// Address: 004551d0
// Address Range: [[004551d0, 0045524d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0 (CDemonCubeTriangle *this_ptr,FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
          (CDemonCubeTriangle *this_ptr,FILE *file_handle,CVector3f *vertex_buffer_base)

{
  crt_stdio_c_fread_FUN_005fd990(g_TempTriangleIndices,3,4,file_handle);
  this_ptr->vertices[0] = vertex_buffer_base + g_TempTriangleIndices[0];
  this_ptr->vertices[1] = vertex_buffer_base + g_TempTriangleIndices[1];
  this_ptr->vertices[2] = vertex_buffer_base + g_TempTriangleIndices[2];
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->normal,0x14,1,file_handle);
  return;
}
