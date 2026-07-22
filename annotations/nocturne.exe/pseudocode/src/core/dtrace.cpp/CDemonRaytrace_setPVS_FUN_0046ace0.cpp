// Name: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0
// Address: 0046ace0
// Address Range: [[0046ace0, 0046ae30]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0(int param_1,int param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0(int param_1,int param_2,int *param_3)

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
  
  _DAT_01b7b748 = 0;
  if ((0 < param_2) && (param_3 != (int *)0x0)) {
    _DAT_01b7b744 = param_2;
    if (20000 < param_2) {
      _DAT_01cc4800 = "..\\core\\dtrace.cpp";
      _DAT_01cc4804 = 0x8c9;
      FUN_004c8440("CDemonRaytrace::setPVS - Too many drawn cubes in pvs!");
    }
    iVar11 = 0;
    if (0 < _DAT_01b7b744) {
      pfVar10 = (float *)&DAT_01b8efcc;
      do {
        iVar5 = *param_3;
        *(int *)(iVar11 * 4 + 0x1b7b74c) = iVar5 * 0x34 + *(int *)(param_1 + 0x50);
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
      } while (iVar11 < _DAT_01b7b744);
    }
    _DAT_01b7b748 = 1;
  }
  return;
}
