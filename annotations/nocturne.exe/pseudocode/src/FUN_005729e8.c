// Name: FUN_005729e8
// Address: 005729e8
// Address Range: [[005729e8, 00572a34]]
// Convention: unknown
// Signature: void FUN_005729e8(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005729e8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0056fdf0(2);
  FUN_00573660(*(uint *)(&DAT_005c2148 + param_1 * 4),uVar1);
  FUN_00573660(&DAT_00599281,uVar1);
  FUN_00573660(param_2,uVar1);
  _fputc(10,uVar1);
  return;
}
