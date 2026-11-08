// Name: FUN_00481c00
// Address: 00481c00
// Address Range: [[00481c00, 00481ca9]]
// Convention: unknown
// Signature: void FUN_00481c00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481c00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_00403920(param_2 + 8), iVar3 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar1 = param_2;
      iVar2 = 0;
      do {
        *(uint *)(&DAT_01bc1240 + iVar2) = *(uint *)(iVar1 + 0x18);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0xc;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_2 + 4));
    }
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
    FUN_00481aa0(param_1,*(uint *)(param_2 + 4),&DAT_01bc1240);
  }
  return;
}
