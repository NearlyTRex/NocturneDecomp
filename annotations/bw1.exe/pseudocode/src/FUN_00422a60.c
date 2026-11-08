// Name: FUN_00422a60
// Address: 00422a60
// Address Range: [[00422a60, 00422aa9]]
// Convention: unknown
// Signature: undefined4 FUN_00422a60(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00422a60(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x5f8) != 0) && (*(int *)(param_1 + 0x318) == 0)) {
    iVar1 = FUN_00468900(param_1 + 0x158);
    if (*(int *)(iVar1 + 0x358) != 0) {
      *(int *)(param_2 + 0x24) = param_1 + 0x158;
    }
    return 1;
  }
  return 0;
}
