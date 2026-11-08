// Name: FUN_00440d30
// Address: 00440d30
// Address Range: [[00440d30, 00440d6b]]
// Convention: unknown
// Signature: int FUN_00440d30(int param_1,int param_2,int param_3)

#include "nocturne.h"

int FUN_00440d30(int param_1,int param_2,int param_3)

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
