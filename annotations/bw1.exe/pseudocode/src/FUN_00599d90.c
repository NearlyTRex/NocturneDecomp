// Name: FUN_00599d90
// Address: 00599d90
// Address Range: [[00599d90, 00599dbe]]
// Convention: unknown
// Signature: undefined4 FUN_00599d90(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00599d90(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2d8) == 0) &&
     (iVar1 = FUN_0040c550(param_2,"CHero"), iVar1 != 0)) {
    return 2;
  }
  return 0;
}
