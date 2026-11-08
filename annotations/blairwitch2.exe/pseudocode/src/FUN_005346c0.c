// Name: FUN_005346c0
// Address: 005346c0
// Address Range: [[005346c0, 005346ff]]
// Convention: unknown
// Signature: void FUN_005346c0(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005346c0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (param_2 == piVar2[0x54]) {
        FUN_00534640(param_1,iVar1,param_3);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < *param_1);
  }
  return;
}
