// Name: FUN_004828b0
// Address: 004828b0
// Address Range: [[004828b0, 004829a9]]
// Convention: unknown
// Signature: void FUN_004828b0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004828b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[3] == 0) || (iVar3 = FUN_00403920(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar4 = 0;
      iVar2 = param_2;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        if (param_1[8] == 0) {
          iVar5 = iVar1 * 0x30;
          *(uint *)(*param_1 + iVar5 + 0x18) = *(uint *)(iVar2 + 0x1c);
          *(uint *)(iVar5 + *param_1 + 0x1c) = *(uint *)(iVar2 + 0x20);
        }
        *(int *)(&DAT_01bc1240 + iVar4) = iVar1;
        iVar2 = iVar2 + 0xc;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (param_1[1] == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = &LAB_0057de01;
      }
      else {
        _DAT_01c4f02c = &LAB_0057e5e3;
      }
      _DAT_01c51d18 = 6;
      _DAT_01c51d14 = 0xc3;
    }
    else {
      _DAT_01c51d14 = 1;
      _DAT_01c51d18 = 0;
      _DAT_01c4f02c = &LAB_00486ed7;
    }
    FUN_00481aa0(param_1,*(uint *)(param_2 + 4),&DAT_01bc1240);
  }
  return;
}
