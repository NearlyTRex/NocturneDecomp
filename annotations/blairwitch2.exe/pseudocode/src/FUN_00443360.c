// Name: FUN_00443360
// Address: 00443360
// Address Range: [[00443360, 004433fa]]
// Convention: unknown
// Signature: void FUN_00443360(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_00443360(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_3 / *(int *)(param_1 + 0x14c)) * 0x140;
  iVar1 = param_2 / *(int *)(param_1 + 0x14c);
  FUN_004719b6(*(int *)(&DAT_01c2a38c + param_3 * 4) + param_2 * 2,
               *(int *)(param_1 + 0x158) + *(int *)(param_1 + 0x144) * param_3 * 4 + param_2 * 4,
               iVar2 + 0xb07f58 + iVar1 + param_4,&DAT_01326d20 + param_4 + iVar1 + iVar2);
  return;
}
