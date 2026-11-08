// Name: FUN_00407570
// Address: 00407570
// Address Range: [[00407570, 004076b9]]
// Convention: unknown
// Signature: void FUN_00407570(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407570(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00403920(param_1 + 8);
  if (iVar2 != 0) {
    if (_DAT_01c51d00 == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = FUN_0057fb03;
      }
      else {
        _DAT_01c4f02c = FUN_0057fd39;
      }
    }
    else if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = (code *)&LAB_0057de01;
    }
    else {
      _DAT_01c4f02c = (code *)&LAB_0057e5e3;
    }
    _DAT_01c51d14 = param_2;
    if ((param_2 & 0x10) != 0) {
      _DAT_01c4f024 =
           FUN_004ffd40(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                        *(uint *)(param_1 + 0x10));
    }
    _DAT_01c51d18 = param_3;
    if (param_3 == 0) {
      if ((param_2 & 0xc0) != 0) {
        _DAT_01c51d18 = 1;
      }
    }
    else {
      _DAT_01c51d18 = 5;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        iVar1 = *(int *)(iVar3 + 0x18);
        *(int *)((int)&DAT_00713a98 + iVar4) = iVar1;
        (&DAT_0062902c)[iVar1 * 0xc] = *(uint *)(iVar3 + 0x1c);
        iVar4 = iVar4 + 4;
        *(uint *)(&DAT_00629030 + iVar1 * 0x30) = *(uint *)(iVar3 + 0x20);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    if (_DAT_01c4f028 == 0) {
      FUN_0043de60(*(uint *)(param_1 + 4),&DAT_00713a98);
      return;
    }
    FUN_0043cbf0(*(uint *)(param_1 + 4),&DAT_00713a98);
  }
  return;
}
