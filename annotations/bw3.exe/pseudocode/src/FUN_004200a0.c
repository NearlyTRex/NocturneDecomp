// Name: FUN_004200a0
// Address: 004200a0
// Address Range: [[004200a0, 004200e2]]
// Convention: unknown
// Signature: undefined4 FUN_004200a0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004200a0(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x314) == 3) {
    iVar1 = FUN_0040c790(param_2,"CHero");
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0040c790(param_2,"?CHero" + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x314);
}
