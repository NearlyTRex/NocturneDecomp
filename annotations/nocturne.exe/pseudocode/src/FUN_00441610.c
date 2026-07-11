// Name: FUN_00441610
// Address: 00441610
// Address Range: [[00441610, 004418c6]]
// Convention: unknown
// Signature: void FUN_00441610(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441610(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *unaff_ESI;
  byte bVar6;
  int aiStackY_1018 [1017];
  int iStack_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar6 = 0;
  iVar5 = FUN_004613b0(DAT_005ae704);
  if (iVar5 == 0) {
    local_24 = *param_2 - *(int *)(param_1 + 0x16c);
    local_20 = param_2[1] - *(int *)(param_1 + 0x170);
    local_1c = param_2[2] - *(int *)(param_1 + 0x174);
    lVar2 = (longlong)*(int *)(param_1 + 0x180) * (longlong)local_24;
    lVar3 = (longlong)*(int *)(param_1 + 0x18c) * (longlong)local_20;
    lVar4 = (longlong)*(int *)(param_1 + 0x198) * (longlong)local_1c;
    local_10 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if (0 < local_10) {
      lVar2 = (longlong)*(int *)(param_1 + 0x178) * (longlong)local_24;
      lVar3 = (longlong)*(int *)(param_1 + 0x184) * (longlong)local_20;
      lVar4 = (longlong)*(int *)(param_1 + 400) * (longlong)local_1c;
      local_18 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((local_18 < local_10) && (-local_10 < local_18)) {
        lVar2 = (longlong)*(int *)(param_1 + 0x17c) * (longlong)local_24;
        lVar3 = (longlong)*(int *)(param_1 + 0x188) * (longlong)local_20;
        lVar4 = (longlong)*(int *)(param_1 + 0x194) * (longlong)local_1c;
        local_14 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                   ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
        if ((local_14 < local_10) && (-local_10 < local_14)) {
LAB_00441872:
          local_18 = *(int *)(param_1 + 0x1c8) +
                     (int)(((longlong)local_18 * (longlong)*(int *)(param_1 + 0x1c0)) /
                          (longlong)local_10);
          local_14 = *(int *)(param_1 + 0x1cc) +
                     (int)(((longlong)local_14 * (longlong)*(int *)(param_1 + 0x1c4)) /
                          (longlong)local_10);
          iStack_30 = local_18;
          *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          *unaff_ESI = iStack_30;
          unaff_ESI[(uint)bVar6 * -2 + 1] = *(int *)(&stack0xffffffd4 + (uint)bVar6 * -8);
          (unaff_ESI + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
               *(int *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          return;
        }
      }
    }
  }
  else {
    iVar1 = param_1 + iVar5 * 0xc;
    local_24 = *param_2 - *(int *)(iVar1 + 0x11ec);
    local_20 = param_2[1] - *(int *)(iVar1 + 0x11f0);
    iVar5 = iVar5 * 4 + param_1;
    local_1c = param_2[2] - *(int *)(iVar1 + 0x11f4);
    lVar2 = (longlong)*(int *)(iVar5 + 0x128c) * (longlong)local_24;
    lVar3 = (longlong)*(int *)(iVar5 + 0x12ec) * (longlong)local_20;
    lVar4 = (longlong)*(int *)(iVar5 + 0x134c) * (longlong)local_1c;
    local_10 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if (0 < local_10) {
      lVar2 = (longlong)*(int *)(iVar5 + 0x124c) * (longlong)local_24;
      lVar3 = (longlong)*(int *)(iVar5 + 0x12ac) * (longlong)local_20;
      lVar4 = (longlong)*(int *)(iVar5 + 0x130c) * (longlong)local_1c;
      local_18 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((local_18 < local_10) && (-local_10 < local_18)) {
        lVar2 = (longlong)*(int *)(iVar5 + 0x126c) * (longlong)local_24;
        lVar3 = (longlong)*(int *)(iVar5 + 0x12cc) * (longlong)local_20;
        lVar4 = (longlong)*(int *)(iVar5 + 0x132c) * (longlong)local_1c;
        local_14 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                   ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
        if ((local_14 < local_10) && (-local_10 < local_14)) goto LAB_00441872;
      }
    }
  }
  iStack_30 = _DAT_01410280;
  *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_01410284 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_01410288 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  *unaff_ESI = iStack_30;
  unaff_ESI[(uint)bVar6 * -2 + 1] = *(int *)(&stack0xffffffd4 + (uint)bVar6 * -8);
  (unaff_ESI + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       *(int *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return;
}
