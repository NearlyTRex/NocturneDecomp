// Name: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0
// Address: 0050d1c0
// Address Range: [[0050d1c0, 0050d27f]]
// Convention: __cdecl
// Signature: float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0(int param_1,float *param_2)

#include "nocturne.h"

float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x15aad4)) {
    local_18 = param_1 + 0x15aad8;
    iVar3 = param_1 + 0x15aaf0;
    do {
      pfVar1 = (float *)(iVar2 * 0x44 + local_18);
      local_24 = *param_2 - *pfVar1;
      local_20 = param_2[1] - pfVar1[1];
      local_1c = param_2[2] - pfVar1[2];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(iVar3,&local_30,&local_24);
      if (((ABS(local_30) <= pfVar1[3]) && (ABS(local_2c) <= pfVar1[4])) &&
         (ABS(local_28) <= pfVar1[5])) {
        return pfVar1[0x10];
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x44;
    } while (iVar2 < *(int *)(param_1 + 0x15aad4));
  }
  return *(float *)(param_1 + 0x15aad0);
}
