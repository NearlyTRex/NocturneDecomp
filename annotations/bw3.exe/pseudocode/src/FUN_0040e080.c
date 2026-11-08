// Name: FUN_0040e080
// Address: 0040e080
// Address Range: [[0040e080, 0040e0b5]]
// Convention: unknown
// Signature: undefined4 FUN_0040e080(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0040e080(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0040c790(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x318) != 10) && (*(int *)(param_1 + 0x318) != 0xb)) {
      return 2;
    }
    uVar2 = 5;
  }
  return uVar2;
}
