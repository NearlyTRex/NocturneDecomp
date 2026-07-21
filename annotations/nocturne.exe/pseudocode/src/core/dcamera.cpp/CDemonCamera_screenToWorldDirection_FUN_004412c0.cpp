// Name: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0
// Address: 004412c0
// Address Range: [[004412c0, 00441430]]
// Convention: unknown
// Signature: float * core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0(int param_1,float *param_2,int param_3,int param_4)

#include "nocturne.h"

float * core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0(int param_1,float *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (ulonglong)(param_3 * 0x10000 - *(int *)(param_1 + 0x1c8));
  iVar4 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)*(int *)(param_1 + 0x1c0));
  iVar5 = (int)(((longlong)(param_4 * 0x10000 - *(int *)(param_1 + 0x1cc)) * 0x10000) /
               (longlong)*(int *)(param_1 + 0x1c4));
  lVar2 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x1a8) +
          (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x19c) +
          (longlong)*(int *)(param_1 + 0x1b4) * 0x10000;
  *param_2 = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x1ac) +
          (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x1a0) +
          (longlong)*(int *)(param_1 + 0x1b8) * 0x10000;
  param_2[1] = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x1b0) +
          (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x1a4) +
          (longlong)*(int *)(param_1 + 0x1bc) * 0x10000;
  fVar3 = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  param_2[2] = fVar3;
  fVar3 = SQRT(fVar3 * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    *param_2 = *param_2 * fVar3;
    param_2[1] = param_2[1] * fVar3;
    param_2[2] = param_2[2] * fVar3;
    return param_2;
  }
  param_2[2] = 0.0;
  param_2[1] = param_2[2];
  *param_2 = param_2[1];
  return param_2;
}
