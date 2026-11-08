// Name: FUN_004f3190
// Address: 004f3190
// Address Range: [[004f3190, 004f31f5]]
// Convention: unknown
// Signature: void FUN_004f3190(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f3190(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d0991c = _DAT_01d0991c + 1;
  if (9 < _DAT_01d0991c) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x4a7;
    FUN_004e4500("Matrix unbalance");
  }
  puVar1 = (uint *)(_DAT_01d0991c * 0x3c + 0x1d09920);
  puVar3 = _DAT_01d09918;
  _DAT_01d09918 = puVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar4 * -2 + 1;
  }
  return;
}
