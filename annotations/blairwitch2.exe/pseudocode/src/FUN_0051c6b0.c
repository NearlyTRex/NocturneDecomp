// Name: FUN_0051c6b0
// Address: 0051c6b0
// Address Range: [[0051c6b0, 0051c716]]
// Convention: unknown
// Signature: void FUN_0051c6b0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0051c6b0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      if (*(int *)(param_1 + 8) < 0x101) {
        iVar2 = 0x7fffffff;
      }
      else {
        iVar2 = (int)(0x7fffffff / (longlong)(*(int *)(param_1 + 8) >> 4));
      }
      lVar1 = (longlong)iVar2 * (longlong)(*(int *)(param_1 + 0x18) >> 8);
      *(uint *)(param_1 + 0x18) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      lVar1 = (longlong)iVar2 * (longlong)(*(int *)(param_1 + 0x1c) >> 8);
      *(uint *)(param_1 + 0x1c) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 8) = iVar2;
      param_1 = param_1 + 0x30;
    } while (iVar3 < param_2);
  }
  return;
}
