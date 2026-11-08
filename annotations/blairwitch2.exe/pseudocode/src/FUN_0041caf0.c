// Name: FUN_0041caf0
// Address: 0041caf0
// Address Range: [[0041caf0, 0041cb39]]
// Convention: unknown
// Signature: undefined4 FUN_0041caf0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0041caf0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x754) != 0) && (*(int *)(param_1 + 0x474) == 0)) {
    iVar1 = FUN_0044fd20(param_1 + 0x2b4);
    if (*(int *)(iVar1 + 0x358) != 0) {
      *(int *)(param_2 + 0x24) = param_1 + 0x2b4;
    }
    return 1;
  }
  return 0;
}
