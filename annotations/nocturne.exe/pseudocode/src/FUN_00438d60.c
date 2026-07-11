// Name: FUN_00438d60
// Address: 00438d60
// Address Range: [[00438d60, 00438dbd]]
// Convention: unknown
// Signature: void FUN_00438d60(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00438d60(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (7 < iVar1) {
    FUN_00564ce5(param_2,(char)param_1[1]);
    iVar1 = *param_1 + -8;
    param_1[1] = (uint)param_1[1] >> 8;
    *param_1 = iVar1;
  }
  if (*param_1 < 1) {
    return;
  }
  FUN_00564ce5(param_2,(char)param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}
