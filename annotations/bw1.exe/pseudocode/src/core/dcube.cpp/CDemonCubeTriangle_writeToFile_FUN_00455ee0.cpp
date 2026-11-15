// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455ee0
// Address: 00455ee0
// Address Range: [[00455ee0, 00455f45]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455ee0(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455ee0(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  _DAT_0152c2cc = (uint)((int)(this_ptr->triangle).vertices[0] - (int)vertex_buffer_base) / 0xc;
  _DAT_0152c2d0 = (uint)((int)(this_ptr->triangle).vertices[1] - (int)vertex_buffer_base) / 0xc;
  _DAT_0152c2d4 = (uint)((int)(this_ptr->triangle).vertices[2] - (int)vertex_buffer_base) / 0xc;
  _fwrite(&DAT_0152c2cc,3,4,file_handle);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,file_handle);
  return;
}
