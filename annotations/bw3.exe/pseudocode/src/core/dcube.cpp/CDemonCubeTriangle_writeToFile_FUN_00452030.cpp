// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00452030
// Address: 00452030
// Address Range: [[00452030, 00452095]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00452030(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00452030(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  _DAT_01548b7c = (uint)((int)(this_ptr->triangle).vertices[0] - (int)vertex_buffer_base) / 0xc;
  _DAT_01548b80 = (uint)((int)(this_ptr->triangle).vertices[1] - (int)vertex_buffer_base) / 0xc;
  _DAT_01548b84 = (uint)((int)(this_ptr->triangle).vertices[2] - (int)vertex_buffer_base) / 0xc;
  _fwrite(&DAT_01548b7c,3,4,file_handle);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,file_handle);
  return;
}
