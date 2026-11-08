// Name: FUN_00491920
// Address: 00491920
// Address Range: [[00491920, 00491956]]
// Convention: unknown
// Signature: undefined4 FUN_00491920(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00491920(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_00491a90(param_1);
  iVar1 = FUN_00491a40(param_1,param_2);
  if (-1 < iVar1) {
    return *(uint *)(param_1 + 0x3acc + iVar1 * 0x120);
  }
  return 0;
}
