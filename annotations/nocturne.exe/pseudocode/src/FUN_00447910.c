// Name: FUN_00447910
// Address: 00447910
// Address Range: [[00447910, 00447a6f]]
// Convention: unknown
// Signature: void FUN_00447910(int param_1,int *param_2,int param_3)

#include "nocturne.h"

void FUN_00447910(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *unaff_ESI;
  
  iVar1 = param_2[2];
  iVar12 = (int)(((longlong)(*param_2 - *(int *)(param_1 + 0x1c8)) * (longlong)iVar1) /
                (longlong)*(int *)(param_1 + 0x1c0));
  iVar13 = (int)(((longlong)(param_2[1] - *(int *)(param_1 + 0x1cc)) * (longlong)iVar1) /
                (longlong)*(int *)(param_1 + 0x1c4));
  iVar14 = param_3 * 4 + param_1;
  lVar3 = (longlong)*(int *)(iVar14 + 0x136c) * (longlong)iVar12;
  lVar4 = (longlong)*(int *)(iVar14 + 0x13cc) * (longlong)iVar13;
  lVar5 = (longlong)*(int *)(iVar14 + 0x142c) * (longlong)iVar1;
  param_1 = param_1 + param_3 * 0xc;
  lVar6 = (longlong)*(int *)(iVar14 + 0x138c) * (longlong)iVar12;
  lVar7 = (longlong)*(int *)(iVar14 + 0x13ec) * (longlong)iVar13;
  lVar8 = (longlong)*(int *)(iVar14 + 0x144c) * (longlong)iVar1;
  iVar2 = *(int *)(param_1 + 0x11f0);
  lVar9 = (longlong)*(int *)(iVar14 + 0x13ac) * (longlong)iVar12;
  lVar10 = (longlong)*(int *)(iVar14 + 0x140c) * (longlong)iVar13;
  lVar11 = (longlong)*(int *)(iVar14 + 0x146c) * (longlong)iVar1;
  iVar1 = *(int *)(param_1 + 0x11f4);
  *unaff_ESI = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
               ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
               *(int *)(param_1 + 0x11ec);
  unaff_ESI[1] = iVar2 + ((uint)lVar8 >> 0x10 | (int)((ulonglong)lVar8 >> 0x20) << 0x10) +
                         ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                         ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
  unaff_ESI[2] = iVar1 + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10) +
                         ((uint)lVar9 >> 0x10 | (int)((ulonglong)lVar9 >> 0x20) << 0x10) +
                         ((uint)lVar10 >> 0x10 | (int)((ulonglong)lVar10 >> 0x20) << 0x10);
  return;
}
