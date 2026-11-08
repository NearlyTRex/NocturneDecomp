// Name: FUN_0046b370
// Address: 0046b370
// Address Range: [[0046b370, 0046b469]]
// Convention: unknown
// Signature: void FUN_0046b370(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b370(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  if ((param_1[3] == 0) || (iVar3 = FUN_00403920(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = 0;
      iVar2 = param_2;
      do {
        iVar4 = *(int *)(iVar2 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar1) = iVar4;
        iVar4 = *param_1 + iVar4 * 0x30;
        local_14 = local_14 & *(uint *)(iVar4 + 0x10);
        if ((*(byte *)(iVar4 + 0x13) & 0x80) != 0) {
          local_18 = 1;
        }
        iVar1 = iVar1 + 4;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((local_14 & 0x80000000) == 0) || ((local_14 & 0x1f) == 0)) {
      iVar3 = param_1[4];
      if ((iVar3 != 0) && (param_1[1] != 0)) {
        param_1[4] = local_18;
      }
      if (param_1[1] == 0) {
        _DAT_01c6e2b4 = 0x90;
        _DAT_01c6e2b8 = 6;
        _DAT_01c6b5cc = &LAB_0046fb72;
      }
      else {
        _DAT_01c6e2b4 = 0;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = &LAB_0046f9f4;
      }
      FUN_0046b160(param_1,*(uint *)(param_2 + 4),&DAT_01bdd818);
      param_1[4] = iVar3;
    }
  }
  return;
}
