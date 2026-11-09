// Name: core_dcamera.cpp_FUN_0044a6a0
// Address: 0044a6a0
// Address Range: [[0044a6a0, 0044a7d7]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044a6a0(int param_1,int *param_2)

#include "nocturne.h"

void core_dcamera_cpp_FUN_0044a6a0(int param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *unaff_ESI;
  int *piVar5;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  piVar5 = &iStack_30;
  iStack_18 = *param_2 - *(int *)(param_1 + 0x16c);
  iStack_14 = param_2[1] - *(int *)(param_1 + 0x170);
  iStack_10 = param_2[2] - *(int *)(param_1 + 0x174);
  lVar2 = (longlong)*(int *)(param_1 + 0x180) * (longlong)iStack_18;
  lVar3 = (longlong)*(int *)(param_1 + 0x18c) * (longlong)iStack_14;
  lVar4 = (longlong)*(int *)(param_1 + 0x198) * (longlong)iStack_10;
  iStack_28 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if (0 < iStack_28) {
    lVar2 = (longlong)*(int *)(param_1 + 0x178) * (longlong)iStack_18;
    lVar3 = (longlong)*(int *)(param_1 + 0x184) * (longlong)iStack_14;
    lVar4 = (longlong)*(int *)(param_1 + 400) * (longlong)iStack_10;
    iStack_30 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if ((iStack_30 < iStack_28) && (-iStack_28 < iStack_30)) {
      lVar2 = (longlong)*(int *)(param_1 + 0x17c) * (longlong)iStack_18;
      lVar3 = (longlong)*(int *)(param_1 + 0x188) * (longlong)iStack_14;
      lVar4 = (longlong)*(int *)(param_1 + 0x194) * (longlong)iStack_10;
      iStack_2c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((iStack_2c < iStack_28) && (-iStack_28 < iStack_2c)) goto LAB_0044a721;
    }
  }
  piVar5 = (int *)&DAT_014a02f0;
LAB_0044a721:
  uStack_24 = *piVar5;
  uStack_20 = piVar5[1];
  uVar1 = piVar5[2];
  *unaff_ESI = *piVar5;
  unaff_ESI[1] = uStack_20;
  unaff_ESI[2] = uVar1;
  return;
}
