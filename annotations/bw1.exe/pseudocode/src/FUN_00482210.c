// Name: FUN_00482210
// Address: 00482210
// Address Range: [[00482210, 00482381]]
// Convention: unknown
// Signature: void FUN_00482210(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482210(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if (param_1[7] == 0) {
    if ((param_1[3] == 0) || (iVar3 = FUN_00403920(param_2 + 8), iVar3 != 0)) {
      if (param_1[1] == 0) {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 4)) {
          iVar4 = 0;
          iVar2 = param_2;
          do {
            iVar1 = *(int *)(iVar2 + 0x18);
            if (param_1[8] == 0) {
              iVar5 = iVar1 * 0x30;
              *(uint *)(*param_1 + 0x18 + iVar5) = *(uint *)(iVar2 + 0x1c);
              *(uint *)(*param_1 + iVar5 + 0x1c) = *(uint *)(iVar2 + 0x20);
            }
            *(int *)(&DAT_01bc1240 + iVar4) = iVar1;
            iVar2 = iVar2 + 0xc;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < *(int *)(param_2 + 4));
        }
      }
      else {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 4)) {
          iVar4 = 0;
          iVar2 = param_2;
          do {
            *(uint *)(&DAT_01bc1240 + iVar4) = *(uint *)(iVar2 + 0x18);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0xc;
          } while (iVar3 < *(int *)(param_2 + 4));
        }
      }
      if (param_1[1] == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = &LAB_0057de01;
        }
        else {
          _DAT_01c4f02c = &LAB_0057e5e3;
        }
        _DAT_01c51d14 = param_3;
        _DAT_01c51d18 = 6;
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
  FUN_00484b20(param_1,param_2,param_3);
  return;
}
