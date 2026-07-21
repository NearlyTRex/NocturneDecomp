// Name: core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
// Address: 00513d80
// Address Range: [[00513d80, 00513e16]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(int param_1,int param_2,float *param_3)

#include "nocturne.h"

uint __cdecl core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar1 = (float *)(param_1 + 0x15b02c + param_2 * 0x44);
  local_14 = *param_3 - *pfVar1;
  local_10 = param_3[1] - pfVar1[1];
  local_c = param_3[2] - pfVar1[2];
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(pfVar1 + 6,&local_20,&local_14);
  if (((ABS(local_20) <= pfVar1[3]) && (ABS(local_1c) <= pfVar1[4])) && (ABS(local_18) <= pfVar1[5])
     ) {
    return 1;
  }
  return 0;
}
