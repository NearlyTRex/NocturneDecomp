// Name: FUN_004a3af0
// Address: 004a3af0
// Address Range: [[004a3af0, 004a3b50]]
// Convention: unknown
// Signature: int FUN_004a3af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a3af0(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_0049e1a0(_DAT_01cfb8b8 * 0x2c + 0x1cfb8bc,param_2,param_3,param_5,param_6);
    iVar2 = _DAT_01cfb8b8 + 1;
    if (499 < iVar2) {
      iVar2 = 0;
    }
    iVar1 = _DAT_01cfb8b8;
    _DAT_01cfb8b8 = iVar2;
  }
  return iVar1;
}
