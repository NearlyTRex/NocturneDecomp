// Name: FUN_004430d0
// Address: 004430d0
// Address Range: [[004430d0, 0044310b]]
// Convention: unknown
// Signature: int FUN_004430d0(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004430d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 < 0) {
    return param_2;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8 + param_3 * 0x10);
  while( true ) {
    if (iVar1 < 0) {
      return -1;
    }
    piVar2 = (int *)(iVar1 * 0x10 + *(int *)(param_1 + 0x10));
    if (param_2 == *piVar2) break;
    iVar1 = piVar2[3];
  }
  return iVar1;
}
