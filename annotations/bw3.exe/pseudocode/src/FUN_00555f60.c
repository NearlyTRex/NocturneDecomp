// Name: FUN_00555f60
// Address: 00555f60
// Address Range: [[00555f60, 00555f90]]
// Convention: unknown
// Signature: void FUN_00555f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555f60(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb970) = param_1;
  *(uint *)(iVar1 + 0x2ceb974) = param_2;
  *(uint *)(iVar1 + 0x2ceb978) = param_3;
  return;
}
