// Name: FUN_00550d30
// Address: 00550d30
// Address Range: [[00550d30, 00550d95]]
// Convention: unknown
// Signature: undefined4 FUN_00550d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

uint FUN_00550d30(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  
  iVar1 = FUN_0054d3a0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x1c) = 0;
  *(uint *)(iVar1 + 4) = param_2;
  *(uint *)(iVar1 + 8) = param_3;
  *(uint *)(iVar1 + 0xc) = param_4;
  *(uint *)(iVar1 + 0x10) = param_5;
  *(uint *)(iVar1 + 0x14) = param_6;
  *(uint *)(iVar1 + 0x18) = param_7;
  *(uint *)(iVar1 + 0x20) = 0;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 2;
  FUN_00551440();
  return 1;
}
