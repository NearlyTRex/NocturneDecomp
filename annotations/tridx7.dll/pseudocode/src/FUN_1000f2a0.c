// Name: FUN_1000f2a0
// Address: 1000f2a0
// Address Range: [[1000f2a0, 1000f2c9]]
// Convention: unknown
// Signature: void FUN_1000f2a0(char *param_1,int *param_2,int *param_3)

#include "nocturne.h"

void FUN_1000f2a0(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    iVar1 = *param_3 + -1;
    *param_3 = iVar1;
  }
  return;
}
