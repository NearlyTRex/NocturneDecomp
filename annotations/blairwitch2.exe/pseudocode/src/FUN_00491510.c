// Name: FUN_00491510
// Address: 00491510
// Address Range: [[00491510, 0049153a]]
// Convention: unknown
// Signature: undefined4 FUN_00491510(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00491510(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00491630(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(iVar1 * 4 + param_1 + 0x34c0);
  }
  return 0;
}
