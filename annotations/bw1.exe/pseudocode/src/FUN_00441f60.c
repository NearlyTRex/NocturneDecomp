// Name: FUN_00441f60
// Address: 00441f60
// Address Range: [[00441f60, 00441f9e]]
// Convention: unknown
// Signature: void FUN_00441f60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00441f60(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      FUN_0043eea0(piVar1[0x65],param_2,param_3,param_4);
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}
