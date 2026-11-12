// Name: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00444830
// Address: 00444830
// Address Range: [[00444830, 00444895]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00444830(CDemonCubeTriangle *this_ptr,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00444830(CDemonCubeTriangle *this_ptr,uint param_2,int param_3)

{
  _DAT_01510dcc = (uint)((int)(this_ptr->triangle).vertices[0] - param_3) / 0xc;
  _DAT_01510dd0 = (uint)((int)(this_ptr->triangle).vertices[1] - param_3) / 0xc;
  _DAT_01510dd4 = (uint)((int)(this_ptr->triangle).vertices[2] - param_3) / 0xc;
  _fwrite(&DAT_01510dcc,3,4,param_2);
  _fwrite(&(this_ptr->triangle).normal,0x14,1,param_2);
  return;
}
