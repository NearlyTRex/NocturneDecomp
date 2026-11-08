// Name: FUN_00519a00
// Address: 00519a00
// Address Range: [[00519a00, 00519a3b]]
// Convention: unknown
// Signature: undefined4 FUN_00519a00(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00519a00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x358) == 0) {
    return 1;
  }
  *(int *)(param_2 + 0x24) = param_1 + 0x2b4;
  return 1;
}
