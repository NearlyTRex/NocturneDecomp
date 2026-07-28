// Name: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0
// Address: 004418d0
// Address Range: [[004418d0, 00441a07]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0(int param_1,int *param_2)

#include "nocturne.h"

void core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0(int param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *unaff_ESI;
  int *piVar5;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint uStack_20;
  int local_18;
  int local_14;
  int local_10;
  
  piVar5 = &local_30;
  local_18 = *param_2 - *(int *)(param_1 + 0x16c);
  local_14 = param_2[1] - *(int *)(param_1 + 0x170);
  local_10 = param_2[2] - *(int *)(param_1 + 0x174);
  lVar2 = (longlong)*(int *)(param_1 + 0x180) * (longlong)local_18;
  lVar3 = (longlong)*(int *)(param_1 + 0x18c) * (longlong)local_14;
  lVar4 = (longlong)*(int *)(param_1 + 0x198) * (longlong)local_10;
  local_28 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if (0 < local_28) {
    lVar2 = (longlong)*(int *)(param_1 + 0x178) * (longlong)local_18;
    lVar3 = (longlong)*(int *)(param_1 + 0x184) * (longlong)local_14;
    lVar4 = (longlong)*(int *)(param_1 + 400) * (longlong)local_10;
    local_30 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if ((local_30 < local_28) && (-local_28 < local_30)) {
      lVar2 = (longlong)*(int *)(param_1 + 0x17c) * (longlong)local_18;
      lVar3 = (longlong)*(int *)(param_1 + 0x188) * (longlong)local_14;
      lVar4 = (longlong)*(int *)(param_1 + 0x194) * (longlong)local_10;
      local_2c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((local_2c < local_28) && (-local_28 < local_2c)) goto LAB_00441951;
    }
  }
  piVar5 = (int *)&DAT_01410280;
LAB_00441951:
  local_24 = *piVar5;
  uStack_20 = piVar5[1];
  uVar1 = piVar5[2];
  *unaff_ESI = *piVar5;
  unaff_ESI[1] = uStack_20;
  unaff_ESI[2] = uVar1;
  return;
}
