// Name: FUN_005801e0
// Address: 005801e0
// Address Range: [[005801e0, 00580205]]
// Convention: unknown
// Signature: undefined4 FUN_005801e0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005801e0(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(0x01CB6900 + 0x220) == 0) {
    return 0;
  }
  uVar1 = FUN_00589e50(param_1,param_2);
  return uVar1;
}
