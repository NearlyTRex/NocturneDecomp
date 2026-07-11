// Name: FUN_004410c0
// Address: 004410c0
// Address Range: [[004410c0, 0044114b]]
// Convention: unknown
// Signature: void FUN_004410c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_004410c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int iVar3;
  
  iVar2 = (*(int *)(param_1 + 0x144) + param_2) * 0x10000;
  param_3 = param_3 + *(int *)(param_1 + 0x148);
  iVar3 = param_3 * 0x10000;
  iVar1 = *(int *)(param_2 * 4 + *(int *)(&DAT_01bd4260 + param_3 * 4) +
                  *(int *)(param_1 + 0x144) * 4);
  if (iVar1 == 0) {
    *unaff_ESI = iVar2;
    unaff_ESI[1] = iVar3;
    unaff_ESI[2] = 0x7fffffff;
    return;
  }
  *unaff_ESI = iVar2;
  unaff_ESI[1] = iVar3;
  unaff_ESI[2] = (int)(0x7fffffff / (longlong)iVar1);
  return;
}
