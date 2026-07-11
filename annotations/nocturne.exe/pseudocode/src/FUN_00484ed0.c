// Name: FUN_00484ed0
// Address: 00484ed0
// Address Range: [[00484ed0, 00484eff]]
// Convention: unknown
// Signature: void FUN_00484ed0(int *param_1)

#include "nocturne.h"

void FUN_00484ed0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  *param_1 = iVar1;
  if (iVar1 < 0) {
    *param_1 = 0;
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  FUN_0048aae0(0x01C08D04,param_1 + 1);
  return;
}
