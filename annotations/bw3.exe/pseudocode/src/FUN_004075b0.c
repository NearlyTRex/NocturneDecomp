// Name: FUN_004075b0
// Address: 004075b0
// Address Range: [[004075b0, 004076f9]]
// Convention: unknown
// Signature: void FUN_004075b0(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004075b0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00403920(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c6e2a0 == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = FUN_00562c33;
      }
      else {
        _DAT_01c6b5cc = FUN_00562e69;
      }
    }
    else if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5cc = (code *)&LAB_00560f31;
    }
    else {
      _DAT_01c6b5cc = (code *)&LAB_00561713;
    }
    _DAT_01c6e2b4 = param_2;
    if ((param_2 & 0x10) != 0) {
      _DAT_01c6b5c4 =
           FUN_004e0e00(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                        *(uint *)(param_1 + 0x10));
    }
    _DAT_01c6e2b8 = param_3;
    if (param_3 == 0) {
      if ((param_2 & 0xc0) != 0) {
        _DAT_01c6e2b8 = 1;
      }
    }
    else {
      _DAT_01c6e2b8 = 5;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar3 = 0;
      iVar4 = param_1;
      do {
        iVar1 = *(int *)(iVar4 + 0x18);
        *(int *)((int)&DAT_00730418 + iVar3) = iVar1;
        (&DAT_0060b02c)[iVar1 * 0xc] = *(uint *)(iVar4 + 0x1c);
        iVar3 = iVar3 + 4;
        *(uint *)(&DAT_0060b030 + iVar1 * 0x30) = *(uint *)(iVar4 + 0x20);
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    if (_DAT_01c6b5c8 == 0) {
      FUN_0043bac0(*(uint *)(param_1 + 4),&DAT_00730418);
      return;
    }
    FUN_0043a840(*(uint *)(param_1 + 4),&DAT_00730418);
  }
  return;
}
