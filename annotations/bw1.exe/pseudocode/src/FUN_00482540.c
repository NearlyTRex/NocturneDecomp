// Name: FUN_00482540
// Address: 00482540
// Address Range: [[00482540, 0048267b]]
// Convention: unknown
// Signature: void FUN_00482540(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482540(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1[3] == 0) || (iVar4 = FUN_00403920(param_2 + 8), iVar4 != 0)) {
    if (param_1[1] == 0) {
      if (0 < *(int *)(param_2 + 4)) {
        iVar2 = 0;
        iVar4 = 0;
        iVar3 = param_2;
        do {
          iVar1 = *(int *)(iVar3 + 0x18);
          if (param_1[8] == 0) {
            iVar5 = iVar1 * 0x30;
            *(uint *)(*param_1 + iVar5 + 0x18) = *(uint *)(iVar3 + 0x1c);
            *(uint *)(*param_1 + iVar5 + 0x1c) = *(uint *)(iVar3 + 0x20);
          }
          *(int *)(&DAT_01bc1240 + iVar2) = iVar1;
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(param_2 + 4)) {
        iVar2 = 0;
        iVar3 = param_2;
        do {
          *(uint *)(&DAT_01bc1240 + iVar2) = *(uint *)(iVar3 + 0x18);
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0xc;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
    }
    if (param_1[1] == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = &LAB_0057de01;
      }
      else {
        _DAT_01c4f02c = &LAB_0057e5e3;
      }
      _DAT_01c51d18 = 6;
      _DAT_01c51d14 = 0x2cd;
    }
    else {
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = 0;
      _DAT_01c4f02c = &LAB_00486e26;
    }
    FUN_00481aa0(param_1,*(uint *)(param_2 + 4),&DAT_01bc1240);
  }
  return;
}
