// Name: FUN_00450ac0
// Address: 00450ac0
// Address Range: [[00450ac0, 00450b54]]
// Convention: unknown
// Signature: void FUN_00450ac0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00450ac0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 / *(int *)(param_1 + 0x14c);
  iVar2 = (param_3 / *(int *)(param_1 + 0x14c)) * 0x140;
  FUN_00471200(*(int *)(&DAT_01c5faec + param_3 * 4) + param_2 * 4,
               *(int *)(param_1 + 0x144) * param_3 * 4 + *(int *)(param_1 + 0x158) + param_2 * 4,
               iVar1 + iVar2 + 0xb3fd08 + param_4,&DAT_0135ead0 + param_4 + iVar1 + iVar2);
  return;
}
