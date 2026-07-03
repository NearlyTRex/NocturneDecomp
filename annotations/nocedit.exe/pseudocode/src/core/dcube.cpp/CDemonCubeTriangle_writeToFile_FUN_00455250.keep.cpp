// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
// Address: 00455250
// MANUAL RECONSTRUCTION
// Address Range: [[00455250, 004552b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  g_TempTriangleIndices[0] =
       (uint)((intptr_t)(this_ptr->triangle).vertices[0] - (intptr_t)vertex_buffer_base) / sizeof(CVector3f);
  g_TempTriangleIndices[1] =
       (uint)((intptr_t)(this_ptr->triangle).vertices[1] - (intptr_t)vertex_buffer_base) / sizeof(CVector3f);
  g_TempTriangleIndices[2] =
       (uint)((intptr_t)(this_ptr->triangle).vertices[2] - (intptr_t)vertex_buffer_base) / sizeof(CVector3f);
  _fwrite(g_TempTriangleIndices,3,4,file_handle);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,file_handle);
  return;
}
