// Name: FUN_0046ba20
// Address: 0046ba20
// Address Range: [[0046ba20, 0046ba9a]]
// Convention: unknown
// Signature: float * FUN_0046ba20(int param_1,float *param_2,int param_3)

#include "nocturne.h"

float * FUN_0046ba20(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3 / (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48));
  iVar1 = *(int *)(param_1 + 0x48);
  param_3 = param_3 - *(int *)(param_1 + 0x44) * iVar2 * iVar1;
  iVar3 = param_3 / iVar1;
  *param_2 = (float)iVar2 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10);
  param_2[1] = *(float *)(param_1 + 0x14) + (float)iVar3 * *(float *)(param_1 + 0x2c);
  param_2[2] = (float)(param_3 - iVar1 * iVar3) * *(float *)(param_1 + 0x30) +
               *(float *)(param_1 + 0x18);
  return param_2;
}
