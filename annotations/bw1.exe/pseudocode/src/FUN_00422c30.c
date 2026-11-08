// Name: FUN_00422c30
// Address: 00422c30
// Address Range: [[00422c30, 00422c5e]]
// Convention: unknown
// Signature: undefined4 FUN_00422c30(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00422c30(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x314) != 3) {
    iVar1 = FUN_0040c550(param_2,"?CHero" + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(uint *)(param_1 + 0x314);
}
