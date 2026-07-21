// Name: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0
// Address: 00448ec0
// Address Range: [[00448ec0, 00448f3d]]
// Convention: unknown
// Signature: void core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0(int *param_1,uint param_2,int param_3)

{
  _fread(&DAT_014b8a0c,3,4,param_2);
  *param_1 = param_3 + _DAT_014b8a0c * 0xc;
  param_1[1] = param_3 + _DAT_014b8a10 * 0xc;
  param_1[2] = param_3 + _DAT_014b8a14 * 0xc;
  _fread(param_1 + 3,0x14,1,param_2);
  return;
}
