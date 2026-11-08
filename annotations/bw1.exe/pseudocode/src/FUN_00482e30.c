// Name: FUN_00482e30
// Address: 00482e30
// Address Range: [[00482e30, 00482ef9]]
// Convention: unknown
// Signature: void FUN_00482e30(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482e30(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1[3] == 0) || (iVar3 = FUN_00403920(param_2 + 8), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & *(uint *)(*param_1 + 0x10 + *(int *)(iVar1 + 0x18) * 0x30);
        iVar1 = iVar1 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (param_1[1] == 0) {
        if (DAT_0061b4a0 == 0x20) {
          _DAT_01c4f02c = &LAB_0057de01;
        }
        else {
          _DAT_01c4f02c = &LAB_0057e5e3;
        }
        _DAT_01c51d18 = 6;
        _DAT_01c51d14 = 0x367;
      }
      else {
        _DAT_01c51d14 = 0;
        _DAT_01c51d18 = 0;
        _DAT_01c4f02c = &LAB_00486e26;
      }
      FUN_00481aa0(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
    }
  }
  return;
}
