// Name: FUN_00450b60
// Address: 00450b60
// Address Range: [[00450b60, 00450bfa]]
// Convention: unknown
// Signature: void FUN_00450b60(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00450b60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_3 / *(int *)(param_1 + 0x14c)) * 0x140;
  iVar1 = param_2 / *(int *)(param_1 + 0x14c);
  FUN_00472a26(*(int *)(&DAT_01c5faec + param_3 * 4) + param_2 * 2,
               *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * param_3 * 4 + param_2 * 4,
               iVar2 + 0xb3fd08 + iVar1 + param_4,&DAT_0135ead0 + param_4 + iVar1 + iVar2);
  return;
}
