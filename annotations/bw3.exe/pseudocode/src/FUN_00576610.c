// Name: FUN_00576610
// Address: 00576610
// Address Range: [[00576610, 00576647]]
// Convention: unknown
// Signature: undefined4 FUN_00576610(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00576610(int param_1,uint param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x7f0) == 0) && (*(int *)(param_1 + 0x3b8) == 0)) &&
     (iVar1 = FUN_0040c790(param_2,"?CHero" + 1), iVar1 != 0)) {
    return 4;
  }
  return 0;
}
