// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00444830
// Address: 00444830
// Address Range: [[00444830, 00444895]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00444830(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00444830(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  g_UINT_ARRAY_01510dcc[0] =
       (uint)((int)(this_ptr->triangle).vertices[0] - (int)vertex_buffer_base) / 0xc;
  g_UINT_ARRAY_01510dcc[1] =
       (uint)((int)(this_ptr->triangle).vertices[1] - (int)vertex_buffer_base) / 0xc;
  g_UINT_ARRAY_01510dcc[2] =
       (uint)((int)(this_ptr->triangle).vertices[2] - (int)vertex_buffer_base) / 0xc;
  _fwrite(g_UINT_ARRAY_01510dcc,3,4,file_handle);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,file_handle);
  return;
}
