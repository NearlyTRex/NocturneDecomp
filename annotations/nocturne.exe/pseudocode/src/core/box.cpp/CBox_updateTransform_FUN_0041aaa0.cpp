// Name: core_box.cpp_CBox_updateTransform_FUN_0041aaa0
// Address: 0041aaa0
// Address Range: [[0041aaa0, 0041aca2]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_updateTransform_FUN_0041aaa0(float *param_1,float *param_2,float *param_3,float param_4)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_updateTransform_FUN_0041aaa0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  byte local_2c [12];
  float local_20;
  float local_1c;
  float local_18;
  float *local_14;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  if (param_1 + 3 != param_3) {
    param_1[3] = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(param_1 + 6,param_1 + 3);
  fVar2 = (float)0.03125;
  param_1[0x25] = param_4 * fVar2;
  fVar1 = (float)0.083333333333333301;
  param_1[0x26] =
       param_4 * fVar2 * fVar1 * (param_1[0x2b] * param_1[0x2b] + param_1[0x2a] * param_1[0x2a]);
  param_1[0x27] =
       param_1[0x25] * fVar1 * (param_1[0x2b] * param_1[0x2b] + param_1[0x29] * param_1[0x29]);
  param_1[0x28] =
       param_1[0x25] * fVar1 * (param_1[0x2a] * param_1[0x2a] + param_1[0x29] * param_1[0x29]);
  param_1[0x1b] = 0.0;
  param_1[0x1a] = param_1[0x1b];
  param_1[0x19] = param_1[0x1a];
  param_1[0x24] = 0.0;
  param_1[0x23] = param_1[0x24];
  param_1[0x22] = param_1[0x23];
  param_1[0x15] = 0.0;
  param_1[0x14] = param_1[0x15];
  param_1[0x13] = param_1[0x14];
  param_1[0x1e] = 0.0;
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1c] = param_1[0x1d];
  param_1[0x18] = 0.0;
  param_1[0x17] = param_1[0x18];
  param_1[0x16] = param_1[0x17];
  param_1[0x21] = 0.0;
  param_1[0x20] = param_1[0x21];
  param_1[0x1f] = param_1[0x20];
  param_1[0x12] = 0.0;
  param_1[0x11] = param_1[0x12];
  param_1[0x10] = param_1[0x11];
  iVar5 = 0;
  if (0 < (int)param_1[0x2c]) {
    local_14 = param_1 + 0x2d;
    pfVar4 = param_1 + 0x30;
    do {
      pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (param_1 + 6,local_2c,local_14 + iVar5 * 0xd);
      local_20 = *param_1 + *pfVar3;
      local_1c = param_1[1] + pfVar3[1];
      local_18 = param_1[2] + pfVar3[2];
      if (pfVar4 != &local_20) {
        *pfVar4 = local_20;
        pfVar4[1] = local_1c;
        pfVar4[2] = local_18;
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 0xd;
    } while (iVar5 < (int)param_1[0x2c]);
  }
  param_1[0x95] = 1.4013e-45;
  return;
}
