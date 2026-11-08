// Name: FUN_00441fa0
// Address: 00441fa0
// Address Range: [[00441fa0, 00441fe6]]
// Convention: unknown
// Signature: void FUN_00441fa0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void FUN_00441fa0(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00440610(piVar2[0x65],param_2,param_3,param_4,param_5,param_6);
      piVar2 = piVar2 + 1;
    } while (iVar1 < *param_1);
  }
  return;
}
