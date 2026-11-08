// Name: FUN_00511fc0
// Address: 00511fc0
// Address Range: [[00511fc0, 00512025]]
// Convention: unknown
// Signature: void FUN_00511fc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00511fc0(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d22580 = _DAT_01d22580 + 1;
  if (9 < _DAT_01d22580) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x4b7;
    FUN_005030e0("Matrix unbalance");
  }
  puVar1 = (uint *)(_DAT_01d22580 * 0x3c + 0x1d22584);
  puVar3 = _DAT_01d2257c;
  _DAT_01d2257c = puVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar4 * -2 + 1;
  }
  return;
}
