// Name: FUN_00494d00
// Address: 00494d00
// Address Range: [[00494d00, 00494d2a]]
// Convention: unknown
// Signature: undefined4 FUN_00494d00(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00494d00(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00494e20(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(iVar1 * 4 + param_1 + 0x34c0);
  }
  return 0;
}
