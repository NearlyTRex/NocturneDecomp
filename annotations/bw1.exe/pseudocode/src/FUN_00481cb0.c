// Name: FUN_00481cb0
// Address: 00481cb0
// Address Range: [[00481cb0, 00481da9]]
// Convention: unknown
// Signature: void FUN_00481cb0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481cb0(int *param_1,int param_2)

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
        *(int *)(&DAT_01bc1240 + iVar1) = iVar4;
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
        _DAT_01c51d14 = 0x90;
        _DAT_01c51d18 = 6;
        _DAT_01c4f02c = &LAB_00486ff2;
      }
      else {
        _DAT_01c51d14 = 0;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = &LAB_00486e74;
      }
      FUN_00481aa0(param_1,*(uint *)(param_2 + 4),&DAT_01bc1240);
      param_1[4] = iVar3;
    }
  }
  return;
}
