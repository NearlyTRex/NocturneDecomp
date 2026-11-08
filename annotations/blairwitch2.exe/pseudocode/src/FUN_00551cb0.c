// Name: FUN_00551cb0
// Address: 00551cb0
// Address Range: [[00551cb0, 00551d71]]
// Convention: unknown
// Signature: void FUN_00551cb0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

#include "nocturne.h"

void FUN_00551cb0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = 0;
  iVar5 = 0;
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (0 < *(int *)(iVar1 + 0x2641a88)) {
      if (((*(int *)(&DAT_02641a78 + iVar1) == 0) && (*(int *)(iVar1 + 0x2641a74) == 0)) &&
         (*(int *)(iVar1 + 0x2641a80) == 0)) {
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + *(int *)(iVar1 + 0x2641a8c);
      }
      else {
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + *(int *)(iVar1 + 0x2641a8c);
      }
    }
    iVar1 = iVar1 + 0x1ac;
  } while (iVar1 != 0x6b00);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar3;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar5;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0x40 - (iVar3 + iVar2);
  }
  if ((param_6 != (int *)0x0) &&
     (iVar1 = 0x00400000 - (iVar4 + iVar5), *param_6 = iVar1, iVar1 < 0)) {
    *param_6 = 0;
    return;
  }
  return;
}
