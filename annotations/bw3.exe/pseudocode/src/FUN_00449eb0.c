// Name: FUN_00449eb0
// Address: 00449eb0
// Address Range: [[00449eb0, 00449f1b]]
// Convention: unknown
// Signature: void FUN_00449eb0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00449eb0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(&DAT_01c60dac + param_3 * 4) + param_2 * 4);
  if (iVar1 == 0) {
    *unaff_ESI = param_2 << 0x10;
    unaff_ESI[1] = param_3 << 0x10;
    unaff_ESI[2] = 0x7fffffff;
    return;
  }
  *unaff_ESI = param_2 << 0x10;
  unaff_ESI[1] = param_3 << 0x10;
  unaff_ESI[2] = (int)(0x7fffffff / (longlong)iVar1);
  return;
}
