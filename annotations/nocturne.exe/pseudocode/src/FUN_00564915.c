// Name: FUN_00564915
// Address: 00564915
// Address Range: [[00564915, 0056494e]]
// Convention: unknown
// Signature: int FUN_00564915(int *param_1)

#include "nocturne.h"

int FUN_00564915(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1[1] + 0x10);
  pcVar2 = *(code **)(param_1[1] + 0xc);
  iVar3 = *param_1 * iVar1 + param_1[2];
  while (*param_1 != 0) {
    iVar3 = iVar3 - iVar1;
    *param_1 = *param_1 + -1;
    (*pcVar2)(iVar3,0);
  }
  return param_1[2];
}
