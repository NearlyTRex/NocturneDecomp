// Name: FUN_0040e950
// Address: 0040e950
// Address Range: [[0040e950, 0040e97b]]
// Convention: unknown
// Signature: undefined4 FUN_0040e950(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0040e950(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x470) != 0) {
    iVar1 = FUN_0040c840(param_2,"CHero");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
