// Name: FUN_0059bad0
// Address: 0059bad0
// Address Range: [[0059bad0, 0059bb35]]
// Convention: unknown
// Signature: undefined4 FUN_0059bad0(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_0059bad0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      if (*(int *)(iVar1 + 0x74) == 1) {
        if ((((*(int *)(iVar1 + 100) <= param_2) &&
             (param_2 <= *(int *)(iVar1 + 0x6c) + *(int *)(iVar1 + 100))) &&
            (*(int *)(iVar1 + 0x68) <= param_3)) &&
           (param_3 <= *(int *)(iVar1 + 0x70) + *(int *)(iVar1 + 0x68))) {
          *(int *)(param_1 + 0x20) = iVar2;
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  return 0;
}
