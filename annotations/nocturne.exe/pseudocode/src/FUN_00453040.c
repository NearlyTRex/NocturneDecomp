// Name: FUN_00453040
// Address: 00453040
// Address Range: [[00453040, 0045307e]]
// Convention: unknown
// Signature: void FUN_00453040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00453040(int param_1,uint param_2,uint param_3,uint param_4)

{
  if (*(int *)(param_1 + 0x110) < 1) {
    return;
  }
  FUN_004530c0(param_1,param_2,param_3);
  FUN_00453170(param_1,param_3,param_4);
  return;
}
