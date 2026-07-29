// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00448f40
// Address: 00448f40
// Address Range: [[00448f40, 00448fa5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00448f40(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00448f40(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  _DAT_014b8a0c = (uint)((int)(this_ptr->triangle).vertices[0] - (int)vertex_buffer_base) / 0xc;
  _DAT_014b8a10 = (uint)((int)(this_ptr->triangle).vertices[1] - (int)vertex_buffer_base) / 0xc;
  _DAT_014b8a14 = (uint)((int)(this_ptr->triangle).vertices[2] - (int)vertex_buffer_base) / 0xc;
  _fwrite(&DAT_014b8a0c,3,4,file_handle);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,file_handle);
  return;
}
