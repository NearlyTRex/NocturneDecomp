// Name: core_dtrace.cpp_FUN_004755c0
// Address: 004755c0
// Address Range: [[004755c0, 00475711]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004755c0(int param_1,int *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_004755c0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(param_1 + 0x2c);
  fVar3 = *(float *)(param_1 + 0x30);
  iStack_1c = 0;
  fVar4 = *(float *)(param_1 + 0x10);
  iStack_28 = 0;
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x18);
  do {
    iVar8 = 0;
    iStack_24 = iStack_28;
    iStack_20 = iStack_28;
    do {
      if ((*param_2 != 0) && (*(char *)(*param_2 + iStack_24) != '\0')) {
        iVar7 = 0;
        iStack_18 = iStack_20;
        do {
          if ((*(byte *)(*param_2 + iStack_18) & (&DAT_005fb0e8)[iVar7]) != 0) {
            fStack_34 = (float)iVar7 * *(float *)(param_1 + 0x28) * _DAT_005bca25 +
                        (float)param_3 * fVar1 + fVar4;
            iStack_14 = iStack_1c;
            fStack_30 = (float)iVar8 * *(float *)(param_1 + 0x2c) * _DAT_005bca25 +
                        (float)param_4 * fVar2 + fVar5;
            fStack_2c = (float)iStack_1c * *(float *)(param_1 + 0x30) * _DAT_005bca25 +
                        (float)param_5 * fVar3 + fVar6;
            core_dtrace_cpp_FUN_00475090(param_1,&fStack_34);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      iVar8 = iVar8 + 1;
      iStack_20 = iStack_20 + 1;
      iStack_24 = iStack_24 + 1;
    } while (iVar8 < 8);
    iStack_1c = iStack_1c + 1;
    iStack_28 = iStack_28 + 8;
  } while (iStack_1c < 8);
  return;
}
