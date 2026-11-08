// Name: FUN_00464aa0
// Address: 00464aa0
// Address Range: [[00464aa0, 00464abe]]
// Convention: unknown
// Signature: undefined4 FUN_00464aa0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00464aa0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x10b84) != 0) {
    return 0;
  }
  uVar1 = FUN_00427680(param_1,param_2);
  return uVar1;
}
