// Name: FUN_00469d00
// Address: 00469d00
// Address Range: [[00469d00, 00469e71]]
// Convention: unknown
// Signature: void FUN_00469d00(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469d00(int *param_1,int param_2,int param_3)

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
    if ((param_1[3] == 0) || (iVar3 = FUN_00403970(param_2 + 8), iVar3 != 0)) {
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
            *(int *)(&DAT_01ba5c84 + iVar4) = iVar1;
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
            *(uint *)(&DAT_01ba5c84 + iVar4) = *(uint *)(iVar2 + 0x18);
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0xc;
          } while (iVar3 < *(int *)(param_2 + 4));
        }
      }
      if (param_1[1] == 0) {
        if (DAT_006141c0 == 0x20) {
          _DAT_01c35e6c = &LAB_0055b3b1;
        }
        else {
          _DAT_01c35e6c = &LAB_0055bb93;
        }
        _DAT_01c38b54 = param_3;
        _DAT_01c38b58 = 6;
      }
      else {
        _DAT_01c38b54 = 0;
        _DAT_01c38b58 = 0;
        _DAT_01c35e6c = &LAB_0046e936;
      }
      FUN_00469590(param_1,*(uint *)(param_2 + 4),&DAT_01ba5c84);
    }
    return;
  }
  FUN_0046c620(param_1,param_2,param_3);
  return;
}
