// Name: FUN_0059daa0
// Address: 0059daa0
// Address Range: [[0059daa0, 0059dade]]
// Convention: unknown
// Signature: undefined4 FUN_0059daa0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0059daa0(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x834) != 0) {
    iVar1 = FUN_005b8c30(param_2,(*(int *)(param_1 + 0x840) + -1) * 0x19 + param_1);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
