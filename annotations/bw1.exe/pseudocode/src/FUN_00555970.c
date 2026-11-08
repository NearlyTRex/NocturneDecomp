// Name: FUN_00555970
// Address: 00555970
// Address Range: [[00555970, 005559af]]
// Convention: unknown
// Signature: void FUN_00555970(int *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00555970(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (param_2 == piVar2[0x54]) {
        FUN_005558f0(param_1,iVar1,param_3);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x69;
    } while (iVar1 < *param_1);
  }
  return;
}
