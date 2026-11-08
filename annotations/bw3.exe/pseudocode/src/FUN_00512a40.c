// Name: FUN_00512a40
// Address: 00512a40
// Address Range: [[00512a40, 00512a7b]]
// Convention: unknown
// Signature: undefined4 FUN_00512a40(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00512a40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004625a0(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x358) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x158;
  return 1;
}
