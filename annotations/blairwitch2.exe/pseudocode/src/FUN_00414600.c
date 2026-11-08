// Name: FUN_00414600
// Address: 00414600
// Address Range: [[00414600, 0041461e]]
// Convention: unknown
// Signature: undefined4 FUN_00414600(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00414600(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x10b94) != 0) {
    return 0;
  }
  uVar1 = FUN_00427680(param_1,param_2);
  return uVar1;
}
