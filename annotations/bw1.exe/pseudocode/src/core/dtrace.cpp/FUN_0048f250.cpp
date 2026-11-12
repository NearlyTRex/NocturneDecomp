// Name: core_dtrace.cpp_FUN_0048f250
// Address: 0048f250
// Address Range: [[0048f250, 0048f2de]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0048f250(int param_1,int param_2)

#include "nocturne.h"

void core_dtrace_cpp_FUN_0048f250(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *unaff_ESI;
  
  iVar6 = param_2 / (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48));
  iVar5 = *(int *)(param_1 + 0x48);
  param_2 = param_2 - *(int *)(param_1 + 0x44) * iVar6 * iVar5;
  iVar7 = param_2 / iVar5;
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x18);
  *unaff_ESI = (float)iVar6 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10);
  unaff_ESI[1] = (float)iVar7 * fVar1 + fVar3;
  unaff_ESI[2] = (float)(param_2 - iVar5 * iVar7) * fVar2 + fVar4;
  return;
}
