// Name: FUN_004e7270
// Address: 004e7270
// Address Range: [[004e7270, 004e729e]]
// Convention: unknown
// Signature: undefined4 FUN_004e7270(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004e7270(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5a4) == 0) {
    uVar1 = 3;
  }
  else {
    iVar2 = FUN_0040c790(param_2,"CHero");
    uVar1 = 0;
    if (iVar2 != 0) {
      return 2;
    }
  }
  return uVar1;
}
