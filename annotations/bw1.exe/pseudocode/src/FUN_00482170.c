// Name: FUN_00482170
// Address: 00482170
// Address Range: [[00482170, 00482208]]
// Convention: unknown
// Signature: void FUN_00482170(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482170(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -1) {
    param_3 = 0x2cd;
  }
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00403920(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = &LAB_0057de01;
      }
      else {
        _DAT_01c4f02c = &LAB_0057e5e3;
      }
      _DAT_01c51d18 = 6;
      _DAT_01c51d14 = param_3;
    }
    else {
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = 0;
      _DAT_01c4f02c = &LAB_00486e26;
    }
    FUN_00481aa0(param_1,*(uint *)(param_2 + 4),param_2 + 0x18);
  }
  return;
}
