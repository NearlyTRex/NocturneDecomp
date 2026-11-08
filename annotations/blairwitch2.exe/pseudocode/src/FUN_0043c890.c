// Name: FUN_0043c890
// Address: 0043c890
// Address Range: [[0043c890, 0043ca02]]
// Convention: unknown
// Signature: float * FUN_0043c890(int param_1,int param_2,int param_3)

#include "nocturne.h"

float * FUN_0043c890(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *unaff_ESI;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  uVar1 = (ulonglong)(param_2 * 0x10000 - *(int *)(param_1 + 0x1c8));
  iVar4 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)*(int *)(param_1 + 0x1c0));
  iVar5 = (int)(((longlong)(param_3 * 0x10000 - *(int *)(param_1 + 0x1cc)) * 0x10000) /
               (longlong)*(int *)(param_1 + 0x1c4));
  lVar2 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x1a8) +
          (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x19c) +
          (longlong)*(int *)(param_1 + 0x1b4) * 0x10000;
  fStack_2c = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x1ac) +
          (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x1a0) +
          (longlong)*(int *)(param_1 + 0x1b8) * 0x10000;
  fStack_28 = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x1b0) +
          (longlong)iVar4 * (longlong)*(int *)(param_1 + 0x1a4) +
          (longlong)*(int *)(param_1 + 0x1bc) * 0x10000;
  fStack_24 = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  fVar3 = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
  if (fVar3 <= 0.0) {
    fStack_28 = 0.0;
    fStack_2c = 0.0;
    fStack_24 = 0.0;
  }
  else {
    fVar3 = 1.0 / fVar3;
    fStack_2c = fStack_2c * fVar3;
    fStack_28 = fStack_28 * fVar3;
    fStack_24 = fStack_24 * fVar3;
  }
  *unaff_ESI = fStack_2c;
  unaff_ESI[1] = fStack_28;
  unaff_ESI[2] = fStack_24;
  return unaff_ESI;
}
