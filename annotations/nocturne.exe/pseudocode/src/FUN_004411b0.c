// Name: FUN_004411b0
// Address: 004411b0
// Address Range: [[004411b0, 004412b2]]
// Convention: unknown
// Signature: int * FUN_004411b0(int param_1,int *param_2)

#include "nocturne.h"

int * FUN_004411b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  
  iVar1 = param_2[2];
  iVar6 = (int)(((longlong)(*param_2 - *(int *)(param_1 + 0x1c8)) * (longlong)iVar1) /
               (longlong)*(int *)(param_1 + 0x1c0));
  iVar7 = (int)(((longlong)(param_2[1] - *(int *)(param_1 + 0x1cc)) * (longlong)iVar1) /
               (longlong)*(int *)(param_1 + 0x1c4));
  lVar3 = (longlong)iVar7 * (longlong)*(int *)(param_1 + 0x1a8) +
          (longlong)iVar6 * (longlong)*(int *)(param_1 + 0x19c) +
          (longlong)iVar1 * (longlong)*(int *)(param_1 + 0x1b4);
  lVar4 = (longlong)iVar7 * (longlong)*(int *)(param_1 + 0x1ac) +
          (longlong)iVar6 * (longlong)*(int *)(param_1 + 0x1a0) +
          (longlong)iVar1 * (longlong)*(int *)(param_1 + 0x1b8);
  iVar2 = *(int *)(param_1 + 0x170);
  lVar5 = (longlong)iVar7 * (longlong)*(int *)(param_1 + 0x1b0) +
          (longlong)iVar6 * (longlong)*(int *)(param_1 + 0x1a4) +
          (longlong)iVar1 * (longlong)*(int *)(param_1 + 0x1bc);
  iVar1 = *(int *)(param_1 + 0x174);
  *unaff_ESI = *(int *)(param_1 + 0x16c) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  unaff_ESI[1] = iVar2 + ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  unaff_ESI[2] = iVar1 + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  return unaff_ESI;
}
