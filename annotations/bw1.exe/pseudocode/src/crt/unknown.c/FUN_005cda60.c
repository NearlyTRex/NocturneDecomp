// Name: crt_unknown.c_FUN_005cda60
// Address: 005cda60
// Address Range: [[005cda60, 005cdaac]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cda60(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005cda60(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005ce120(2);
  FUN_005ce150(*(uint *)(&DAT_00626b50 + param_1 * 4),uVar1);
  FUN_005ce150(&DAT_005fb299,uVar1);
  FUN_005ce150(param_2,uVar1);
  _fputc(10,uVar1);
  return;
}
