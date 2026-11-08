// Name: FUN_00476510
// Address: 00476510
// Address Range: [[00476510, 004765ba]]
// Convention: unknown
// Signature: void FUN_00476510(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476510(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004f8c90(param_1 + 0x1fae8,"CGoggles",_DAT_01cd0e38);
  iVar2 = FUN_0040c600(uVar1);
  if (iVar2 != 0) {
    if ((*(int *)(0x01CCF390 + 0x244) == 0) && (*(int *)(iVar2 + 0x2d4) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(uint *)(iVar2 + 0x2d4) = uVar1;
  }
  if ((*(int *)(0x01CCF390 + 0x25c) == 0) && (*(int *)(0x01CCF390 + 0x244) == 0)) {
    if (*(int *)(0x01CCF390 + 0x244) == 0) {
      return;
    }
  }
  else {
    (*(code *)**(uint **)(0x01CCF390 + 0xb00))(0x01CCF390,0);
    if (*(int *)(0x01CCF390 + 0x244) == 0) {
      return;
    }
  }
  *(uint *)(param_1 + 0x1ff58) = 0;
  return;
}
