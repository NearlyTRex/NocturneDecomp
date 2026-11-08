// Name: FUN_0049e560
// Address: 0049e560
// Address Range: [[0049e560, 0049e5ce]]
// Convention: unknown
// Signature: void FUN_0049e560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e560(uint param_1,uint param_2,uint param_3,uint param_4,float param_5,uint param_6)

{
  int iVar1;
  
  if (param_5 < (float)_DAT_005d5822) {
    param_5 = 0.0001;
  }
  iVar1 = FUN_0049e5d0(param_1,0,param_2,param_3,param_4,param_5);
  iVar1 = iVar1 * 0x3e4;
  *(uint *)(iVar1 + 0x1c97ae0) = param_6;
  FUN_00550da0(*(uint *)(iVar1 + 0x1c97ae0),iVar1 + 0x1c97880);
  return;
}
