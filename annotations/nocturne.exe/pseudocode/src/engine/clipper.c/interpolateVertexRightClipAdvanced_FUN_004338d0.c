// Name: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
// Address: 004338d0
// Address Range: [[004338d0, 004339f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0(int *param_1,int *param_2,int *param_3)

#include "nocturne.h"

void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *param_1 + param_1[2];
  iVar4 = (uVar3 - *param_2) - param_2[2];
  if ((int)uVar3 < iVar4) {
    if (-iVar4 < (int)uVar3) {
      iVar4 = (int)(CONCAT44((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar4);
    }
    else {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  lVar1 = (longlong)(param_2[2] - param_1[2]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + param_1[2];
  param_3[2] = iVar2;
  *param_3 = iVar2;
  *param_3 = -iVar2;
  lVar1 = (longlong)(param_2[1] - param_1[1]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = param_1[1];
  param_3[4] = -1;
  param_3[1] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + iVar2;
  lVar1 = (longlong)(param_2[8] - param_1[8]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  param_3[8] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + param_1[8];
  lVar1 = (longlong)(param_2[9] - param_1[9]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  param_3[9] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + param_1[9];
  lVar1 = (longlong)(param_2[10] - param_1[10]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  param_3[10] = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + param_1[10];
  lVar1 = (longlong)(param_2[6] - param_1[6]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  param_3[6] = param_1[6] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3);
  lVar1 = (longlong)(param_2[7] - param_1[7]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  param_3[7] = param_1[7] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3);
  lVar1 = (longlong)(param_2[0xb] - param_1[0xb]) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  param_3[0xb] = param_1[0xb] + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3);
  return;
}
