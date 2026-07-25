// Name: FUN_004cdd30
// Address: 004cdd30
// Address Range: [[004cdd30, 004cde00]]
// Convention: unknown
// Signature: int FUN_004cdd30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004cdd30(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    _DAT_01cc4800 = "..\\engine\\matrix.c";
    _DAT_01cc4804 = 0x38e;
    FUN_004c8440("sqrt out of domain!");
  }
  iVar1 = param_1 / 200 + 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  iVar1 = (param_1 / iVar1 + iVar1) / 2;
  return (param_1 / iVar1 + iVar1) / 2;
}
