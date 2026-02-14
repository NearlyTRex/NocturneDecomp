// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
// Address: 00455250
// Address Range: [[00455250, 004552b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  g_TempTriangleIndices[0] = (uint)((int)this_ptr->vertices[0] - (int)vertex_buffer_base) / 0xc;
  g_TempTriangleIndices[1] = (uint)((int)this_ptr->vertices[1] - (int)vertex_buffer_base) / 0xc;
  g_TempTriangleIndices[2] = (uint)((int)this_ptr->vertices[2] - (int)vertex_buffer_base) / 0xc;
  _fwrite(g_TempTriangleIndices,3,4,file_handle);
  _fwrite(&this_ptr->normal,0x14,1,file_handle);
  return;
}
