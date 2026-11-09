// Name: core_mimic.cpp_FUN_004f1cf0
// Address: 004f1cf0
// Address Range: [[004f1cf0, 004f1d69]]
// Convention: unknown
// Signature: undefined4 core_mimic_cpp_FUN_004f1cf0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_mimic_cpp_FUN_004f1cf0(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  
  param_2[6] = *(int *)(param_1 + 0x24fc);
  param_2[7] = 0x3f800000;
  if (*param_2 == 1) {
    param_2[5] = -0x42333333;
    fVar1 = (float)_DAT_005dd9f9;
    param_2[6] = (int)((float)param_2[6] + _DAT_005dda01);
    param_2[7] = (int)((float)param_2[7] * fVar1);
  }
  else {
    param_2[5] = 0x40000000;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar2 + 0x24) == 0xc) {
    return 0;
  }
  return 2;
}
