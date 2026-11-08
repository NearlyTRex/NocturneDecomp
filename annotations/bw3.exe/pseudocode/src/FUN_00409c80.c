// Name: FUN_00409c80
// Address: 00409c80
// Address Range: [[00409c80, 00409cbd]]
// Convention: unknown
// Signature: void FUN_00409c80(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00409c80(int param_1,uint param_2)

{
  FUN_0040d1c0(param_2,param_1);
  FUN_0040d1a0(param_2,param_1 + 0x20);
  FUN_0040d1a0(param_2,param_1 + 0x30);
  FUN_0040d180(param_2,*(uint *)(param_1 + 0x70));
  return;
}
