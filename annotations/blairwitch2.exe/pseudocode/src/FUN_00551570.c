// Name: FUN_00551570
// Address: 00551570
// Address Range: [[00551570, 005515a6]]
// Convention: unknown
// Signature: void FUN_00551570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551570(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  FUN_005532f0();
  iVar1 = _DAT_026484b8;
  *(uint *)(_DAT_026484b8 * 4 + 0x2648458) = param_1;
  *(uint *)(iVar1 * 4 + 0x2648460) = param_2;
  *(uint *)(iVar1 * 4 + 0x2648468) = param_3;
  DAT_02649024 = DAT_02649024 | 4;
  FUN_00551440();
  return;
}
