// Name: FUN_004e8410
// Address: 004e8410
// Address Range: [[004e8410, 004e8576]]
// Convention: unknown
// Signature: undefined4 FUN_004e8410(int param_1,int param_2)

#include "nocturne.h"

uint FUN_004e8410(int param_1,int param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x108) = 0;
  *(uint *)(param_1 + 0x10c) = 0;
  FUN_0056582c(*(uint *)(param_1 + 0x5320),*(uint *)(param_1 + 0x5340),0);
  *(uint *)(param_1 + 0x5330) = 0;
  *(uint *)(param_1 + 0x5334) = 0;
  *(uint *)(param_1 + 0x532c) = 0;
  *(uint *)(param_1 + 0x5338) = 0;
  *(uint *)(param_1 + 0x533c) = 0;
  *(uint *)(param_1 + 0x5348) = *(uint *)(param_1 + 0x5344);
  *(uint *)(param_1 + 0x534c) = 0;
  *(uint *)(param_1 + 0x1310) = 0;
  *(uint *)(param_1 + 0x1314) = 0;
  *(uint *)(param_1 + 0x1318) = 0;
  *(uint *)(param_1 + 0x531c) = 8;
  *(uint *)(param_1 + 0x7350) = 0x40;
  *(uint *)(param_1 + 0x7354) = 0x40;
  FUN_00563cc0(param_1 + 0x5350,0,0x2000);
  FUN_00563cc0(param_1 + 0x7430,0,0x1200);
  for (; 0x8ff < param_2; param_2 = param_2 - iVar1) {
    iVar1 = FUN_004e85b0(param_1,0);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (0 < param_2) {
    while( true ) {
      iVar1 = FUN_004e85b0(param_1,param_1 + 0x110);
      *(int *)(param_1 + 0x108) = iVar1;
      if (iVar1 < 1) {
        return 0;
      }
      if (param_2 < iVar1) break;
      *(uint *)(param_1 + 0x108) = 0;
      param_2 = param_2 - iVar1;
      if (param_2 < 1) {
        return 1;
      }
    }
    *(int *)(param_1 + 0x108) = iVar1 - param_2;
    *(int *)(param_1 + 0x10c) = param_1 + 0x110 + param_2 * *(int *)(param_1 + 0x104) * 2;
    return 1;
  }
  return 1;
}
