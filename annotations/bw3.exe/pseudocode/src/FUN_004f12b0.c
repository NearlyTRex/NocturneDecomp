// Name: FUN_004f12b0
// Address: 004f12b0
// Address Range: [[004f12b0, 004f1398]]
// Convention: unknown
// Signature: void FUN_004f12b0(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f12b0(uint param_1,uint param_2,ushort *param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  if (param_5 != 0) {
    FUN_004f0da0(param_2);
    iVar4 = 0;
    if (0 < param_4) {
      do {
        puVar1 = param_3 + 2;
        puVar2 = param_3 + 1;
        uVar3 = *param_3;
        param_3 = param_3 + 3;
        iVar4 = iVar4 + 1;
        FUN_004f1020(_DAT_01d76f60 + (uint)uVar3 * 0x40,(uint)*puVar2 * 0x40 + _DAT_01d76f60,
                     (uint)*puVar1 * 0x40 + _DAT_01d76f60);
      } while (iVar4 < param_4);
    }
    FUN_004f0f20();
    return;
  }
  if ((_DAT_02cf60cc != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60cc)(_DAT_01d76f60,param_2,param_3,param_4,_DAT_01c6e2b4);
    return;
  }
  iVar4 = 0;
  if (0 < param_4) {
    do {
      puVar1 = param_3 + 2;
      puVar2 = param_3 + 1;
      uVar3 = *param_3;
      param_3 = param_3 + 3;
      iVar4 = iVar4 + 1;
      FUN_004f1830(_DAT_01d76f60 + (uint)uVar3 * 0x40,(uint)*puVar2 * 0x40 + _DAT_01d76f60,
                   (uint)*puVar1 * 0x40 + _DAT_01d76f60);
    } while (iVar4 < param_4);
  }
  return;
}
