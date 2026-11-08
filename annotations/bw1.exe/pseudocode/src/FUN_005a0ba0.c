// Name: FUN_005a0ba0
// Address: 005a0ba0
// Address Range: [[005a0ba0, 005a0c06]]
// Convention: unknown
// Signature: uint FUN_005a0ba0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005a0ba0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (param_2 < *(int *)(param_1 + 8)) {
    if ((param_2 < *(int *)(param_1 + 0x1c)) ||
       (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24) <= param_2)) {
      iVar1 = FUN_005a0ec0(param_1,param_2);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
    return (uint)*(byte *)((param_2 - *(int *)(param_1 + 0x1c)) + *(int *)(param_1 + 0x18));
  }
  return 0xffffffff;
}
