// Name: FUN_004432c0
// Address: 004432c0
// Address Range: [[004432c0, 00443354]]
// Convention: unknown
// Signature: void FUN_004432c0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004432c0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 / *(int *)(param_1 + 0x14c);
  iVar2 = (param_3 / *(int *)(param_1 + 0x14c)) * 0x140;
  FUN_00470190(*(int *)(&DAT_01c2a38c + param_3 * 4) + param_2 * 4,
               *(int *)(param_1 + 0x144) * param_3 * 4 + *(int *)(param_1 + 0x158) + param_2 * 4,
               iVar1 + iVar2 + 0xb07f58 + param_4,&DAT_01326d20 + param_4 + iVar1 + iVar2);
  return;
}
