// Name: FUN_004fc640
// Address: 004fc640
// Address Range: [[004fc640, 004fc6a1]]
// Convention: unknown
// Signature: void FUN_004fc640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc640(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1114);
  while (iVar1 != 0) {
    FUN_004fc570(param_1,*(uint *)(param_1 + 0x1114),1);
    iVar1 = *(int *)(param_1 + 0x1114);
  }
  FUN_004fc4c0(param_1);
  uVar2 = 0x01E661B8;
  _DAT_01cedee0 = 0;
  *(uint *)(param_1 + 0x1450) = 0xffffffff;
  FUN_00538160(uVar2);
  *(uint *)(param_1 + 0x112c) = 0;
  return;
}
