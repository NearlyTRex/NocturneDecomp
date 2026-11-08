// Name: FUN_004a2b30
// Address: 004a2b30
// Address Range: [[004a2b30, 004a2bac]]
// Convention: unknown
// Signature: void FUN_004a2b30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2b30(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  iVar1 = FUN_005b8be2(0x120);
  puVar2 = (uint *)0x0;
  if (iVar1 != 0) {
    puVar2 = (uint *)FUN_004a1f80(iVar1,param_1 + 0x48,*(uint *)(param_1 + 0x2c));
  }
  if (puVar2 == (uint *)0x0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x538;
    FUN_004e4500("Out of memory");
  }
  *puVar2 = *(uint *)(param_1 + 0x40);
  puVar2[1] = *(uint *)(param_1 + 0x44);
  puVar2[6] = *(uint *)(param_1 + 0x34);
  FUN_004a2bb0(param_1,puVar2);
  *(byte *)(param_1 + 0x48) = 0;
  return;
}
