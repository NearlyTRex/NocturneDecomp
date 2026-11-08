// Name: FUN_0041fed0
// Address: 0041fed0
// Address Range: [[0041fed0, 0041ff19]]
// Convention: unknown
// Signature: undefined4 FUN_0041fed0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0041fed0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x5f8) != 0) && (*(int *)(param_1 + 0x318) == 0)) {
    iVar1 = FUN_004625a0(param_1 + 0x158);
    if (*(int *)(iVar1 + 0x358) != 0) {
      *(int *)(param_2 + 0x24) = param_1 + 0x158;
    }
    return 1;
  }
  return 0;
}
