// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00444830
// Address: 00444830
// Address Range: [[00444830, 00444895]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00444830(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00444830(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)

{
  _DAT_01510dcc = (uint)((int)(this_ptr->triangle).vertices[0] - (int)vertex_buffer_base) / 0xc;
  _DAT_01510dd0 = (uint)((int)(this_ptr->triangle).vertices[1] - (int)vertex_buffer_base) / 0xc;
  _DAT_01510dd4 = (uint)((int)(this_ptr->triangle).vertices[2] - (int)vertex_buffer_base) / 0xc;
  _fwrite(&DAT_01510dcc,3,4,file_handle);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,file_handle);
  return;
}
