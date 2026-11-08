// Name: FUN_00404fc0
// Address: 00404fc0
// Address Range: [[00404fc0, 004050b3]]
// Convention: unknown
// Signature: int FUN_00404fc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
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
    _DAT_01c51d14 = 1;
    _DAT_01c51d18 = 0;
    FUN_004039d0(param_1);
    iVar5 = 0;
    iVar2 = 0;
    piVar3 = (int *)(param_1 + 0x18);
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 4) * 3; iVar4 = iVar4 + 3) {
      iVar1 = *piVar3;
      *(int *)((int)&DAT_00713a98 + iVar2) = iVar1;
      (&DAT_0062902c)[iVar1 * 0xc] = piVar3[1];
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      *(int *)(&DAT_00629030 + *piVar3 * 0x30) = piVar3[2];
      piVar3 = piVar3 + 3;
    }
    FUN_0043cbf0(iVar5,&DAT_00713a98);
  }
  return param_1 + 0x18 + *(int *)(param_1 + 4) * 0xc;
}
