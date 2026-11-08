// Name: FUN_00454a10
// Address: 00454a10
// Address Range: [[00454a10, 00454aaa]]
// Convention: unknown
// Signature: void FUN_00454a10(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00454a10(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_3 / *(int *)(param_1 + 0x14c)) * 0x140;
  iVar1 = param_2 / *(int *)(param_1 + 0x14c);
  FUN_00489ea6(*(int *)(&DAT_01c4354c + param_3 * 4) + param_2 * 2,
               *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * param_3 * 4 + param_2 * 4,
               iVar2 + 0xb23458 + iVar1 + param_4,&DAT_01342220 + param_4 + iVar1 + iVar2);
  return;
}
