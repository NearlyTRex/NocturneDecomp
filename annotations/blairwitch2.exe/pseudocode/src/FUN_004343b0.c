// Name: FUN_004343b0
// Address: 004343b0
// Address Range: [[004343b0, 004343eb]]
// Convention: unknown
// Signature: int FUN_004343b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_004343b0(int param_1,int param_2,int param_3)

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
