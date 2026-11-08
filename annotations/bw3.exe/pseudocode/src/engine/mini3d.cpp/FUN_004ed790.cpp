// Name: FUN_004ed790
// Address: 004ed790
// Address Range: [[004ed790, 004ed7f5]]
// Convention: unknown
// Signature: void FUN_004ed790(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed790(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d76d00 = _DAT_01d76d00 + 1;
  if (9 < _DAT_01d76d00) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x4b7;
    FUN_004e4330("Matrix unbalance");
  }
  puVar1 = (uint *)(_DAT_01d76d00 * 0x3c + 0x1d76d04);
  puVar3 = _DAT_01d76cfc;
  _DAT_01d76cfc = puVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar4 * -2 + 1;
  }
  return;
}
