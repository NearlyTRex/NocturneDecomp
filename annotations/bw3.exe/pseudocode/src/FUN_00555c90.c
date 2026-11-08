// Name: FUN_00555c90
// Address: 00555c90
// Address Range: [[00555c90, 00555cec]]
// Convention: unknown
// Signature: void FUN_00555c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555c90(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb924) = param_1;
  *(uint *)(iVar1 + 0x2ceb928) = param_2;
  *(uint *)(iVar1 + 0x2ceb92c) = param_3;
  *(uint *)(iVar1 + 0x2ceb930) = param_4;
  *(uint *)(iVar1 + 0x2ceb934) = param_5;
  *(uint *)(iVar1 + 0x2ceb938) = param_6;
  *(uint *)(iVar1 + 0x2ceb93c) = 0;
  *(uint *)(iVar1 + 0x2ceb940) = 0;
  return;
}
