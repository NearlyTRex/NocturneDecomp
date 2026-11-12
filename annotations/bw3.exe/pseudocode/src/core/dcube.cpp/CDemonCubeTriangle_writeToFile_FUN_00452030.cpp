// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00452030
// Address: 00452030
// Address Range: [[00452030, 00452095]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00452030(CDemonCubeTriangle *this_ptr,_FILE *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00452030(CDemonCubeTriangle *this_ptr,_FILE *param_2,int param_3)

{
  _DAT_01548b7c = (uint)((int)(this_ptr->triangle).vertices[0] - param_3) / 0xc;
  _DAT_01548b80 = (uint)((int)(this_ptr->triangle).vertices[1] - param_3) / 0xc;
  _DAT_01548b84 = (uint)((int)(this_ptr->triangle).vertices[2] - param_3) / 0xc;
  _fwrite(&DAT_01548b7c,3,4,param_2);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,param_2);
  return;
}
