// Name: FUN_00550110
// Address: 00550110
// Address Range: [[00550110, 0055016c]]
// Convention: unknown
// Signature: void FUN_00550110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550110(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641624) = param_1;
  *(uint *)(iVar1 + 0x2641628) = param_2;
  *(uint *)(iVar1 + 0x264162c) = param_3;
  *(uint *)(iVar1 + 0x2641630) = param_4;
  *(uint *)(iVar1 + 0x2641634) = param_5;
  *(uint *)(iVar1 + 0x2641638) = param_6;
  *(uint *)(iVar1 + 0x264163c) = 0;
  *(uint *)(iVar1 + 0x2641640) = 0;
  return;
}
