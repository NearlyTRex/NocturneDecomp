// Name: FUN_00585190
// Address: 00585190
// Address Range: [[00585190, 005851c7]]
// Convention: unknown
// Signature: undefined4 FUN_00585190(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00585190(int param_1,uint param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xaa8) == 0) && (*(int *)(param_1 + 0x514) == 0)) &&
     (iVar1 = FUN_0040c840(param_2,"?CHero" + 1), iVar1 != 0)) {
    return 4;
  }
  return 0;
}
