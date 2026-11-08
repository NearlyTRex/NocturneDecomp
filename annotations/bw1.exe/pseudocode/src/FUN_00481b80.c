// Name: FUN_00481b80
// Address: 00481b80
// Address Range: [[00481b80, 00481bfa]]
// Convention: unknown
// Signature: void FUN_00481b80(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481b80(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_00403920(param_2 + 8), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) == 0) {
      _DAT_01c51d14 = 0xc0;
      _DAT_01c51d18 = 6;
      _DAT_01c4f02c = &LAB_00487148;
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
