// Name: FUN_00475ff0
// Address: 00475ff0
// Address Range: [[00475ff0, 00476140]]
// Convention: unknown
// Signature: void FUN_00475ff0(int param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475ff0(int param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  float local_20 [6];
  
  _DAT_01bd3c60 = 0;
  if ((0 < param_2) && (param_3 != (int *)0x0)) {
    _DAT_01bd3c5c = param_2;
    if (20000 < param_2) {
      _DAT_01d046a0 = "..\\core\\dtrace.cpp";
      _DAT_01d046a4 = 0x8c9;
      FUN_004e4500("CDemonRaytrace::setPVS - Too many drawn cubes in pvs!");
    }
    iVar11 = 0;
    if (0 < _DAT_01bd3c5c) {
      pfVar10 = (float *)&DAT_01be74e4;
      do {
        iVar5 = *param_3;
        *(int *)(iVar11 * 4 + 0x1bd3c64) = iVar5 * 0x34 + *(int *)(param_1 + 0x50);
        iVar6 = *(int *)(param_1 + 0x48);
        uVar8 = (longlong)iVar5 / (longlong)*(int *)(param_1 + 0x48);
        uVar9 = (int)uVar8 >> 0x1f;
        iVar7 = *(int *)(param_1 + 0x44);
        fVar1 = *(float *)(param_1 + 0x2c);
        fVar2 = *(float *)(param_1 + 0x14);
        fVar3 = *(float *)(param_1 + 0x30);
        fVar4 = *(float *)(param_1 + 0x18);
        if (pfVar10 != local_20) {
          *pfVar10 = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) /
                                 (longlong)*(int *)(param_1 + 0x44)) * *(float *)(param_1 + 0x28) +
                     *(float *)(param_1 + 0x10);
          pfVar10[1] = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) %
                                   (longlong)iVar7) * fVar1 + fVar2;
          pfVar10[2] = (float)(iVar5 % iVar6) * fVar3 + fVar4;
        }
        pfVar10 = pfVar10 + 3;
        iVar11 = iVar11 + 1;
        param_3 = param_3 + 1;
      } while (iVar11 < _DAT_01bd3c5c);
    }
    _DAT_01bd3c60 = 1;
  }
  return;
}
