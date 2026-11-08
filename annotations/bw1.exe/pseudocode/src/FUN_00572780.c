// Name: FUN_00572780
// Address: 00572780
// Address Range: [[00572780, 005727dc]]
// Convention: unknown
// Signature: void FUN_00572780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572780(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78cf4) = param_1;
  *(uint *)(iVar1 + 0x2c78cf8) = param_2;
  *(uint *)(iVar1 + 0x2c78cfc) = param_3;
  *(uint *)(iVar1 + 0x2c78d00) = param_4;
  *(uint *)(iVar1 + 0x2c78d04) = param_5;
  *(uint *)(iVar1 + 0x2c78d08) = param_6;
  *(uint *)(iVar1 + 0x2c78d0c) = 0;
  *(uint *)(iVar1 + 0x2c78d10) = 0;
  return;
}
